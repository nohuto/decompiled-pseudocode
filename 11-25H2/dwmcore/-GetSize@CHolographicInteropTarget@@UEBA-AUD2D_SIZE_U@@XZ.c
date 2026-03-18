/*
 * XREFs of ?GetSize@CHolographicInteropTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180281CE0
 * Callers:
 *     ?GetSize@CHolographicInteropTarget@@WEI@EBA?AUD2D_SIZE_U@@XZ @ 0x180281D00 (-GetSize@CHolographicInteropTarget@@WEI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CHolographicInteropTarget@@WFA@EBA?AUD2D_SIZE_U@@XZ @ 0x180281D10 (-GetSize@CHolographicInteropTarget@@WFA@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CHolographicInteropTarget::GetSize(CHolographicInteropTarget *this, _DWORD *a2)
{
  struct D2D_SIZE_U result; // rax

  *a2 = 0;
  result = (struct D2D_SIZE_U)a2;
  a2[1] = 0;
  return result;
}
