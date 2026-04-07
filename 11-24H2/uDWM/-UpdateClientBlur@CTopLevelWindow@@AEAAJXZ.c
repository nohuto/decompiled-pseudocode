/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180063124
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001F770 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180027CFC (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180029224 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002BC00 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002EFAC (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18002F428 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003A524 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800635E8 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x180063844 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x180063990 (-CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z.c)
 *     ??$GetFirstNonNull@VCLegacyNonClientBackground@@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVCVisual@@PEAVCLegacyNonClientBackground@@PEAVCSpriteVisual@@PEAVCAccent@@PEAVCSystemBackdropVisual@@@Z @ 0x180083808 (--$GetFirstNonNull@VCLegacyNonClientBackground@@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r9
  unsigned int v3; // ebx
  CBaseObject *v4; // r13
  CBaseObject *v5; // r15
  CRenderDataVisual *v6; // rcx
  int v8; // r10d
  CBaseObject **v9; // r12
  int v10; // r8d
  int v11; // edx
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  int v15; // r9d
  int v16; // r8d
  int v17; // eax
  int v18; // r8d
  int RectangleGeometry; // eax
  struct CVisual **v20; // rsi
  __int64 v21; // r8
  CBaseObject *v22; // r14
  HRGN v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  int v26; // eax
  __int64 v27; // r8
  int v28; // eax
  struct CBaseGeometryProxy *v29; // r12
  struct CBaseLegacyMilBrushProxy **v30; // r14
  int v31; // eax
  int v32; // eax
  CBaseObject *v33; // rcx
  int SolidColorLegacyMilBrushProxy; // eax
  int updated; // eax
  float *v36; // rax
  CSolidColorLegacyMilBrushProxy *v37; // rcx
  int v38; // eax
  int v39; // ecx
  struct CVisual *FirstNon; // rax
  int inserted; // eax
  const struct _MARGINS *v42; // rdx
  int v43; // eax
  CBaseObject *v44; // [rsp+30h] [rbp-40h] BYREF
  struct CDrawGeometryInstruction *v45; // [rsp+38h] [rbp-38h] BYREF
  CBaseObject *v46; // [rsp+40h] [rbp-30h]
  HRGN hrgn; // [rsp+48h] [rbp-28h] BYREF
  struct _D3DCOLORVALUE v48; // [rsp+50h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 89);
  v44 = 0LL;
  v3 = 0;
  v46 = 0LL;
  v4 = 0LL;
  v45 = 0LL;
  v5 = 0LL;
  if ( (*(_BYTE *)(v1 + 737) & 4) == 0 )
  {
    v6 = (CRenderDataVisual *)*((_QWORD *)this + 37);
    if ( v6 )
    {
      v43 = CRenderDataVisual::ClearInstructions(v6);
      v3 = v43;
      if ( v43 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0xF82u, 0LL);
    }
    return v3;
  }
  if ( *(_QWORD *)(v1 + 424) )
  {
    v9 = (CBaseObject **)((char *)this + 560);
    v33 = (CBaseObject *)*((_QWORD *)this + 70);
    if ( v33 )
    {
      CBaseObject::Release(v33);
      *v9 = 0LL;
    }
  }
  else
  {
    v8 = *(_DWORD *)(v1 + 284);
    v9 = (CBaseObject **)((char *)this + 560);
    v10 = 0;
    v11 = *(_DWORD *)(v1 + 292);
    if ( *(_DWORD *)(v1 + 232) - *(_DWORD *)(v1 + 224) >= 0 )
      v10 = *(_DWORD *)(v1 + 232) - *(_DWORD *)(v1 + 224);
    v12 = 0;
    v13 = v10 - *(_DWORD *)(v1 + 296) - *(_DWORD *)(v1 + 280) - *(_DWORD *)(v1 + 276);
    if ( *(_DWORD *)(v1 + 228) - *(_DWORD *)(v1 + 220) >= 0 )
      v12 = *(_DWORD *)(v1 + 228) - *(_DWORD *)(v1 + 220);
    v14 = v12 - *(_DWORD *)(v1 + 288) - *(_DWORD *)(v1 + 272) - *(_DWORD *)(v1 + 268);
    v15 = 0;
    v16 = v13 - v11;
    if ( v16 >= 0 )
      v15 = v16;
    v17 = v14 - v8;
    v18 = 0;
    if ( v17 >= 0 )
      v18 = v17;
    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                          v8,
                          v11,
                          v18,
                          v15,
                          (struct CRectangleGeometryProxy **)this + 70);
    v3 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0xF30u, 0LL);
      return v3;
    }
  }
  v20 = (struct CVisual **)((char *)this + 296);
  if ( !*((_QWORD *)this + 37) )
  {
    v38 = CCanvasVisual::Create((struct CCanvasVisual **)this + 37);
    v3 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0xF3Bu, 0LL);
      return v3;
    }
    FirstNon = (struct CVisual *)CTopLevelWindow::GetFirstNonNull<CLegacyNonClientBackground,CSpriteVisual,CAccent,CSystemBackdropVisual>(
                                   v39,
                                   *((_QWORD *)this + 34),
                                   *((_QWORD *)this + 36),
                                   *((_QWORD *)this + 32),
                                   *((_QWORD *)this + 35));
    inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 31), *v20, FirstNon);
    v3 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xF3Eu, 0LL);
      return v3;
    }
    v42 = (const struct _MARGINS *)*((_QWORD *)this + 69);
    if ( v42 )
      CVisual::SetInsetFromParent((struct _MARGINS *)*v20, v42 + 5);
    CTopLevelWindow::UpdateWindowScale(this);
  }
  if ( !*((_DWORD *)*v20 + 58) )
  {
    v21 = *((_QWORD *)this + 89);
    v22 = *(CBaseObject **)(v21 + 424);
    if ( !v22 )
      v22 = *v9;
    v23 = 0LL;
    hrgn = 0LL;
    v24 = *(_QWORD *)(v21 + 24);
    if ( v24 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v24 + 312LL))(v24, &hrgn);
      v3 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0xF4Fu, 0LL);
        return v3;
      }
      v23 = hrgn;
    }
    else
    {
      v3 = 0;
    }
    if ( v23 )
    {
      *(_QWORD *)&v48.r = 0LL;
      v26 = ResourceHelper::CreateGeometryFromHRGN(v23, &v44);
      v3 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0xF56u, 0LL);
        v4 = v44;
        goto LABEL_31;
      }
      v4 = v44;
      v28 = ResourceHelper::CreateCombinedGeometry(v44, v22, v27, &v48);
      v3 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xF5Fu, 0LL);
        goto LABEL_31;
      }
      v29 = *(struct CBaseGeometryProxy **)&v48.r;
      v46 = *(CBaseObject **)&v48.r;
    }
    else
    {
      v46 = v22;
      v29 = v22;
      if ( v22 )
        CMILRefCountBase::AddRef(v22);
    }
    v30 = (struct CBaseLegacyMilBrushProxy **)((char *)this + 744);
    if ( *((_QWORD *)this + 93) )
      goto LABEL_26;
    SolidColorLegacyMilBrushProxy = CCompositor::CreateSolidColorLegacyMilBrushProxy(
                                      *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                      (struct CSolidColorLegacyMilBrushProxy **)this + 93);
    v3 = SolidColorLegacyMilBrushProxy;
    if ( SolidColorLegacyMilBrushProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SolidColorLegacyMilBrushProxy, 0xF6Bu, 0LL);
    }
    else
    {
      updated = CTopLevelWindow::UpdateColorizationColor((CGlassColorizationResources **)this);
      v3 = updated;
      if ( updated >= 0 )
      {
        v36 = (float *)*((_QWORD *)this + 71);
        v37 = *v30;
        v48.r = v36[4] * v36[8];
        v48.g = v36[5] * v36[8];
        v48.b = v36[6] * v36[8];
        v48.a = v36[7];
        CSolidColorLegacyMilBrushProxy::Update(v37, 1.0, &v48);
LABEL_26:
        if ( !*((_DWORD *)*v20 + 58) )
        {
          v31 = CDrawGeometryInstruction::Create(*v30, v29, &v45);
          v3 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0xF78u, 0LL);
            v5 = v45;
          }
          else
          {
            v5 = v45;
            v32 = CRenderDataVisual::AddInstruction(*v20, v45);
            v3 = v32;
            if ( v32 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0xF7Au, 0LL);
          }
        }
        goto LABEL_31;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xF6Du, 0LL);
    }
LABEL_31:
    if ( v4 )
      CBaseObject::Release(v4);
    if ( v46 )
      CBaseObject::Release(v46);
    if ( v5 )
      CBaseObject::Release(v5);
  }
  return v3;
}
