/*
 * XREFs of KeSwapProcessOrStack @ 0x1405C1EB0
 * Callers:
 *     <none>
 * Callees:
 *     KiOutSwapKernelStacks @ 0x1402600D4 (KiOutSwapKernelStacks.c)
 *     MmInPageKernelStack @ 0x1402DCBD0 (MmInPageKernelStack.c)
 *     KiOutSwapProcesses @ 0x1402DDD00 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x1402DE3B8 (KiInSwapProcesses.c)
 *     KiFastReadyThread @ 0x1402DE4A8 (KiFastReadyThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KeSwappablePageGetLockedAddress @ 0x140470D90 (KeSwappablePageGetLockedAddress.c)
 *     KeSwappablePageReference @ 0x140470DA8 (KeSwappablePageReference.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  signed __int64 *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  ULONG_PTR v7; // rdi
  __int64 v8; // rcx
  __int64 LockedAddress; // rax

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  *(_QWORD *)&KeSwapProcessOrStackThread = KeGetCurrentThread();
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks(v1, v0, v2, v3);
    v4 = (signed __int64 *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v4 )
      KiOutSwapProcesses(v4, v0);
    v5 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v5 )
      KiInSwapProcesses(v5);
    v6 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    while ( v6 )
    {
      v7 = (ULONG_PTR)(v6 - 27);
      v8 = v6[114];
      if ( v8 )
      {
        KeSwappablePageReference(v8);
        LockedAddress = KeSwappablePageGetLockedAddress(*(_QWORD **)(v7 + 1128));
        if ( LockedAddress )
          *(_QWORD *)(v7 + 800) = LockedAddress + *(unsigned int *)(v7 + 1124);
      }
      v6 = (_QWORD *)*v6;
      MmInPageKernelStack(v7);
      _interlockedbittestandset((volatile signed __int32 *)(v7 + 120), 0x11u);
      KiFastReadyThread(v7);
    }
  }
}
