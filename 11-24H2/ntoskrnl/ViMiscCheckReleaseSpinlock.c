/*
 * XREFs of ViMiscCheckReleaseSpinlock @ 0x140BA8150
 * Callers:
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140BA8130 (VfMiscKeReleaseSpinLock_Entry.c)
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404B2134 (VfMiscCheckKernelAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 *     ViMiscCheckKeLowerIrql @ 0x140BA81D4 (ViMiscCheckKeLowerIrql.c)
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
