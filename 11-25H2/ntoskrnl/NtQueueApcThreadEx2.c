/*
 * XREFs of NtQueueApcThreadEx2 @ 0x1409F6A10
 * Callers:
 *     NtQueueApcThread @ 0x1409F6980 (NtQueueApcThread.c)
 *     NtQueueApcThreadEx @ 0x1409F69C0 (NtQueueApcThreadEx.c)
 * Callees:
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtQueueApcThreadEx2(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        ULONG ApcFlags,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  unsigned __int8 v10; // r15
  KPROCESSOR_MODE PreviousMode; // bp
  char v12; // r14
  NTSTATUS result; // eax
  PVOID v14; // rsi
  _KPROCESS *Process; // rcx
  char *Pool2; // rbx
  void (__fastcall *v17)(void *); // r9
  void (__stdcall *v18)(PVOID); // rbp
  int v19; // ebx
  __int16 v20; // ax
  __int64 v21; // rax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v23; // [rsp+48h] [rbp-20h] BYREF

  v10 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (ApcFlags & 0xFFFEFFFE) != 0 )
    return -1073741811;
  if ( (ApcFlags & 1) == 0 )
  {
    v12 = 0;
    goto LABEL_4;
  }
  if ( ReserveHandle )
    return -1073741811;
  v12 = 1;
LABEL_4:
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  v14 = Object;
  if ( (*((_DWORD *)Object + 29) & 0x400) != 0
    || (v14 = Object, Process = KeGetCurrentThread()->ApcState.Process, Process[1].ReadyTime)
    && ((v20 = WORD2(Process[3].PerProcessorCycleTimes), v20 == 332) || v20 == 452)
    && ((v21 = *((_QWORD *)Object + 68), !*(_QWORD *)(v21 + 784)) || *(_WORD *)(v21 + 1772) == 0x8664)
    && (unsigned __int64)-((__int64)ApcRoutine >> 2) <= 0xFFFFFFFF )
  {
    v19 = -1073741816;
    goto LABEL_15;
  }
  if ( !ReserveHandle )
  {
    Pool2 = (char *)ExAllocatePool2(0x41uLL);
    if ( !Pool2 )
    {
      v19 = -1073741801;
      goto LABEL_15;
    }
    v17 = (void (__fastcall *)(void *))KeSpecialUserApcKernelRoutine;
    v10 = v12 ^ 1;
    v18 = ExFreePool;
    if ( !v12 )
      v17 = PspUserApcKernelRoutine;
LABEL_11:
    KeInitializeApc(
      (__int64)Pool2,
      (__int64)v14,
      0,
      (__int64)v17,
      (__int64)v18,
      (__int64)ApcRoutine,
      v10,
      (__int64)ApcArgument1);
    if ( (ApcFlags & 0x10000) != 0 )
      Pool2[1] |= 1u;
    if ( (unsigned __int8)KeInsertQueueApc((__int64)Pool2, (__int64)ApcArgument2, (__int64)ApcArgument3, 0) )
    {
      v19 = 0;
    }
    else
    {
      guard_dispatch_icall_no_overrides(Pool2);
      v19 = -1073741823;
    }
    goto LABEL_15;
  }
  v23 = 0LL;
  v19 = ObReferenceObjectByHandle(ReserveHandle, 2u, PspMemoryReserveObjectTypes, PreviousMode, &v23, 0LL);
  if ( v19 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v23, 1, 0) )
    {
      ObfDereferenceObject(v23);
      v14 = Object;
      v19 = -1073741584;
      goto LABEL_15;
    }
    v17 = (void (__fastcall *)(void *))PspUserApcReserveKernelRoutine;
    v14 = Object;
    v18 = (void (__stdcall *)(PVOID))PspUserApcReserveRundownRoutine;
    Pool2 = (char *)v23 + 8;
    goto LABEL_11;
  }
LABEL_15:
  ObfDereferenceObject(v14);
  return v19;
}
