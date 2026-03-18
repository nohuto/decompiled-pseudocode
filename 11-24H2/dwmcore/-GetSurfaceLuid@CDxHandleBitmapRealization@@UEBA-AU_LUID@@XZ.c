/*
 * XREFs of ?GetSurfaceLuid@CDxHandleBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1801FBCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDxHandleBitmapRealization::GetSurfaceLuid(CDxHandleBitmapRealization *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 31);
  return (struct _LUID)a2;
}
