/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x1408D8888
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1408D7F4C (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140A0E960 (PspAssignProcessToJob.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MmAdjustWorkingSetSize @ 0x1403C5170 (MmAdjustWorkingSetSize.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MmEnforceWorkingSetLimit @ 0x14047D754 (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // r14
  int v4; // edi
  int v5; // r12d
  __int64 *v6; // rax
  __int64 *v7; // r15
  int v8; // r9d
  bool v9; // zf
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+28h] [rbp-70h]
  _OWORD v16[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 672);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v16);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v14 = *(_QWORD *)(v3 + 1000);
  v15 = *(_QWORD *)(v3 + 1008);
  v5 = ((*(_DWORD *)(v3 + 1056) & 1) == 0) + 1;
  v6 = KeAbPreAcquire((__int64)&qword_140FC60B8, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140FC60B8, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140FC60B8, v6, (__int64)&qword_140FC60B8);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  _InterlockedOr((volatile signed __int32 *)(v3 + 1552), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (LOBYTE(v8) = 1, v4 = MmAdjustWorkingSetSize(v14, v15, 0, v8), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1552), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140FC60B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140FC60B8);
    KeAbPostRelease((ULONG_PTR)&qword_140FC60B8);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v10 = *(_QWORD *)(a1 + 736);
    if ( v10 )
    {
      if ( (*(_DWORD *)(a1 + 500) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488)) )
      {
        v11 = 0LL;
        v12 = *(__int64 **)(a1 + 784);
        if ( v12 )
          v11 = *v12;
        _interlockedbittestandset((volatile signed __int32 *)(v10 + 80), 0);
        if ( v11 )
          _interlockedbittestandset((volatile signed __int32 *)(v11 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488));
      }
      else
      {
        v4 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1552), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140FC60B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140FC60B8);
    KeAbPostRelease((ULONG_PTR)&qword_140FC60B8);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  KiUnstackDetachProcess((__int64)v16, 0LL);
  return (unsigned int)v4;
}
