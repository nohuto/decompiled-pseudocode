/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1407A2A38
 * Callers:
 *     WdipSemCleanStart @ 0x1407A0ED0 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x1407A2A64 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
