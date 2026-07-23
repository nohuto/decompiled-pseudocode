/*
 * XREFs of VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140BA0160
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckRuleEnforcement @ 0x140B851F0 (VfUtilCheckRuleEnforcement.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     MmAreMdlPagesLocked @ 0x140BA6694 (MmAreMdlPagesLocked.c)
 */

void __fastcall VfMiscMmBuildMdlForNonPagedPool_Exit(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u
    && !VerifierNewRuleWorkaround
    && !(unsigned int)MmAreMdlPagesLocked(*(_QWORD *)(a1 + 8))
    && VfUtilCheckRuleEnforcement(*(_QWORD *)a1) )
  {
    CarReportRuleViolationFromNt(
      196,
      320LL,
      CurrentIrql,
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL),
      0xBu,
      *(_QWORD *)a1);
  }
}
