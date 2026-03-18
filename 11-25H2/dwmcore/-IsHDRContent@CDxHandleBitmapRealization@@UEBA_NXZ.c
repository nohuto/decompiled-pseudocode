/*
 * XREFs of ?IsHDRContent@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180233BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsHDRContent(CDxHandleBitmapRealization *this)
{
  return *((_BYTE *)this - 86) & 1;
}
