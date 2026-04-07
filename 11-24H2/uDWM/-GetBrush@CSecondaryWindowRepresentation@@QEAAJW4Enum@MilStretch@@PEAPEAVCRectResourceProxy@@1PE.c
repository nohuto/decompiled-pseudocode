/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C49C
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008B44 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C4D78 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180019920 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001C5C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C9EC (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18003CB6C (-Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PE.c)
 *     ?CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18003CD78 (-CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18003DAC8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x18003E0B4 (-GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA-AW4TLWRootVisualType@@XZ.c)
 *     ?CreateRectResourceProxy@CCompositor@@QEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18006DE28 (-CreateRectResourceProxy@CCompositor@@QEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18007C888 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisual.c)
 *     ?CreateSizeResourceProxy@CCompositor@@QEAAJPEAPEAVCSizeResourceProxy@@@Z @ 0x1800873C4 (-CreateSizeResourceProxy@CCompositor@@QEAAJPEAPEAVCSizeResourceProxy@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        struct CSizeResourceProxy **a3,
        struct CSizeResourceProxy **a4,
        __int64 a5,
        CBaseObject **a6,
        CMILRefCountBase **a7,
        CBaseObject **a8)
{
  CMILRefCountBase *v8; // r12
  CMILRefCountBase *v9; // rdi
  struct CSizeResourceProxy *v11; // rsi
  struct CSizeResourceProxy *v12; // r15
  CBaseObject *v13; // r14
  CTransitionWindowSnapshot *v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int128 v17; // xmm0
  bool v18; // zf
  __int64 RootVisualNoAddRef; // rbx
  CWindowData *RepresentationWindowData; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  int TLWRootVisualType; // eax
  _QWORD *v28; // r8
  int Brush; // eax
  CBaseObject **v30; // r13
  CBaseObject **v31; // r13
  CBaseObject **v32; // r13
  CBaseObject **v33; // r13
  CMILRefCountBase **v34; // r13
  int v35; // eax
  int v36; // eax
  int v37; // eax
  struct CSizeResourceProxy *v38; // [rsp+40h] [rbp-59h] BYREF
  CMILRefCountBase *v39; // [rsp+48h] [rbp-51h] BYREF
  CMILRefCountBase *v40; // [rsp+50h] [rbp-49h] BYREF
  CBaseObject **v41; // [rsp+58h] [rbp-41h]
  CBaseObject **v42; // [rsp+60h] [rbp-39h]
  CMILRefCountBase **v43; // [rsp+68h] [rbp-31h]
  CBaseObject **v44; // [rsp+70h] [rbp-29h]
  CBaseObject **v45; // [rsp+78h] [rbp-21h]
  __int128 v46; // [rsp+80h] [rbp-19h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v42 = a6;
  v11 = 0LL;
  v12 = 0LL;
  v44 = a8;
  v13 = 0LL;
  v41 = a4;
  v45 = a3;
  v43 = a7;
  v40 = 0LL;
  v39 = 0LL;
  if ( a3 )
  {
    v11 = *a3;
    v38 = v11;
    if ( v11 )
    {
      CMILRefCountBase::AddRef(v11);
    }
    else
    {
      v36 = CCompositor::CreateRectResourceProxy(
              *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
              &v38);
      v16 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x396u, 0LL);
        v11 = v38;
        goto LABEL_20;
      }
      v11 = v38;
      a4 = v41;
    }
  }
  if ( a4 )
  {
    v12 = *a4;
    v38 = v12;
    if ( v12 )
    {
      CMILRefCountBase::AddRef(v12);
    }
    else
    {
      v37 = CCompositor::CreateRectResourceProxy(
              *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
              &v38);
      v16 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0x3A0u, 0LL);
        v12 = v38;
        goto LABEL_20;
      }
      v12 = v38;
    }
  }
  if ( v42 )
  {
    v13 = *v42;
    v38 = v13;
    if ( v13 )
    {
      CMILRefCountBase::AddRef(v13);
    }
    else
    {
      v35 = CCompositor::CreateSizeResourceProxy(
              *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
              &v38);
      v16 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x3B4u, 0LL);
        v13 = v38;
        goto LABEL_20;
      }
      v13 = v38;
    }
  }
  v14 = *(CTransitionWindowSnapshot **)(a1 + 408);
  if ( v14 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v14, &v40, &v39, (float *)(a1 + 368));
    v16 = Brush;
    if ( Brush >= 0 )
    {
      v9 = v39;
      goto LABEL_37;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Brush, 0x3BBu, 0LL);
    v8 = v40;
  }
  else
  {
    if ( v43 )
    {
      v9 = *v43;
      if ( *v43 )
      {
        CMILRefCountBase::AddRef(*v43);
LABEL_8:
        v17 = 0LL;
        v46 = 0LL;
        if ( v11 )
        {
          LODWORD(v39) = 0;
        }
        else
        {
          v17 = _xmm;
          LODWORD(v39) = 1;
        }
        v18 = (*(_DWORD *)(a1 + 40) & 0x100) == 0;
        v46 = v17;
        if ( v18 )
          RootVisualNoAddRef = *(_QWORD *)(a1 + 48);
        else
          RootVisualNoAddRef = 0LL;
        RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CWindowRepresentation *)(a1 + 64));
        if ( CWindowData::IsImmersiveWindow(RepresentationWindowData) && *(_DWORD *)(a1 + 72) == 3 )
        {
          if ( *(_QWORD *)(a1 + 376) )
          {
            RootVisualNoAddRef = *(_QWORD *)(a1 + 376);
            goto LABEL_14;
          }
        }
        else
        {
          if ( RootVisualNoAddRef )
            goto LABEL_14;
          if ( !*((_QWORD *)CWindowRepresentation::GetRepresentationWindowData((CWindowRepresentation *)(a1 + 64)) + 55) )
          {
LABEL_32:
            v21 = 0LL;
LABEL_15:
            v38 = 0LL;
            v22 = CCachedVisualImageProxy::Update(v9, &v46, &v38, v11, v13, v21, (_DWORD)v39);
            v16 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x3F9u, 0LL);
              goto LABEL_20;
            }
            v25 = CSecondaryWindowRepresentation::CreateBrushForCVI(v24, v23, v9, v12, 0LL, &v40);
            v16 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x3FBu, 0LL);
              v8 = v40;
              goto LABEL_18;
            }
LABEL_37:
            v30 = v44;
            v8 = v40;
            if ( v44 )
            {
              if ( *v44 )
                CBaseObject::Release(*v44);
              *v30 = v8;
              if ( v8 )
                CMILRefCountBase::AddRef(v8);
            }
            v31 = v45;
            if ( v45 )
            {
              if ( *v45 )
                CBaseObject::Release(*v45);
              *v31 = v11;
              if ( v11 )
                CMILRefCountBase::AddRef(v11);
            }
            v32 = v41;
            if ( v41 )
            {
              if ( *v41 )
                CBaseObject::Release(*v41);
              *v32 = v12;
              if ( v12 )
                CMILRefCountBase::AddRef(v12);
            }
            v33 = v42;
            if ( v42 )
            {
              if ( *v42 )
                CBaseObject::Release(*v42);
              *v33 = v13;
              if ( v13 )
                CMILRefCountBase::AddRef(v13);
            }
            v34 = v43;
            if ( v43 )
            {
              if ( *v43 )
                CBaseObject::Release(*v43);
              *v34 = v9;
              if ( v9 )
                CMILRefCountBase::AddRef(v9);
            }
            goto LABEL_18;
          }
          TLWRootVisualType = CSecondaryWindowRepresentation::GetTLWRootVisualType(a1);
          RootVisualNoAddRef = CTopLevelWindow::GetRootVisualNoAddRef(v28, TLWRootVisualType);
        }
        if ( !RootVisualNoAddRef )
          goto LABEL_32;
LABEL_14:
        v21 = *(_QWORD *)(RootVisualNoAddRef + 16);
        goto LABEL_15;
      }
    }
    v15 = CCompositor::CreateCachedVisualImageProxy(
            *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
            &v39);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v9 = v39;
      goto LABEL_8;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x3C5u, 0LL);
  }
  v9 = v39;
LABEL_18:
  if ( v8 )
    CBaseObject::Release(v8);
LABEL_20:
  if ( v11 )
    CBaseObject::Release(v11);
  if ( v12 )
    CBaseObject::Release(v12);
  if ( v13 )
    CBaseObject::Release(v13);
  if ( v9 )
    CBaseObject::Release(v9);
  return v16;
}
