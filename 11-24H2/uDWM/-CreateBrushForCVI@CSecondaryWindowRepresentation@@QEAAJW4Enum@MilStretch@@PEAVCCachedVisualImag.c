/*
 * XREFs of ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C9EC
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C49C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180061124 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003CC30 (-CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18003CC3C (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBr.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::CreateBrushForCVI(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        CBaseObject **a6)
{
  CCompositor *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  CMILRefCountBase *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  __int128 v13; // xmm0
  int v14; // eax
  CMILRefCountBase *v16; // [rsp+70h] [rbp-58h] BYREF
  __int128 v17; // [rsp+78h] [rbp-50h] BYREF
  __int128 v18; // [rsp+88h] [rbp-40h] BYREF

  v16 = 0LL;
  v7 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  v17 = 0LL;
  v8 = CCompositor::CreateImageLegacyMilBrushProxy(v7, &v16);
  v10 = v16;
  v11 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x44Fu, 0LL);
LABEL_6:
    if ( v10 )
      CBaseObject::Release(v10);
    return v11;
  }
  if ( a4 )
  {
    v12 = 0;
    v13 = 0LL;
  }
  else
  {
    v13 = _xmm;
    v12 = 1;
  }
  v17 = v13;
  v18 = _xmm;
  v14 = CImageLegacyMilBrushProxy::Update(v16, v9, &v17, &v18, a5, v12, 1, a4, 0LL, 2);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x47Cu, 0LL);
    goto LABEL_6;
  }
  if ( *a6 )
    CBaseObject::Release(*a6);
  *a6 = v10;
  if ( v10 )
  {
    CMILRefCountBase::AddRef(v10);
    goto LABEL_6;
  }
  return v11;
}
