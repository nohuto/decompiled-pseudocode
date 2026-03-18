/*
 * XREFs of KeSwapProcessOrStack @ 0x1405C0540
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KiOutSwapKernelStacks @ 0x1402D2D70 (KiOutSwapKernelStacks.c)
 *     KiFastReadyThread @ 0x1402F12A8 (KiFastReadyThread.c)
 *     KiInSwapProcesses @ 0x1402F1450 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x1402F1A54 (KiOutSwapProcesses.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     MmInPageKernelStack @ 0x14046BCA8 (MmInPageKernelStack.c)
 *     KeSwappablePageGetLockedAddress @ 0x14046C218 (KeSwappablePageGetLockedAddress.c)
 *     KeSwappablePageReference @ 0x14046C230 (KeSwappablePageReference.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  __int64 v0; // rcx
  signed __int64 *v1; // rcx
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  ULONG_PTR v4; // rdi
  __int64 v5; // rcx
  __int64 LockedAddress; // rax

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  *(_QWORD *)&KeSwapProcessOrStackThread = KeGetCurrentThread();
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks(v0);
    v1 = (signed __int64 *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v1 )
      KiOutSwapProcesses(v1);
    v2 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v2 )
      KiInSwapProcesses(v2);
    v3 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    while ( v3 )
    {
      v4 = (ULONG_PTR)(v3 - 27);
      v5 = v3[114];
      if ( v5 )
      {
        KeSwappablePageReference(v5);
        LockedAddress = KeSwappablePageGetLockedAddress(*(_QWORD **)(v4 + 1128));
        if ( LockedAddress )
          *(_QWORD *)(v4 + 800) = LockedAddress + *(unsigned int *)(v4 + 1124);
      }
      v3 = (_QWORD *)*v3;
      MmInPageKernelStack(v4);
      _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0x11u);
      KiFastReadyThread(v4);
    }
  }
}
