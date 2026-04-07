/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180018860
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x180009A0C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x18000A9DC (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 *     ??$GetFirstNonNull@VCLegacyNonClientBackground@@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVCVisual@@PEAVCLegacyNonClientBackground@@PEAVCSpriteVisual@@PEAVCAccent@@PEAVCSystemBackdropVisual@@@Z @ 0x18000B3CC (--$GetFirstNonNull@VCLegacyNonClientBackground@@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019608 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180019BB4 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x1800351CC (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180039180 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18003FB60 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18004F730 (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18005093C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x1800511EC (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r8
  unsigned int v3; // ebx
  CBaseObject *v4; // r15
  CBaseObject *v5; // r14
  CRenderDataVisual *v6; // rcx
  volatile signed __int32 **v8; // r13
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int RectangleGeometry; // eax
  struct CVisual **v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  struct CVisual *FirstNon; // rax
  int inserted; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  volatile signed __int32 *v21; // rsi
  HRGN v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  __int64 v26; // r8
  int CombinedGeometry; // eax
  struct CBaseGeometryProxy *v28; // r13
  struct CBaseLegacyMilBrushProxy **v29; // rsi
  int v30; // eax
  int updated; // eax
  float *v32; // rax
  CSolidColorLegacyMilBrushProxy *v33; // rcx
  int v34; // eax
  int v35; // eax
  CBaseObject *v36; // rcx
  int v37; // eax
  bool v38; // [rsp+20h] [rbp-50h]
  CBaseObject *v39; // [rsp+30h] [rbp-40h] BYREF
  struct CRenderDataInstruction *v40; // [rsp+38h] [rbp-38h] BYREF
  CBaseObject *v41; // [rsp+40h] [rbp-30h]
  HRGN hrgn; // [rsp+48h] [rbp-28h] BYREF
  _D3DCOLORVALUE v43; // [rsp+50h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 94);
  v39 = 0LL;
  v3 = 0;
  v41 = 0LL;
  v4 = 0LL;
  v40 = 0LL;
  v5 = 0LL;
  if ( (*(_BYTE *)(v1 + 673) & 4) == 0 )
  {
    v6 = (CRenderDataVisual *)*((_QWORD *)this + 42);
    if ( v6 )
    {
      v37 = CRenderDataVisual::ClearInstructions(v6);
      v3 = v37;
      if ( v37 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xF3Au, 0LL);
    }
    return v3;
  }
  if ( *(_QWORD *)(v1 + 424) )
  {
    v8 = (volatile signed __int32 **)((char *)this + 600);
    v36 = (CBaseObject *)*((_QWORD *)this + 75);
    if ( v36 )
    {
      CBaseObject::Release(v36);
      *v8 = 0LL;
    }
  }
  else
  {
    v8 = (volatile signed __int32 **)((char *)this + 600);
    v9 = *(_DWORD *)(v1 + 224) - *(_DWORD *)(v1 + 216);
    v10 = *(_DWORD *)(v1 + 228) - *(_DWORD *)(v1 + 220);
    v43.r = *(D3DVALUE *)(v1 + 280);
    v11 = 0;
    if ( v9 >= 0 )
      v11 = v9;
    LODWORD(v43.b) = v11 - *(_DWORD *)(v1 + 284) - *(_DWORD *)(v1 + 268) - *(_DWORD *)(v1 + 264);
    v43.g = *(D3DVALUE *)(v1 + 288);
    v12 = 0;
    if ( v10 >= 0 )
      v12 = v10;
    LODWORD(v43.a) = v12 - *(_DWORD *)(v1 + 292) - *(_DWORD *)(v1 + 276) - *(_DWORD *)(v1 + 272);
    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                          (const struct tagRECT *)&v43,
                          (struct CRectangleGeometryProxy **)this + 75);
    v3 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0xEE8u, 0LL);
      return v3;
    }
  }
  v14 = (struct CVisual **)((char *)this + 336);
  if ( !*((_QWORD *)this + 42) )
  {
    v15 = CCanvasVisual::Create((struct CCanvasVisual **)this + 42);
    v3 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xEF3u, 0LL);
      return v3;
    }
    FirstNon = (struct CVisual *)CTopLevelWindow::GetFirstNonNull<CLegacyNonClientBackground,CSpriteVisual,CAccent,CSystemBackdropVisual>(
                                   v16,
                                   *((_QWORD *)this + 39),
                                   *((_QWORD *)this + 41),
                                   *((_QWORD *)this + 37),
                                   *((_QWORD *)this + 40));
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
                 *v14,
                 FirstNon,
                 1,
                 v38);
    v3 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xEF6u, 0LL);
      return v3;
    }
    v19 = *((_QWORD *)this + 74);
    if ( v19 )
      CVisual::SetInsetFromParent(*v14, (const struct _MARGINS *)(v19 + 136));
    CTopLevelWindow::UpdateWindowScale(this);
  }
  if ( !*((_DWORD *)*v14 + 70) )
  {
    v20 = *((_QWORD *)this + 94);
    v21 = *(volatile signed __int32 **)(v20 + 424);
    if ( !v21 )
      v21 = *v8;
    v22 = 0LL;
    hrgn = 0LL;
    v23 = *(_QWORD *)(v20 + 24);
    if ( v23 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v23 + 320LL))(v23, &hrgn);
      v3 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xF07u, 0LL);
        return v3;
      }
      v22 = hrgn;
    }
    else
    {
      v3 = 0;
    }
    if ( v22 )
    {
      *(_QWORD *)&v43.r = 0LL;
      v25 = ResourceHelper::CreateGeometryFromHRGN(v22, &v39);
      v3 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xF0Eu, 0LL);
        v4 = v39;
        goto LABEL_33;
      }
      v4 = v39;
      CombinedGeometry = ResourceHelper::CreateCombinedGeometry((__int64)v39, (__int64)v21, v26, (CBaseObject **)&v43);
      v3 = CombinedGeometry;
      if ( CombinedGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CombinedGeometry, 0xF17u, 0LL);
        goto LABEL_33;
      }
      v28 = *(struct CBaseGeometryProxy **)&v43.r;
      v41 = *(CBaseObject **)&v43.r;
    }
    else
    {
      v41 = (CBaseObject *)v21;
      v28 = (struct CBaseGeometryProxy *)v21;
      if ( v21 )
      {
        _InterlockedIncrement(v21 + 2);
        v4 = v39;
        v5 = v40;
      }
    }
    v29 = (struct CBaseLegacyMilBrushProxy **)((char *)this + 784);
    if ( *((_QWORD *)this + 98) )
      goto LABEL_30;
    v30 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
            (char *)this + 784);
    v3 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xF23u, 0LL);
    }
    else
    {
      updated = CTopLevelWindow::UpdateColorizationColor(this);
      v3 = updated;
      if ( updated >= 0 )
      {
        v32 = (float *)*((_QWORD *)this + 76);
        v33 = *v29;
        v43.r = v32[4] * v32[8];
        v43.g = v32[5] * v32[8];
        v43.b = v32[6] * v32[8];
        v43.a = v32[7];
        CSolidColorLegacyMilBrushProxy::Update(v33, 1.0, &v43);
LABEL_30:
        if ( !*((_DWORD *)*v14 + 70) )
        {
          v34 = CDrawGeometryInstruction::Create(*v29, v28, &v40);
          v3 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xF30u, 0LL);
            v5 = v40;
          }
          else
          {
            v5 = v40;
            v35 = CRenderDataVisual::AddInstruction(*v14, v40);
            v3 = v35;
            if ( v35 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xF32u, 0LL);
          }
        }
        goto LABEL_33;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xF25u, 0LL);
    }
LABEL_33:
    if ( v4 )
      CBaseObject::Release(v4);
    if ( v41 )
      CBaseObject::Release(v41);
    if ( v5 )
      CBaseObject::Release(v5);
  }
  return v3;
}
