/*
 * XREFs of DbgkQueueUserExceptionReport @ 0x1406FB524
 * Callers:
 *     SepLogLpacAccessFailure @ 0x14048CCB4 (SepLogLpacAccessFailure.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB2078 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     IoThreadToProcess @ 0x140442EB0 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsSuspendThread @ 0x1409BA290 (PsSuspendThread.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkQueueUserExceptionReport(PVOID Object, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // r14
  __int64 Pool2; // rdi
  char v9; // al
  struct _KPROCESS *v10; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v12; // ebp
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v4 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !DbgkEnableWerUserReporting )
    return 3221226326LL;
  if ( (*((_DWORD *)Object + 29) & 0x400) != 0
    || (IoThreadToProcess((PETHREAD)Object)[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) != 0 )
  {
    return 3221225659LL;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)Object + 360, 0x15u) )
    return 3221227268LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  PsReferenceSiloContext(Object);
  *(_QWORD *)Pool2 = Object;
  *(_QWORD *)(Pool2 + 8) = v3;
  if ( a3 )
  {
    *(_OWORD *)(Pool2 + 24) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a3 + 64);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(a3 + 80);
    *(_OWORD *)(Pool2 + 120) = *(_OWORD *)(a3 + 96);
    *(_OWORD *)(Pool2 + 136) = *(_OWORD *)(a3 + 112);
    *(_OWORD *)(Pool2 + 152) = *(_OWORD *)(a3 + 128);
    *(_QWORD *)(Pool2 + 168) = *(_QWORD *)(a3 + 144);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  *(_BYTE *)(Pool2 + 16) = v9;
  *(_QWORD *)(Pool2 + 176) = 0LL;
  *(_QWORD *)(Pool2 + 192) = DbgkUserReportWorkRoutine;
  *(_QWORD *)(Pool2 + 200) = Pool2;
  v10 = IoThreadToProcess((PETHREAD)Object);
  if ( v10 != KeGetCurrentThread()->ApcState.Process )
  {
    KeStackAttachProcess(v10, &ApcState);
    v4 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = PsSuspendThread(Object, 0LL);
  if ( v12 < 0 )
  {
    KeLeaveCriticalRegion();
    ExFreePoolWithTag((PVOID)Pool2, 0x4B474244u);
    _InterlockedAnd((volatile signed __int32 *)Object + 360, 0xFFDFFFFF);
    ObfDereferenceObject(Object);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 176), DelayedWorkQueue);
    KeLeaveCriticalRegion();
  }
  if ( v4 )
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  return (unsigned int)v12;
}
