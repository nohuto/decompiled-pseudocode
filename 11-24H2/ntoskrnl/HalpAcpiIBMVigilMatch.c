/*
 * XREFs of HalpAcpiIBMVigilMatch @ 0x140C17240
 * Callers:
 *     HalpAcpiIBMExaMatch @ 0x140C17200 (HalpAcpiIBMExaMatch.c)
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 */

__int64 HalpAcpiIBMVigilMatch()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
    HalpInterruptPhysicalModeOnly = 1;
  return result;
}
