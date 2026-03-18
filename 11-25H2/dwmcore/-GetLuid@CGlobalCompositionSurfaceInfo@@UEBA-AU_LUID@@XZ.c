/*
 * XREFs of ?GetLuid@CGlobalCompositionSurfaceInfo@@UEBA?AU_LUID@@XZ @ 0x18029CA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CGlobalCompositionSurfaceInfo::GetLuid(CGlobalCompositionSurfaceInfo *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 8);
  return (struct _LUID)a2;
}
