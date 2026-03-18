/*
 * XREFs of ViZwCheckApcRequirement @ 0x140B94C28
 * Callers:
 *     VfZwDeviceIoControlFile_Entry @ 0x140B94400 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140B94850 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140B948C0 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140B94AA0 (VfZwWriteFile_Entry.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1403C3440 (KeAreAllApcsDisabled.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

BOOLEAN __fastcall ViZwCheckApcRequirement(ULONG_PTR a1)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN result; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    return CarReportRuleViolationFromNt(196, 230LL, a1, CurrentIrql, KeGetCurrentThread()->SpecialApcDisable, 8u, a1);
  result = KeAreAllApcsDisabled();
  if ( result )
    return CarReportRuleViolationFromNt(196, 230LL, a1, CurrentIrql, KeGetCurrentThread()->SpecialApcDisable, 8u, a1);
  return result;
}
