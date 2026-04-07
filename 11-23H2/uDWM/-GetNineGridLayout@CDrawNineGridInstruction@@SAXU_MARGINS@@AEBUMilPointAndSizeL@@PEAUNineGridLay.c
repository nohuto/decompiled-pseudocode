/*
 * XREFs of ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x180051E20
 * Callers:
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x1800517C8 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180051CB0 (-WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawNineGridInstruction::GetNineGridLayout(
        struct _MARGINS *a1,
        const struct MilPointAndSizeL *a2,
        struct NineGridLayout *a3)
{
  int v3; // ebx
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
