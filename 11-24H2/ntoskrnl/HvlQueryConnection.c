/*
 * XREFs of HvlQueryConnection @ 0x1404564C0
 * Callers:
 *     HvlPhase0Initialize @ 0x14070C3D8 (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x1408F1048 (EtwpSysModuleRunDown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryConnection(_QWORD *a1)
{
  if ( !HvlpHypercallCodeVa )
    return 3221225473LL;
  if ( a1 )
    *a1 = HvlpHypercallCodeVa;
  return 0LL;
}
