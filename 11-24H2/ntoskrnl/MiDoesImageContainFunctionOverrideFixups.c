/*
 * XREFs of MiDoesImageContainFunctionOverrideFixups @ 0x1408F94A8
 * Callers:
 *     PspLocateSystemDll @ 0x140771E70 (PspLocateSystemDll.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiMapAllImageScpPages @ 0x1408F9404 (MiMapAllImageScpPages.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x140464454 (MiGetControlAreaLoadConfig.c)
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
