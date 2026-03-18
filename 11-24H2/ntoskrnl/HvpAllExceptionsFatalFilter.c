/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x1407DEDD4
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1407DEE3C (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x140668C6C (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
}
