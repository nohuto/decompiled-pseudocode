/*
 * XREFs of NtQueueApcThreadEx2 @ 0x1409F6A40
 * Callers:
 *     NtQueueApcThread @ 0x1409F69B0 (NtQueueApcThread.c)
 *     NtQueueApcThreadEx @ 0x1409F69F0 (NtQueueApcThreadEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x140422520 (KeInitializeApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall NtQueueApcThreadEx2(void *a1, void *a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  NTSTATUS v22; // ebx
  __int16 v23; // ax
  __int64 v24; // rax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v26; // [rsp+48h] [rbp-20h] BYREF

  v10 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a3 & 0xFFFEFFFE) != 0 )
    return -1073741811;
  if ( (a3 & 1) == 0 )
  {
    v12 = 0;
    goto LABEL_4;
  }
  if ( a2 )
    return -1073741811;
  v12 = 1;
LABEL_4:
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  v14 = Object;
  if ( (*((_DWORD *)Object + 29) & 0x400) != 0
    || (v14 = Object, Process = KeGetCurrentThread()->ApcState.Process, Process[1].ReadyTime)
    && ((v23 = WORD2(Process[3].PerProcessorCycleTimes), v23 == 332) || v23 == 452)
    && ((v24 = *((_QWORD *)Object + 68), !*(_QWORD *)(v24 + 784)) || *(_WORD *)(v24 + 1772) == 0x8664)
    && (unsigned __int64)-(a4 >> 2) <= 0xFFFFFFFF )
  {
    v22 = -1073741816;
    goto LABEL_15;
  }
  if ( !a2 )
  {
    Pool2 = (char *)ExAllocatePool2(0x41uLL);
    if ( !Pool2 )
    {
      v22 = -1073741801;
      goto LABEL_15;
    }
    v17 = (void (__fastcall *)(void *))KeSpecialUserApcKernelRoutine;
    v10 = v12 ^ 1;
    v18 = ExFreePool;
    if ( !v12 )
      v17 = PspUserApcKernelRoutine;
LABEL_11:
    KeInitializeApc((__int64)Pool2, (__int64)v14, 0, (__int64)v17, (__int64)v18, a4, v10, a5);
    if ( (a3 & 0x10000) != 0 )
      Pool2[1] |= 1u;
    if ( (unsigned __int8)KeInsertQueueApc((__int64)Pool2, a6, a7, 0) )
    {
      v22 = 0;
    }
    else
    {
      guard_dispatch_icall_no_overrides(Pool2, v19, v20, v21);
      v22 = -1073741823;
    }
    goto LABEL_15;
  }
  v26 = 0LL;
  v22 = ObReferenceObjectByHandle(a2, 2u, PspMemoryReserveObjectTypes, PreviousMode, &v26, 0LL);
  if ( v22 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v26, 1, 0) )
    {
      ObfDereferenceObject(v26);
      v14 = Object;
      v22 = -1073741584;
      goto LABEL_15;
    }
    v17 = (void (__fastcall *)(void *))PspUserApcReserveKernelRoutine;
    v14 = Object;
    v18 = (void (__stdcall *)(PVOID))PspUserApcReserveRundownRoutine;
    Pool2 = (char *)v26 + 8;
    goto LABEL_11;
  }
LABEL_15:
  ObfDereferenceObject(v14);
  return v22;
}
