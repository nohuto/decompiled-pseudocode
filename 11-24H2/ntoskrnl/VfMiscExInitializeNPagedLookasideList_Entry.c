/*
 * XREFs of VfMiscExInitializeNPagedLookasideList_Entry @ 0x140B9F940
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     ViMiscValidateSynchronizationObject @ 0x140BA16A8 (ViMiscValidateSynchronizationObject.c)
 */

__int64 __fastcall VfMiscExInitializeNPagedLookasideList_Entry(__int64 *a1)
{
  ULONG_PTR v1; // r9

  v1 = a1[3];
  if ( v1 < 8 )
    CarReportRuleViolationFromNt(196, 205LL, a1[7], v1, 8LL, 0xBu, *a1);
  return ViMiscValidateSynchronizationObject(a1[7]);
}
