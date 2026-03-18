/*
 * XREFs of ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x180298BE8
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A05AC (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180103E3C (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@_N@Z @ 0x180112BCC (--0CNineGridBrush@@QEAA@PEAVCComposition@@_N@Z.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x180113AB0 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x180131474 (-SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8938 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetInsets@CNineGridBrush@@QEAAXMMMM@Z @ 0x1802AB000 (-SetInsets@CNineGridBrush@@QEAAXMMMM@Z.c)
 */

__int64 __fastcall CProjectedShadow::GenerateNineGridBrush(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct D2D_RECT_F *a4,
        struct CResource ***a5)
{
  struct CResource ***v5; // r14
  CNineGridBrush *v9; // rax
  __int64 v10; // rdx
  struct CResource **v11; // rdi
  unsigned int v12; // ebx
  int SurfaceBrush; // eax
  float v14; // xmm2_4
  float v15; // xmm1_4
  unsigned int v17; // [rsp+20h] [rbp-38h]
  CNineGridBrush *v18[5]; // [rsp+30h] [rbp-28h] BYREF
  struct CBrush *v19; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v18[0] = 0LL;
  v19 = 0LL;
  *a5 = 0LL;
  v9 = (CNineGridBrush *)DefaultHeap::AllocClear(0xB0uLL);
  if ( v9 )
    v9 = CNineGridBrush::CNineGridBrush(v9, *(struct CComposition **)(a1 + 24), 1);
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)v18, (__int64)v9);
  v11 = (struct CResource **)v18[0];
  if ( v18[0] )
  {
    v19 = 0LL;
    SurfaceBrush = CProjectedShadow::GenerateSurfaceBrush(a1, v10, a3, a4, (struct IBitmapRealization *)&v19);
    v12 = SurfaceBrush;
    if ( SurfaceBrush < 0 )
    {
      v17 = 1113;
    }
    else
    {
      SurfaceBrush = CNineGridBrush::SetSource(v11, v19);
      v12 = SurfaceBrush;
      if ( SurfaceBrush >= 0 )
      {
        v14 = (float)(a4->bottom - a4->top) * 0.5;
        v15 = (float)(a4->right - a4->left) * 0.5;
        CNineGridBrush::SetInsets((CNineGridBrush *)v11, v15, v14, 80.0 / v15, 80.0 / v14);
        v18[0] = 0LL;
        *v5 = v11;
        goto LABEL_11;
      }
      v17 = 1115;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SurfaceBrush, v17, 0LL);
    goto LABEL_11;
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x454u, 0LL);
LABEL_11:
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v18);
  return v12;
}
