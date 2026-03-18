/*
 * XREFs of ??8@YA_NAEBU_GUID@@0@Z @ 0x1800D0D50
 * Callers:
 *     ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x1800D0820 (-GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z.c)
 *     ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800D0A30 (-IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a1 - *a2;
  if ( *a1 == *a2 )
    v2 = a1[1] - a2[1];
  return v2 == 0;
}
