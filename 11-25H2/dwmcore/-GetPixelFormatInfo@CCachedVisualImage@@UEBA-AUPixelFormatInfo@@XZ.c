/*
 * XREFs of ?GetPixelFormatInfo@CCachedVisualImage@@UEBA?AUPixelFormatInfo@@XZ @ 0x180040710
 * Callers:
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18003F8E8 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?GetPixelFormatInfo@CCachedVisualImage@@W7EBA?AUPixelFormatInfo@@XZ @ 0x180281720 (-GetPixelFormatInfo@CCachedVisualImage@@W7EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CCachedVisualImage::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // eax

  *a2 = a1[19];
  v2 = a1[20] == 0;
  a2[2] = a1[21] == 2;
  v3 = 1;
  if ( v2 )
    v3 = 3;
  a2[1] = v3;
  return a2;
}
