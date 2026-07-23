/*
 * XREFs of KeSwitchFrozenProcessor @ 0x1405BF100
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiSetDebuggerOwner @ 0x1404F8B84 (KiSetDebuggerOwner.c)
 *     KeSetVpThreadLowPriorityOverride @ 0x1405B4E30 (KeSetVpThreadLowPriorityOverride.c)
 *     KiCheckStall @ 0x1405BF1C0 (KiCheckStall.c)
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
