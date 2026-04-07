/*
 * XREFs of ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180055F4C
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800134C0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180054D60 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18004FFAC (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x1800519C0 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureBrushForCVI(CTransitionWindowSnapshot *this)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  CBaseObject *v7; // rcx
  __int64 v9; // [rsp+50h] [rbp-58h]
  __int64 v10; // [rsp+68h] [rbp-40h]
  CBaseObject *v11; // [rsp+70h] [rbp-38h] BYREF
  __int128 v12; // [rsp+78h] [rbp-30h] BYREF
  __int128 v13; // [rsp+88h] [rbp-20h] BYREF

  v1 = 0;
  v11 = 0LL;
  if ( *((_QWORD *)this + 38) )
    return v1;
  v3 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v11);
  v1 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xCCu, 0LL);
    goto LABEL_8;
  }
  v5 = (volatile signed __int32 *)v11;
  v10 = *((_QWORD *)this + 37);
  v13 = _xmm;
  v12 = _xmm;
  v6 = CImageLegacyMilBrushProxy::Update(
         (__int64)v11,
         v4,
         (__int64)&v13,
         (__int64)&v12,
         0LL,
         1u,
         1,
         0LL,
         0LL,
         1,
         v9,
         0,
         0,
         v10);
  v1 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xE7u, 0LL);
LABEL_9:
    if ( v5 )
      CBaseObject::Release((CBaseObject *)v5);
    return v1;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v7 )
    CBaseObject::Release(v7);
  *((_QWORD *)this + 38) = v5;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
LABEL_8:
    v5 = (volatile signed __int32 *)v11;
    goto LABEL_9;
  }
  return v1;
}
