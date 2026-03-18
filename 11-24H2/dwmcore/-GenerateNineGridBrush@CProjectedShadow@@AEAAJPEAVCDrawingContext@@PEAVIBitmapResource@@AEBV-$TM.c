/*
 * XREFs of ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x18028D778
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18006976C (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801324D0 (-SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1801ED864 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@_N@Z @ 0x1801FA1AC (--0CNineGridBrush@@QEAA@PEAVCComposition@@_N@Z.c)
 *     ?SetInsets@CNineGridBrush@@QEAAXMMMM@Z @ 0x1802A14E0 (-SetInsets@CNineGridBrush@@QEAAXMMMM@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  int SurfaceBrush; // eax
  float v16; // xmm2_4
  float v17; // xmm1_4
  unsigned int v19; // [rsp+20h] [rbp-38h]
  CNineGridBrush *v20[5]; // [rsp+30h] [rbp-28h] BYREF
  struct CBrush *v21; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v20[0] = 0LL;
  v21 = 0LL;
  *a5 = 0LL;
  v9 = (CNineGridBrush *)DefaultHeap::AllocClear(0xB0uLL);
  if ( v9 )
    v9 = CNineGridBrush::CNineGridBrush(v9, *(struct CComposition **)(a1 + 24), 1);
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)v20, (__int64)v9);
  v11 = (struct CResource **)v20[0];
  if ( v20[0] )
  {
    v21 = 0LL;
    SurfaceBrush = CProjectedShadow::GenerateSurfaceBrush(a1, v10, a3, a4, (struct IBitmapRealization *)&v21);
    v12 = SurfaceBrush;
    if ( SurfaceBrush < 0 )
    {
      v19 = 1113;
    }
    else
    {
      SurfaceBrush = CNineGridBrush::SetSource(v11, v21);
      v12 = SurfaceBrush;
      if ( SurfaceBrush >= 0 )
      {
        v16 = (float)(a4->bottom - a4->top) * 0.5;
        v17 = (float)(a4->right - a4->left) * 0.5;
        CNineGridBrush::SetInsets((CNineGridBrush *)v11, v17, v16, 80.0 / v17, 80.0 / v16);
        v20[0] = 0LL;
        *v5 = v11;
        goto LABEL_11;
      }
      v19 = 1115;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SurfaceBrush, v19, 0LL);
    goto LABEL_11;
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x454u, 0LL);
LABEL_11:
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    &v21,
    v13,
    v14);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v20);
  return v12;
}
