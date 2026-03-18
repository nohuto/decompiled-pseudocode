/*
 * XREFs of ?GetLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAUD2D_RECT_F@@@Z @ 0x1801E50E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::GetLetterboxingMargins(
        CDxHandleBitmapRealization *this,
        struct D2D_RECT_F *a2)
{
  if ( (*((_DWORD *)this - 22) & 0x8000) != 0 )
    *a2 = (struct D2D_RECT_F)*((_OWORD *)this - 8);
  return (*((_DWORD *)this - 22) & 0x8000) != 0;
}
