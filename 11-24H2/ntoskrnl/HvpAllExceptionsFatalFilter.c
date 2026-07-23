/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x1407DF324
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1407DF38C (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x140669E44 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
}
