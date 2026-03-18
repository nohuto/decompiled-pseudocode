/*
 * XREFs of HalpAcpiIBMVigilMatch @ 0x140C041B0
 * Callers:
 *     HalpAcpiIBMExaMatch @ 0x140C04170 (HalpAcpiIBMExaMatch.c)
 * Callees:
 *     HalpInterruptModel @ 0x1404469AC (HalpInterruptModel.c)
 */

__int64 HalpAcpiIBMVigilMatch()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
    HalpInterruptPhysicalModeOnly = 1;
  return result;
}
