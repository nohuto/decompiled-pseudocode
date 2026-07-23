/*
 * XREFs of _local_unwind @ 0x1404FB730
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x1403C16E0 (ExpCenturyDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x140464180 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1404840A0 (KiBalanceSetManagerDeferredRoutine.c)
 *     IopTimerDispatch @ 0x140490110 (IopTimerDispatch.c)
 *     ExpTimerDpcRoutine @ 0x140491570 (ExpTimerDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404A93F0 (ExpTimeRefreshDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1405D1860 (PopThermalZoneDpc.c)
 *     ExpTimeZoneDpcRoutine @ 0x140651EA0 (ExpTimeZoneDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x140666670 (CmpEnableLazyFlushDpcRoutine.c)
 *     SLGetSubscriptionPfn @ 0x1407B9B58 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt1 @ 0x140C2C720 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt10 @ 0x140C2C770 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140C2C940 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140C2C9D0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140C2CA20 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt2 @ 0x140C2CA80 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt3 @ 0x140C2CAD0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140C2CB20 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140C2CB70 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140C2CBC0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140C2CC20 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140C2CC80 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140C2CCE0 (KiVerifyXcpt9.c)
 *     KiVerifyXcptFinally @ 0x140C2CD6C (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x140230F50 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
