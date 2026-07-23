/*
 * XREFs of MiPatchCfgCallTargetsSort @ 0x1407F5A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPatchCfgCallTargetsSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
