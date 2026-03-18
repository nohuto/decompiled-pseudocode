/*
 * XREFs of ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18000A124 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AC70 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x18000CE50 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18007CC64 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x1800DDD70 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180116CF0 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ @ 0x180209EFC (-CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ.c)
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x18021CF7C (--1CBackdropVisualImage@@UEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@33333333343@Z @ 0x18000353C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U2@U1@@-$_tlgWrite.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18000B1B0 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18000BEF4 (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x18000CE1C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE760 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetViewBoxToUVTransform@CBackdropVisualImage@@QEBA?AVMatrix3x2F@D2D1@@XZ @ 0x18019BC58 (-GetViewBoxToUVTransform@CBackdropVisualImage@@QEBA-AVMatrix3x2F@D2D1@@XZ.c)
 *     ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x1801A0068 (-As3DHomogeneous@Matrix3x3@@QEBA-AVCMILMatrix@@XZ.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180252C84 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBackdropVisualImage::LogEtwEvent(__int64 a1, void **a2, void **a3)
{
  __int64 v6; // r12
  char v7; // r13
  __int64 ViewBoxToUVTransform; // rax
  __int64 v9; // rax
  char v10; // di
  CBackdropVisualImage *v11; // rcx
  bool IsValid; // al
  int v13; // r9d
  int v14; // r10d
  __int64 *v15; // rax
  char v16; // bl
  __int64 *DebugString; // rax
  const void *v18; // r8
  __int64 *v19; // rax
  float v20; // xmm2_4
  double v21; // xmm3_8
  __int64 *v22; // rax
  float v23; // xmm2_4
  double v24; // xmm3_8
  __int64 *v25; // rax
  const void *v26; // rbx
  const char **v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const char *v31; // [rsp+90h] [rbp-80h] BYREF
  __int64 v32; // [rsp+98h] [rbp-78h] BYREF
  const char *v33; // [rsp+A0h] [rbp-70h] BYREF
  const char *v34; // [rsp+A8h] [rbp-68h] BYREF
  _BYTE v35[8]; // [rsp+B0h] [rbp-60h] BYREF
  void *v36; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-28h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v45; // [rsp+100h] [rbp-10h] BYREF
  __int64 v46; // [rsp+108h] [rbp-8h] BYREF
  unsigned __int64 CurrentFrameId; // [rsp+110h] [rbp+0h] BYREF
  _BYTE v48[8]; // [rsp+118h] [rbp+8h] BYREF
  _BYTE v49[8]; // [rsp+120h] [rbp+10h] BYREF
  _BYTE v50[8]; // [rsp+128h] [rbp+18h] BYREF
  _BYTE v51[8]; // [rsp+130h] [rbp+20h] BYREF
  _BYTE v52[8]; // [rsp+138h] [rbp+28h] BYREF
  _BYTE v53[8]; // [rsp+140h] [rbp+30h] BYREF
  _BYTE v54[8]; // [rsp+148h] [rbp+38h] BYREF
  _BYTE v55[8]; // [rsp+150h] [rbp+40h] BYREF
  _BYTE v56[8]; // [rsp+158h] [rbp+48h] BYREF
  _BYTE v57[8]; // [rsp+160h] [rbp+50h] BYREF
  _BYTE v58[40]; // [rsp+168h] [rbp+58h] BYREF
  _BYTE v59[72]; // [rsp+190h] [rbp+80h] BYREF
  struct D2D_RECT_F v60; // [rsp+1D8h] [rbp+C8h] BYREF

  LODWORD(v31) = 0;
  if ( dword_180404D50 )
  {
    v6 = a1 + 2072;
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 2072) + 8LL) + 184LL))(*(_QWORD *)(*(_QWORD *)(a1 + 2072) + 8LL));
    ViewBoxToUVTransform = CBackdropVisualImage::GetViewBoxToUVTransform(a1, &v60);
    Matrix3x3::operator*(a1 + 2172, v58, ViewBoxToUVTransform);
    v60 = 0LL;
    v9 = Matrix3x3::As3DHomogeneous(v58, v59);
    CMILMatrix::Transform2DBoundsHelper<0>(v9, *(_QWORD *)(a1 + 2064) + 176LL, &v60);
    v10 = 5;
    if ( (unsigned int)dword_180404D50 > 5 )
    {
      v36 = *a3;
      v37 = *(_QWORD *)(a1 + 2232);
      CBackdropVisualImage::CanUseAsEffectInput((CBackdropVisualImage *)a1);
      IsValid = CBackdropVisualImage::IsValid(v11);
      v38 = *(_QWORD *)DwmDbg::DbgString::DbgString(
                         (DwmDbg::DbgString *)v57,
                         "IsValid=%d, CanUseAsEffectInput=%d, CanUseOcclusion=%d",
                         IsValid,
                         v13,
                         v14);
      if ( *(_BYTE *)(a1 + 2241) )
      {
        v15 = (__int64 *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v56, &v60);
        v16 = 9;
      }
      else
      {
        v15 = (__int64 *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v55, "NoEffectInputTransform");
        v16 = 10;
        v10 = 6;
      }
      v39 = *v15;
      DebugString = (__int64 *)CVisualTreePath::GetDebugString(v6, v54);
      v18 = *(const void **)(a1 + 136);
      v40 = *DebugString;
      if ( v7 )
      {
        v19 = (__int64 *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v53, "0x%p (DesktopRoot)", v18);
      }
      else
      {
        DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v35, "0x%p", v18);
        v19 = (__int64 *)v35;
        v10 = v16;
      }
      v20 = *(float *)(a1 + 2144);
      v21 = *(float *)(a1 + 2148);
      v41 = *v19;
      DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v34, "%.2f, %.2f", v20, v21);
      DwmDbg::DbgString::DbgString(
        (DwmDbg::DbgString *)&v33,
        "%.2f, %.2f",
        *(float *)(a1 + 2152),
        *(float *)(a1 + 2156));
      v22 = (__int64 *)DwmDbg::DbgString::DbgString(
                         (DwmDbg::DbgString *)v52,
                         "RealizationScale=[%s], DPI=[%s]",
                         v33,
                         v34);
      v23 = *(float *)(a1 + 120);
      v24 = *(float *)(a1 + 124);
      v42 = *v22;
      DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v32, "%.2f x %.2f", v23, v24);
      v43 = v32;
      v44 = *(_QWORD *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v51, (const struct D2D_RECT_F *)(a1 + 2128));
      v25 = (__int64 *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v50, (const struct D2D_RECT_F *)(a1 + 96));
      v26 = *(const void **)(a1 + 2064);
      v45 = *v25;
      DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v31, "0x%p", (const void *)a1);
      v27 = (const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v49, "%s, 0x%x", v31, 0);
      v46 = *(_QWORD *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v48, "[%s] -> 0x%p", *v27, v26);
      CurrentFrameId = GetCurrentFrameId();
      *(_QWORD *)&v60.left = *a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        v28,
        (__int64)&unk_1803D86DA,
        v29,
        v30,
        &v60,
        (__int64)&CurrentFrameId,
        &v46,
        &v45,
        &v44,
        &v43,
        &v42,
        &v41,
        &v40,
        &v39,
        &v38,
        (__int64)&v37,
        &v36);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v48);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v49);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v31);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v50);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v51);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v32);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v52);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v33);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v34);
      if ( (v10 & 8) != 0 )
      {
        v10 &= ~8u;
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v35);
      }
      if ( (v10 & 4) != 0 )
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v53);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v54);
      if ( (v10 & 2) != 0 )
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v55);
      if ( (v10 & 1) != 0 )
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v56);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v57);
    }
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(a2);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(a3);
  }
  else
  {
    if ( *a2 )
      operator delete(*a2);
    if ( *a3 )
      operator delete(*a3);
  }
}
