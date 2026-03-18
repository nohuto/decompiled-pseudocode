/*
 * XREFs of ?GetPixelFormatInfo@CHolographicInteropTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180276A70
 * Callers:
 *     ?GetPixelFormatInfo@CHolographicInteropTarget@@WFA@EBA?AUPixelFormatInfo@@XZ @ 0x180276A90 (-GetPixelFormatInfo@CHolographicInteropTarget@@WFA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHolographicInteropTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  _DWORD *result; // rax

  v2 = *(_DWORD *)(a1 + 168);
  a2[2] = 0;
  *a2 = v2;
  result = a2;
  a2[1] = 1;
  return result;
}
