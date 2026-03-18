/*
 * XREFs of PopFxDisableWorkOrderWatchdog @ 0x1403160B0
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x140315E30 (PopFxDispatchPluginWorkOnce.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F9C8C (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall PopFxDisableWorkOrderWatchdog(__int64 *BugCheckParameter2)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdi
  __int64 *v4; // rax
  __int64 **v5; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( BugCheckParameter2 )
  {
    if ( !KeCancelTimer((PKTIMER)(BugCheckParameter2 + 2)) )
      PopFxBugCheck(0x618uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter2[21], 0LL);
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
    BugCheckParameter2[21] = 0LL;
    BugCheckParameter2[19] = 0LL;
    v3 = v2;
    v4 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v5 = (__int64 **)BugCheckParameter2[1], *v5 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    v4[1] = (__int64)v5;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&PopWorkOrderLock, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&PopWorkOrderLock, retaddr);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = v3;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    }
    __writecr8(v3);
  }
}
