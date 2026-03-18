/*
 * XREFs of ACPIEcGpioDpcRoutine @ 0x14004F3D0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEcCommonDpcHandler @ 0x140017F0C (AcpiEcCommonDpcHandler.c)
 *     ACPIEcUnmaskInterrupt @ 0x140019270 (ACPIEcUnmaskInterrupt.c)
 */

_UNKNOWN **__fastcall ACPIEcGpioDpcRoutine(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax

  result = (_UNKNOWN **)AcpiEcCommonDpcHandler(a2);
  if ( (*(_BYTE *)(a2 + 2290) & 1) == 0 )
    return ACPIEcUnmaskInterrupt(a2);
  return result;
}
