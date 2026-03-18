/*
 * XREFs of HvlQueryConnection @ 0x140461BD0
 * Callers:
 *     HvlPhase0Initialize @ 0x140702968 (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x140A60FE4 (EtwpSysModuleRunDown.c)
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
