/*
 * XREFs of KeSwitchFrozenProcessor @ 0x1405C1B30
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7A32C (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KiSetDebuggerOwner @ 0x1404FB2A4 (KiSetDebuggerOwner.c)
 *     KeSetVpThreadLowPriorityOverride @ 0x1405B7860 (KeSetVpThreadLowPriorityOverride.c)
 *     KiCheckStall @ 0x1405C1BF0 (KiCheckStall.c)
 */

__int64 __fastcall KeSwitchFrozenProcessor(ULONG a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rdx

  v1 = a1;
  if ( a1 < KeQueryActiveProcessorCountEx(0xFFFFu) && !PoAllProcIntrDisabled )
  {
    _mm_lfence();
    v2 = KiProcessorBlock[v1];
    if ( ((*(_DWORD *)(v2 + 11656) - 2) & 0xFFFFFFFD) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      KiSetDebuggerOwner(v2);
      if ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
        return 3LL;
      if ( (CurrentPrcb->IpiFrozen & 0xF) != 4 )
        return 0LL;
      KeSetVpThreadLowPriorityOverride((__int64)CurrentPrcb, 1);
      KeQueryPerformanceCounter(0LL);
      while ( CurrentPrcb != (struct _KPRCB *)KiDebuggerOwner )
      {
        LOBYTE(v5) = 1;
        KiCheckStall(CurrentPrcb, v5);
      }
      KeSetVpThreadLowPriorityOverride((__int64)CurrentPrcb, 0);
    }
  }
  return 2LL;
}
