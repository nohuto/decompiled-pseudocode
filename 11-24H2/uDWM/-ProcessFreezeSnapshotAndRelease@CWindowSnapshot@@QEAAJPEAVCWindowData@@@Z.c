/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008B44
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180006F48 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180004314 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18000471C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180019954 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?OnClientAreaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001D854 (-OnClientAreaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001F770 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x1800216C8 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021728 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180023A5C (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18002F080 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003A524 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z @ 0x18003C2D0 (-Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18003C2F8 (-Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C49C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18003CD84 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18003DAC8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18003E3A0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003E46C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUD2D_POINTANDSIZE_L@@@Z @ 0x18003E6CC (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?CreateRectResourceProxy@CCompositor@@QEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18006DE28 (-CreateRectResourceProxy@CCompositor@@QEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180085AD8 (-OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  struct CWindowData *v4; // r15
  CBaseObject *v5; // r12
  __int64 v6; // rax
  D2D_SIZE_F v7; // rsi
  int v8; // eax
  CTopLevelWindow *v9; // r14
  int RectResourceProxy; // ebx
  __int64 v11; // rcx
  struct IDwmWindow *v12; // rax
  int v13; // eax
  struct CWindowData *RepresentationWindowData; // rax
  LONG v15; // r9d
  LONG v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  LONG v19; // eax
  int v20; // r9d
  LONG v21; // ecx
  int v22; // eax
  __int64 i; // rax
  int v24; // r15d
  __int64 v25; // rdx
  float ScalingFactorForCVI; // xmm0_4
  int v27; // eax
  CSizeResourceProxy *v28; // rcx
  int v29; // r9d
  int v30; // r8d
  unsigned int v31; // ecx
  unsigned int v32; // eax
  float v33; // xmm1_4
  bool v34; // sf
  __m128i v35; // xmm0
  FLOAT width; // eax
  float v37; // xmm0_4
  int v38; // eax
  CVisual **v39; // r15
  int v40; // eax
  bool v41; // r8
  CBaseObject *v42; // rcx
  struct CRectangleGeometryProxy **v44; // [rsp+20h] [rbp-59h]
  unsigned int v45; // [rsp+20h] [rbp-59h]
  D2D_SIZE_F v46; // [rsp+40h] [rbp-39h] BYREF
  CMILRefCountBase *v47; // [rsp+48h] [rbp-31h] BYREF
  int v48; // [rsp+50h] [rbp-29h]
  struct tagRECT v49; // [rsp+58h] [rbp-21h] BYREF
  int v50[2]; // [rsp+68h] [rbp-11h] BYREF
  int v51; // [rsp+70h] [rbp-9h]
  int v52; // [rsp+74h] [rbp-5h]
  CBaseObject *v53; // [rsp+78h] [rbp-1h] BYREF
  int v54; // [rsp+80h] [rbp+7h]
  struct D2D_RECT_F v55; // [rsp+88h] [rbp+Fh] BYREF

  v4 = a2;
  v47 = 0LL;
  v5 = 0LL;
  v53 = 0LL;
  v6 = *((_QWORD *)this + 4);
  v7 = 0LL;
  v46 = 0LL;
  *(_DWORD *)(v6 + 64) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  v8 = CTopLevelWindow::Create(*((struct CWindowData **)this + 4), &v47);
  v9 = v47;
  RectResourceProxy = v8;
  if ( v8 < 0 )
  {
    v45 = 181;
    goto LABEL_60;
  }
  v11 = *((_QWORD *)v4 + 3);
  if ( v11 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 72LL))(v11) )
    {
      v12 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 3) + 352LL))(*((_QWORD *)v4 + 3));
      if ( v12 )
      {
        v47 = 0LL;
        CWindowList::GetSyncedWindowData(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
          v12,
          0,
          &v47);
        LODWORD(v4) = (_DWORD)v47;
      }
    }
  }
  *((_QWORD *)a2 + 60) = 0LL;
  LODWORD(v44) = 100;
  v13 = CSecondaryWindowRepresentation::Create(
          1543,
          ((_DWORD)this + 16) & (unsigned int)-(this != 0LL),
          (int)v4,
          0,
          v44,
          (__int64)&v46);
  RectResourceProxy = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xCCu, 0LL);
    v7 = v46;
    goto LABEL_61;
  }
  v7 = v46;
  RectResourceProxy = CSecondaryWindowRepresentation::Validate(*(CSecondaryWindowRepresentation **)&v46);
  if ( RectResourceProxy < 0 )
  {
    v45 = 206;
    goto LABEL_60;
  }
  RectResourceProxy = CCompositor::CreateRectResourceProxy(
                        *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                        (struct CRectResourceProxy **)this + 7);
  if ( RectResourceProxy < 0 )
  {
    v45 = 209;
    goto LABEL_60;
  }
  CSecondaryWindowRepresentation::GetRelativeWindowRect(*(CSecondaryWindowRepresentation **)&v7, &v49);
  RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CWindowRepresentation *)(*(_QWORD *)&v7 + 64LL));
  v15 = v49.right - *((_DWORD *)RepresentationWindowData + 24);
  v16 = *((_DWORD *)RepresentationWindowData + 24) + v49.left;
  v17 = *((_QWORD *)RepresentationWindowData + 13);
  v18 = v17 + v49.top;
  v19 = v49.bottom - HIDWORD(v17);
  v49.right = v15;
  v49.bottom = v19;
  v49.top += v17;
  v20 = v15 - v16;
  LODWORD(v47) = v20;
  v21 = v19;
  v49.left = v16;
  if ( v20 < 0 )
    v20 = 0;
  *(_QWORD *)v50 = 0LL;
  v54 = v20;
  v22 = v19 - v18;
  LODWORD(v46.width) = v21 - v18;
  v55 = 0LL;
  if ( v22 < 0 )
    v22 = 0;
  v48 = v22;
  for ( i = 0LL; i < 16; i += 4LL )
    *(float *)((char *)&v55.left + i) = (float)*(int *)((char *)&v49.left + i);
  RectResourceProxy = CRectResourceProxy::Update(*((CRectResourceProxy **)this + 7), &v55);
  if ( RectResourceProxy < 0 )
  {
    v45 = 226;
    goto LABEL_60;
  }
  v24 = v54;
  RectResourceProxy = ResourceHelper::CreateRectangleGeometry(
                        0,
                        0,
                        v54,
                        v48,
                        (struct CRectangleGeometryProxy **)this + 11);
  if ( RectResourceProxy < 0 )
  {
    v45 = 228;
    goto LABEL_60;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v49);
  *((float *)this + 18) = ScalingFactorForCVI;
  v51 = (int)(float)((float)v24 * ScalingFactorForCVI);
  v52 = (int)(float)((float)v48 * ScalingFactorForCVI);
  if ( !*((_QWORD *)this + 6) )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v24 * ScalingFactorForCVI),
      (int)(float)((float)v48 * ScalingFactorForCVI),
      (struct CCachedVisualImageProxy **)this + 6);
  v27 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CSecondaryWindowRepresentation::GetBrush)(
          v7,
          v25,
          (char *)this + 56,
          0LL);
  RectResourceProxy = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xF7u, 0LL);
    goto LABEL_61;
  }
  if ( *(_BYTE *)(*(_QWORD *)&v7 + 161LL) )
  {
    v31 = (unsigned int)v47;
    v32 = 0;
    v33 = *(float *)(*(_QWORD *)&v7 + 368LL);
    v34 = (int)v47 < 0;
    *((float *)this + 18) = v33;
    if ( !v34 )
      v32 = v31;
    v35 = _mm_cvtsi32_si128(v32);
    width = 0.0;
    LODWORD(v37) = _mm_cvtepi32_ps(v35).m128_u32[0];
    if ( v46.width >= 0.0 )
      width = v46.width;
    v30 = (int)(float)(v37 * v33);
    v29 = (int)(float)((float)SLODWORD(width) * v33);
  }
  else
  {
    v28 = (CSizeResourceProxy *)*((_QWORD *)this + 8);
    v46.width = (float)v51;
    v46.height = (float)v52;
    RectResourceProxy = CSizeResourceProxy::Update(v28, &v46);
    if ( RectResourceProxy < 0 )
    {
      v45 = 254;
LABEL_60:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectResourceProxy, v45, 0LL);
      goto LABEL_61;
    }
    CSecondaryWindowRepresentation::SnapshotIfStatic(
      *(CSecondaryWindowRepresentation **)&v7,
      *((struct CCachedVisualImageProxy **)this + 6),
      *((struct CImageLegacyMilBrushProxy **)this + 5),
      (const struct D2D_POINTANDSIZE_L *)v50);
    v29 = v52;
    v30 = v51;
  }
  RectResourceProxy = ResourceHelper::CreateRectangleGeometry(
                        v50[0],
                        v50[1],
                        v30,
                        v29,
                        (struct CRectangleGeometryProxy **)this + 11);
  if ( RectResourceProxy < 0 )
  {
    v45 = 265;
    goto LABEL_60;
  }
  RectResourceProxy = CContainerVisual::Create((struct CContainerVisual **)this + 12);
  if ( RectResourceProxy < 0 )
  {
    v45 = 267;
    goto LABEL_60;
  }
  v38 = CDrawGeometryInstruction::Create(
          *((struct CBaseLegacyMilBrushProxy **)this + 5),
          *((struct CBaseGeometryProxy **)this + 11),
          &v53);
  RectResourceProxy = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x110u, 0LL);
    goto LABEL_50;
  }
  v39 = (CVisual **)((char *)this + 80);
  v40 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 10);
  RectResourceProxy = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x112u, 0LL);
LABEL_50:
    v5 = v53;
    goto LABEL_61;
  }
  CVisual::SetScale(*v39, 1.0 / *((float *)this + 18), 1.0 / *((float *)this + 18));
  CVisual::SetInterpolationMode(*v39, 1LL);
  v5 = v53;
  RectResourceProxy = CRenderDataVisual::AddInstruction(*v39, v53);
  if ( RectResourceProxy < 0 )
  {
    v45 = 278;
    goto LABEL_60;
  }
  RectResourceProxy = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)*v39 + 48LL))(*v39);
  if ( RectResourceProxy < 0 )
  {
    v45 = 279;
    goto LABEL_60;
  }
  *(_QWORD *)(*((_QWORD *)this + 4) + 144LL) = *(_QWORD *)(*((_QWORD *)this + 12) + 16LL);
  RectResourceProxy = CContainerVisual::AddChild(*((CContainerVisual **)this + 12), *v39, v41);
  if ( RectResourceProxy < 0 )
  {
    v45 = 283;
    goto LABEL_60;
  }
  CTopLevelWindow::OnClientAreaUpdated(v9);
  CTopLevelWindow::OnClientMarginsUpdated(v9);
  RectResourceProxy = CTopLevelWindow::ShowWindow(v9, 1);
  if ( RectResourceProxy < 0 )
  {
    v45 = 288;
    goto LABEL_60;
  }
  RectResourceProxy = CContainerVisual::RenderRecursive(v9);
  if ( RectResourceProxy < 0 )
  {
    v45 = 289;
    goto LABEL_60;
  }
  v42 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v42 )
    CBaseObject::Release(v42);
  *((_QWORD *)this + 3) = v9;
  if ( v9 )
    CMILRefCountBase::AddRef(v9);
  *((_QWORD *)a2 + 60) = this;
  *(_BYTE *)(*((_QWORD *)this + 4) + 740LL) &= ~8u;
LABEL_61:
  if ( v9 )
    CBaseObject::Release(v9);
  if ( v5 )
    CBaseObject::Release(v5);
  if ( v7 )
    CBaseObject::Release(*(CBaseObject **)&v7);
  return (unsigned int)RectResourceProxy;
}
