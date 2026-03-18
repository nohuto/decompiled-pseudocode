/*
 * XREFs of HvlQueryConnection @ 0x140461030
 * Callers:
 *     HvlPhase0Initialize @ 0x14070E848 (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x14094CAD8 (EtwpSysModuleRunDown.c)
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
