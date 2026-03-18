/*
 * XREFs of _local_unwind @ 0x1404FDE70
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x14034A450 (ExpCenturyDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x14046B580 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1404890E0 (KiBalanceSetManagerDeferredRoutine.c)
 *     IopTimerDispatch @ 0x140495850 (IopTimerDispatch.c)
 *     ExpTimerDpcRoutine @ 0x140496BE0 (ExpTimerDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404AEAE0 (ExpTimeRefreshDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1405D40A0 (PopThermalZoneDpc.c)
 *     ExpTimeZoneDpcRoutine @ 0x140653740 (ExpTimeZoneDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x140667D80 (CmpEnableLazyFlushDpcRoutine.c)
 *     SLGetSubscriptionPfn @ 0x1407B9708 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140BDEC40 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt1 @ 0x140C2A600 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt10 @ 0x140C2A650 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140C2A820 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140C2A8B0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140C2A900 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt2 @ 0x140C2A960 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt3 @ 0x140C2A9B0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140C2AA00 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140C2AA50 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140C2AAA0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140C2AB00 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140C2AB60 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140C2ABC0 (KiVerifyXcpt9.c)
 *     KiVerifyXcptFinally @ 0x140C2AC4C (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x14027B9C0 (RtlUnwind.c)
 */

__int64 __fastcall local_unwind(int a1, int a2)
{
  return RtlUnwind(a1, a2, 0, 0);
}
