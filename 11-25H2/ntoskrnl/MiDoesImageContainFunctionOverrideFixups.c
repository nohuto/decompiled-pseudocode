/*
 * XREFs of MiDoesImageContainFunctionOverrideFixups @ 0x14090469C
 * Callers:
 *     PspLocateSystemDll @ 0x1407624B0 (PspLocateSystemDll.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiMapAllImageScpPages @ 0x1409045F8 (MiMapAllImageScpPages.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x140465A8C (MiGetControlAreaLoadConfig.c)
 */

bool __fastcall MiDoesImageContainFunctionOverrideFixups(__int64 a1)
{
  __int64 ControlAreaLoadConfig; // r8
  bool result; // al

  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(a1);
  result = 0;
  if ( ControlAreaLoadConfig )
    return *(_QWORD *)(ControlAreaLoadConfig + 24) != 0LL;
  return result;
}
