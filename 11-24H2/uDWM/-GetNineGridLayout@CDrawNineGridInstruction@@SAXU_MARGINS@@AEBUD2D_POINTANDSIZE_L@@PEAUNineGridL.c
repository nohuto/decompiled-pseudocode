/*
 * XREFs of ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@PEAUNineGridLayout@@@Z @ 0x18003B8EC
 * Callers:
 *     ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18003AA50 (-WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18003ABC8 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18003B0F0 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawNineGridInstruction::GetNineGridLayout(
        struct _MARGINS *a1,
        const struct D2D_POINTANDSIZE_L *a2,
        struct NineGridLayout *a3)
{
  int v3; // r11d
  __int64 v4; // r9
  int v5; // r10d
  int cxLeftWidth; // edx
  int cxRightWidth; // edi
  int v9; // eax
  int cyBottomHeight; // edx
  int cyTopHeight; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx

  v3 = *((_DWORD *)a2 + 2);
  v4 = 0LL;
  v5 = *((_DWORD *)a2 + 3);
  cxLeftWidth = a1->cxLeftWidth;
  cxRightWidth = a1->cxRightWidth;
  *(_DWORD *)a3 = 0;
  if ( cxLeftWidth + cxRightWidth > v3 )
  {
    v9 = v3 * cxLeftWidth / (cxLeftWidth + cxRightWidth);
    cxLeftWidth = v9;
  }
  else
  {
    v9 = v3 - cxRightWidth;
  }
  *((_DWORD *)a3 + 1) = cxLeftWidth;
  *((_DWORD *)a3 + 2) = v9;
  cyBottomHeight = a1->cyBottomHeight;
  cyTopHeight = a1->cyTopHeight;
  *((_DWORD *)a3 + 3) = v3;
  *((_DWORD *)a3 + 4) = 0;
  if ( cyTopHeight + cyBottomHeight > v5 )
  {
    v12 = v5 * cyTopHeight / (cyTopHeight + cyBottomHeight);
    cyTopHeight = v12;
  }
  else
  {
    v12 = v5 - cyBottomHeight;
  }
  *((_DWORD *)a3 + 5) = cyTopHeight;
  *((_DWORD *)a3 + 6) = v12;
  v13 = *((_DWORD *)a2 + 1);
  v14 = *(_DWORD *)a2;
  *((_DWORD *)a3 + 7) = v5;
  do
  {
    *((_DWORD *)a3 + v4 + 4) += v13;
    *((_DWORD *)a3 + v4++) += v14;
  }
  while ( v4 <= 3 );
}
