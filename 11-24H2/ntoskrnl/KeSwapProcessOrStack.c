/*
 * XREFs of KeSwapProcessOrStack @ 0x1405C4890
 * Callers:
 *     <none>
 * Callees:
 *     KiOutSwapKernelStacks @ 0x140268FB8 (KiOutSwapKernelStacks.c)
 *     KiFastReadyThread @ 0x1403385A4 (KiFastReadyThread.c)
 *     KiInSwapProcesses @ 0x1403389A4 (KiInSwapProcesses.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     KiOutSwapProcesses @ 0x14042D320 (KiOutSwapProcesses.c)
 *     MmInPageKernelStack @ 0x14046A04C (MmInPageKernelStack.c)
 *     KeSwappablePageGetLockedAddress @ 0x14046A5B4 (KeSwappablePageGetLockedAddress.c)
 *     KeSwappablePageReference @ 0x14046A5CC (KeSwappablePageReference.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  signed __int64 *v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  __int64 LockedAddress; // rax

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  *(_QWORD *)&KeSwapProcessOrStackThread = KeGetCurrentThread();
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks(v1);
    v2 = (signed __int64 *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v2 )
      KiOutSwapProcesses(v2, v0);
    v3 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v3 )
      KiInSwapProcesses(v3);
    v4 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    while ( v4 )
    {
      v5 = (ULONG_PTR)(v4 - 27);
      v6 = v4[114];
      if ( v6 )
      {
        KeSwappablePageReference(v6);
        LockedAddress = KeSwappablePageGetLockedAddress(*(_QWORD **)(v5 + 1128));
        if ( LockedAddress )
          *(_QWORD *)(v5 + 800) = LockedAddress + *(unsigned int *)(v5 + 1124);
      }
      v4 = (_QWORD *)*v4;
      MmInPageKernelStack(v5);
      _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0x11u);
      KiFastReadyThread(v5);
    }
  }
}
