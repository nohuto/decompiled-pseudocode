/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000C778
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000CDB0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000ECF0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C1F3C (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18000693C (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ??$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z @ 0x180006B94 (--$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000C634 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x180015854 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisual.c)
 *     ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x180033F28 (-GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA-AW4TLWRootVisualType@@XZ.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180033F68 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18004D7CC (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x180055C3C (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        CBaseObject **a3,
        CBaseObject **a4,
        __int64 a5,
        CBaseObject **a6,
        CBaseObject **a7,
        CBaseObject **a8)
{
  CBaseObject **v8; // rsi
  CBaseObject *v12; // rax
  CBaseObject *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  CBaseObject *v16; // rax
  int v17; // eax
  CTransitionWindowSnapshot *v18; // rcx
  CBaseObject *v19; // rax
  int v20; // eax
  __int64 v21; // rsi
  CWindowData *v22; // rcx
  CWindowData *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rbx
  unsigned int TLWRootVisualType; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  CBaseObject *v32; // rcx
  CBaseObject *v33; // rcx
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  CBaseObject *v36; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  int Brush; // eax
  CBaseObject *v42; // [rsp+40h] [rbp-59h] BYREF
  CBaseObject *v43; // [rsp+48h] [rbp-51h] BYREF
  int v44; // [rsp+50h] [rbp-49h]
  CBaseObject *v45; // [rsp+58h] [rbp-41h] BYREF
  CBaseObject *v46; // [rsp+60h] [rbp-39h] BYREF
  CBaseObject *v47; // [rsp+68h] [rbp-31h] BYREF
  CBaseObject **v48; // [rsp+70h] [rbp-29h]
  __int128 v49; // [rsp+78h] [rbp-21h] BYREF
  __int128 v50; // [rsp+88h] [rbp-11h] BYREF

  v8 = a8;
  v48 = a8;
  v47 = 0LL;
  v43 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  if ( a3 )
  {
    v12 = *a3;
    v43 = v12;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    }
    else
    {
      v38 = CCompositor::CreateProxy<CRectResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
              &v43);
      v15 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x3A1u, 0LL);
        goto LABEL_56;
      }
    }
  }
  if ( a4 )
  {
    v13 = *a4;
    v45 = v13;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
    }
    else
    {
      v14 = CCompositor::CreateProxy<CRectResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
              &v45);
      v15 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x3ABu, 0LL);
        goto LABEL_56;
      }
    }
  }
  if ( a6 )
  {
    v16 = *a6;
    v46 = v16;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
    }
    else
    {
      v17 = CCompositor::CreateProxy<CSizeResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
              &v46);
      v15 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x3BFu, 0LL);
        goto LABEL_56;
      }
    }
  }
  v18 = *(CTransitionWindowSnapshot **)(a1 + 408);
  if ( v18 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v18, &v47, &v42, (float *)(a1 + 368));
    v15 = Brush;
    if ( Brush >= 0 )
      goto LABEL_29;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x3C6u, 0LL);
    goto LABEL_54;
  }
  if ( a7 && (v19 = *a7) != 0LL )
  {
    v42 = *a7;
    _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
  }
  else
  {
    v20 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
            &v42);
    v15 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x3D0u, 0LL);
      goto LABEL_56;
    }
  }
  v49 = 0LL;
  if ( v43 )
  {
    v44 = 0;
    v49 = 0LL;
  }
  else
  {
    v49 = _xmm;
    v44 = 1;
  }
  v21 = 0LL;
  if ( (*(_DWORD *)(a1 + 40) & 0x100) == 0 )
    v21 = *(_QWORD *)(a1 + 48);
  v22 = 0LL;
  v23 = *(CWindowData **)(a1 + 64);
  switch ( *(_DWORD *)(a1 + 72) )
  {
    case 1:
      goto LABEL_19;
    case 2:
      v39 = *((_QWORD *)v23 + 60);
      if ( v39 )
      {
        v22 = *(CWindowData **)(v39 + 32);
        break;
      }
LABEL_19:
      v22 = v23;
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
        goto LABEL_19;
      v22 = *(CWindowData **)(*((_QWORD *)v23 + 61) + 80LL);
      break;
  }
  if ( (!CWindowData::IsImmersiveWindow(v22) || *(_DWORD *)(a1 + 72) != 3) && !v21 )
  {
    v24 = 0LL;
    v25 = *(_QWORD *)(a1 + 64);
    switch ( *(_DWORD *)(a1 + 72) )
    {
      case 1:
LABEL_23:
        v24 = v25;
        break;
      case 2:
        v40 = *(_QWORD *)(v25 + 480);
        if ( !v40 )
          goto LABEL_23;
        v24 = *(_QWORD *)(v40 + 32);
        break;
      case 3:
        if ( CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
          goto LABEL_23;
        v24 = *(_QWORD *)(*(_QWORD *)(v25 + 488) + 80LL);
        break;
    }
    v26 = *(_QWORD *)(v24 + 440);
    if ( v26 )
    {
      TLWRootVisualType = CSecondaryWindowRepresentation::GetTLWRootVisualType(a1);
      CTopLevelWindow::GetRootVisualNoAddRef(v26, TLWRootVisualType);
    }
  }
  v50 = 0LL;
  v28 = CCachedVisualImageProxy::Update(v42, &v49, &v50, v43);
  v15 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x404u, 0LL);
    goto LABEL_56;
  }
  v31 = CSecondaryWindowRepresentation::CreateBrushForCVI(v30, v29, (__int64)v42, (__int64)v45, 0LL, &v47);
  v15 = v31;
  if ( v31 >= 0 )
  {
    v8 = v48;
LABEL_29:
    if ( v8 )
    {
      if ( *v8 )
        CBaseObject::Release(*v8);
      v32 = v47;
      *v8 = v47;
      if ( v32 )
        _InterlockedIncrement((volatile signed __int32 *)v32 + 2);
    }
    if ( a3 )
    {
      if ( *a3 )
        CBaseObject::Release(*a3);
      v33 = v43;
      *a3 = v43;
      if ( v33 )
        _InterlockedIncrement((volatile signed __int32 *)v33 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v34 = v45;
      *a4 = v45;
      if ( v34 )
        _InterlockedIncrement((volatile signed __int32 *)v34 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v35 = v46;
      *a6 = v46;
      if ( v35 )
        _InterlockedIncrement((volatile signed __int32 *)v35 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v36 = v42;
      *a7 = v42;
      if ( v36 )
        _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
    }
    goto LABEL_54;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x406u, 0LL);
LABEL_54:
  if ( v47 )
    CBaseObject::Release(v47);
LABEL_56:
  if ( v43 )
    CBaseObject::Release(v43);
  if ( v45 )
    CBaseObject::Release(v45);
  if ( v46 )
    CBaseObject::Release(v46);
  if ( v42 )
    CBaseObject::Release(v42);
  return v15;
}
