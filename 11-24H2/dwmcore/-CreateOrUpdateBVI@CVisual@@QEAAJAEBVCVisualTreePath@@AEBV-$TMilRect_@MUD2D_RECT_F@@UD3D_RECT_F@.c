/*
 * XREFs of ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000A138
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800097B8 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AB78 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 * Callees:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x180007900 (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000ACA0 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x180039AC0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A0D70 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x1800D5FB0 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x1801AB960 (-GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBackdropVisualImage@@@Z @ 0x1801EA660 (--0-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBackdropVisual.c)
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1801FDA6C (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180247CD8 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18024F55C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 */

__int64 __fastcall CVisual::CreateOrUpdateBVI(
        struct CVisual *a1,
        struct CVisualTreePath *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  CVisual *v7; // rsi
  const struct CVisualTree *v8; // rbp
  CTreeData *v9; // r15
  struct CBackdropVisualImage *BackdropVisualImage; // rax
  struct CBackdropVisualImage *v11; // rdi
  bool v12; // bp
  DwmDbg::Backdrops *v13; // rcx
  const char **DebugString; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // ebx
  _BYTE v19[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v20[8]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-38h] BYREF
  struct CBackdropVisualImage *v22; // [rsp+88h] [rbp+10h] BYREF

  v7 = *(CVisual **)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 72LL);
  v8 = *(const struct CVisualTree **)(*((_QWORD *)a2 + 1) - 8LL);
  v9 = CVisual::EnsureTreeData(a1, v8);
  BackdropVisualImage = CTreeData::GetBackdropVisualImage(v9, a2);
  wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>(
    &v22,
    BackdropVisualImage);
  v11 = v22;
  if ( !v22 )
  {
    v12 = CVisual::GetVisualTreeNoRef(v7) == v8;
    v22 = 0LL;
    CBackdropVisualImage::Create(g_pComposition, a1, a2, v12, &v22);
    v11 = v22;
    CTreeData::SetBackdropVisualImage(v9, a2, v22);
    if ( DwmDbg::Backdrops::IsEtwEnabled(v13) )
    {
      DebugString = (const char **)CVisualTreePath::GetDebugString(a2, v19);
      v15 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v20, "pBVI=0x%p, bviPath=[%s]", v11, *DebugString);
      v16 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v21, "Visual-CreatedNewBVI");
      DwmDbg::Backdrops::LogBrushEtwEvent(v16, a1, v15);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v19);
    }
  }
  v17 = CBackdropVisualImage::ValidateRootAndSourceRectangle(v11, a5);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(&v22);
  return v17;
}
