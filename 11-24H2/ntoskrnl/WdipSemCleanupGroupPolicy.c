/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1407A2928
 * Callers:
 *     WdipSemCleanStart @ 0x1407A0DC0 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x1407A2954 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
