/*
 * XREFs of PopFxDisableWorkOrderWatchdog @ 0x1402BEC64
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x1402BE9E4 (PopFxDispatchPluginWorkOnce.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F756C (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
