/*
 * XREFs of ViMiscCheckReleaseSpinlock @ 0x140BAA150
 * Callers:
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140BAA130 (VfMiscKeReleaseSpinLock_Entry.c)
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404AC9C4 (VfMiscCheckKernelAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     ViMiscCheckKeLowerIrql @ 0x140BAA1D4 (ViMiscCheckKeLowerIrql.c)
 */

__int64 __fastcall ViMiscCheckReleaseSpinlock(ULONG_PTR BugCheckParameter3, char a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // di

  VfMiscCheckKernelAddress(BugCheckParameter3, 8uLL, a3);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    CarReportRuleViolationFromNt(196, 50LL, CurrentIrql, BugCheckParameter3, 0LL, 0xBu, a3);
  LOBYTE(v6) = a2;
  LOBYTE(v7) = CurrentIrql;
  return ViMiscCheckKeLowerIrql(v7, v6, a3);
}
