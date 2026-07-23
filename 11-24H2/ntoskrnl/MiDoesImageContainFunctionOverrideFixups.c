/*
 * XREFs of MiDoesImageContainFunctionOverrideFixups @ 0x14091BD84
 * Callers:
 *     PspLocateSystemDll @ 0x140772090 (PspLocateSystemDll.c)
 *     MiMapAllImageScpPages @ 0x14091BCE0 (MiMapAllImageScpPages.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x14045AB84 (MiGetControlAreaLoadConfig.c)
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
