/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z @ 0x18008919C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x1800031FC (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003CC30 (-CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18003CC3C (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBr.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18008A83C (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z @ 0x1800DA728 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromThumbnail(
        __int64 a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        char a5,
        CBaseObject **a6,
        CBaseObject **a7,
        float *a8)
{
  unsigned int v8; // r14d
  const struct tagRECT *v9; // r10
  CMILRefCountBase *v11; // rdi
  int CVI; // esi
  CWindowSnapshot *v13; // rcx
  float v14; // xmm0_4
  CMILRefCountBase *v15; // rbx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // [rsp+58h] [rbp-69h]
  const struct tagRECT *v23; // [rsp+78h] [rbp-49h] BYREF
  int v24; // [rsp+80h] [rbp-41h]
  CMILRefCountBase *v25; // [rsp+88h] [rbp-39h] BYREF
  __int128 v26; // [rsp+90h] [rbp-31h] BYREF
  CMILRefCountBase *v27[2]; // [rsp+A0h] [rbp-21h] BYREF

  v8 = 0;
  v9 = a4;
  v23 = a4;
  *a8 = 1.0;
  v11 = 0LL;
  a8[1] = 1.0;
  CVI = -2147467259;
  a8[2] = 1.0;
  v24 = a3;
  v27[0] = 0LL;
  v25 = 0LL;
  if ( !a2 )
    return (unsigned int)CVI;
  v13 = *(CWindowSnapshot **)(a2 + 480);
  if ( v13 )
  {
    LODWORD(v23) = 0;
    CVI = CWindowSnapshot::GetCVI(v13, a4, v27, (float *)&v23);
    v14 = 1.0 / *(float *)&v23;
    a8[1] = 1.0 / *(float *)&v23;
    *a8 = v14;
    if ( CVI >= 0 )
    {
LABEL_17:
      v15 = v27[0];
      if ( (v24 & 0x4000000) != 0 )
        CCachedVisualImageProxy::Freeze(v27[0]);
      v19 = CCompositor::CreateImageLegacyMilBrushProxy(
              *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
              &v25);
      CVI = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v19,
          0x932u,
          0LL);
        v11 = v25;
      }
      else
      {
        v11 = v25;
        *(_OWORD *)v27 = _xmm;
        v26 = _xmm;
        v21 = CImageLegacyMilBrushProxy::Update(
                (__int64)v25,
                v20,
                (__int64)v27,
                (__int64)&v26,
                0LL,
                1u,
                1,
                0LL,
                0LL,
                1,
                v22,
                0,
                0,
                (__int64)v15);
        CVI = v21;
        if ( v21 >= 0 )
        {
          if ( *a7 )
            CBaseObject::Release(*a7);
          *a7 = v15;
          if ( v15 )
            CMILRefCountBase::AddRef(v15);
          if ( *a6 )
            CBaseObject::Release(*a6);
          *a6 = v11;
          if ( v11 )
            CMILRefCountBase::AddRef(v11);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v21,
            0x94Du,
            0LL);
        }
      }
      goto LABEL_5;
    }
  }
  else
  {
    while ( v8 < *(_DWORD *)(a2 + 592) )
    {
      v17 = *(_QWORD *)(a2 + 568);
      *(_QWORD *)&v26 = 0x3F8000003F800000LL;
      DWORD2(v26) = 1065353216;
      if ( CThumbnailVisual::GetCVI(
             *(CThumbnailVisual **)(*(_QWORD *)(v17 + 8LL * v8) + 88LL),
             v9,
             v27,
             (struct D2D_POINT_3F *)&v26) >= 0
        && (!a5
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v26 - 1.0) & _xmm) <= 0.0000011920929
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v26 + 1) - 1.0) & _xmm) <= 0.0000011920929) )
      {
        v18 = DWORD2(v26);
        *(_QWORD *)a8 = v26;
        *((_DWORD *)a8 + 2) = v18;
        goto LABEL_17;
      }
      v9 = v23;
      ++v8;
    }
  }
  v15 = v27[0];
LABEL_5:
  if ( v15 )
    CBaseObject::Release(v15);
  if ( v11 )
    CBaseObject::Release(v11);
  return (unsigned int)CVI;
}
