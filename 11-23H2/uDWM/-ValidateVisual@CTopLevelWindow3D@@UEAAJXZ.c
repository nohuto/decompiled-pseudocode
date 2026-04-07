/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180042EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertChild@CVisualProxy@@QEAAJPEAV1@0_N@Z @ 0x18001E974 (-InsertChild@CVisualProxy@@QEAAJPEAV1@0_N@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18001FE8C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180020664 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180033B10 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033E0C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180040710 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180043250 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x18004DC1C (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18004FEDC (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18005007C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18005022C (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800D57C4 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1801058F8 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CTopLevelWindow3D *this)
{
  int v1; // eax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  char v7; // dl
  __int64 v8; // r14
  int v9; // ebp
  char v10; // al
  char v11; // r14
  CProjectionBorderVisual *v12; // rcx
  int updated; // eax
  unsigned int v14; // edi
  int v15; // eax
  unsigned int v16; // edi
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  CSecondaryWindowRepresentation *v21; // rcx
  int v22; // eax
  unsigned int v23; // edi
  int v24; // edi
  int v25; // r9d
  int v26; // eax
  unsigned int v27; // edi
  int v28; // eax
  int started; // eax
  unsigned int v30; // edi
  CVisualProxy *v31; // rax
  int inserted; // eax
  int v33; // eax
  unsigned int v34; // edi
  bool v35; // dl
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  char *v38; // rdx
  int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  unsigned __int64 v42; // r9
  __int64 v43; // rdx
  int v44; // eax
  int v45; // eax
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  void *v48; // [rsp+20h] [rbp-28h]
  int v49; // [rsp+20h] [rbp-28h]
  int v50; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x1000) != 0 )
  {
    if ( *((_BYTE *)this + 536) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
    {
      if ( *((_QWORD *)this + 46) )
      {
        v33 = CTopLevelWindow3D::StopAnimation(this);
        v34 = v33;
        if ( v33 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x345,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v33,
            (int)v48);
          return v34;
        }
      }
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 5);
      v30 = started;
      if ( started < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x347,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)started,
          (int)v48);
        return v30;
      }
      *((_BYTE *)this + 536) = 0;
    }
    v3 = *((_QWORD *)this + 46);
    if ( !v3 || *(_BYTE *)(v3 + 72) )
    {
      v26 = CTopLevelWindow3D::StopAnimation(this);
      v27 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x35D,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v26,
          (int)v48);
        return v27;
      }
    }
    else
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 42) + 440LL);
      if ( *(char *)(v4 + 248) < 0 )
      {
        v11 = 1;
        v9 = CVisual::ConnectToParent(*(CVisual **)(v4 + 272), 1);
        if ( (*(_BYTE *)(v4 + 248) & 1) != 0 )
        {
          CVisual::Unhide((CVisual *)v4);
          *(_BYTE *)(v4 + 248) &= ~1u;
        }
        v5 = v4 + 752;
      }
      else
      {
        v5 = v4 + 752;
        v6 = *(_QWORD *)(v4 + 752);
        v7 = *(_BYTE *)(v6 + 672);
        if ( (v7 & 1) == 0 || (*(_BYTE *)(v6 + 676) & 1) != 0 || (v7 & 4) != 0 )
        {
          v11 = 0;
          v9 = CVisual::ConnectToParent(*(CVisual **)(v4 + 272), 0);
          if ( (*(_BYTE *)(v4 + 248) & 1) != 0 )
          {
            CVisual::Unhide((CVisual *)v4);
            *(_BYTE *)(v4 + 248) &= ~1u;
          }
        }
        else
        {
          v8 = *(_QWORD *)(v4 + 272);
          v9 = 0;
          v10 = *(_BYTE *)(v8 + 92);
          if ( (v10 & 4) == 0 )
          {
            *(_BYTE *)(v8 + 92) = v10 | 4;
            v31 = (CVisualProxy *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v8 + 24) + 40LL) + 72LL))(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 40LL));
            inserted = CVisualProxy::InsertChild(v31, *(struct CVisualProxy **)(v8 + 16), 0LL, 1);
            v9 = inserted;
            if ( inserted < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x181u, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3EBu, 0LL);
            }
          }
          if ( (*(_BYTE *)(v4 + 248) & 1) == 0 )
          {
            CVisual::Hide((CVisual *)v4);
            *(_BYTE *)(v4 + 248) |= 1u;
          }
          v11 = 0;
        }
      }
      v12 = *(CProjectionBorderVisual **)(*(_QWORD *)v5 + 464LL);
      if ( v12 )
      {
        v35 = v11 && (*(_BYTE *)(v4 + 249) & 1) == 0;
        CProjectionBorderVisual::Show(v12, v35);
        v36 = *(_QWORD *)(*(_QWORD *)v5 + 464LL);
        v37 = *(_QWORD *)(v36 + 24);
        if ( v37 )
          VisualCollection::InsertRelative((VisualCollection *)(v37 + 32), v36, (struct CVisual *)v4, 1u, (int)v48);
      }
      *(_BYTE *)(v4 + 844) = 1;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x352,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v9,
          (int)v48);
        return (unsigned int)v9;
      }
      if ( !*((_QWORD *)this + 43) )
      {
        v38 = (char *)this + 288;
        LODWORD(v48) = 100;
        if ( !this )
          v38 = 0LL;
        v39 = CSecondaryWindowRepresentation::Create(
                160LL,
                (__int64)v38,
                *((_QWORD *)this + 42),
                0,
                v48,
                (CBaseObject **)this + 43);
        v24 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x385u, 0LL);
          v25 = v24;
          v40 = 917;
          goto LABEL_70;
        }
        CVisual::SetOpacity(this, *(double *)(*(_QWORD *)(*((_QWORD *)this + 42) + 440LL) + 192LL));
      }
      if ( !*((_QWORD *)this + 45) )
      {
        v24 = CCompositor::CreateProxy<CScaleTransformProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                (char *)this + 360);
        v25 = v24;
        if ( v24 < 0 )
        {
          v40 = 921;
LABEL_70:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, v40, 0LL);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x354,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v24,
            v49);
          return (unsigned int)v24;
        }
      }
      if ( !*((_QWORD *)this + 44) )
      {
        v24 = CCompositor::CreateProxy<CMatrixTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6));
        v25 = v24;
        if ( v24 < 0 )
        {
          v40 = 926;
          goto LABEL_70;
        }
      }
      updated = CTopLevelWindow3D::UpdateAnimatedResources(this);
      v14 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x356,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)updated,
          (int)v48);
        return v14;
      }
      v15 = CTopLevelWindow3D::EnsureRenderData(this);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x358,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v15,
          (int)v48);
        return v16;
      }
    }
    *((_DWORD *)this + 22) &= ~0x1000u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 2) != 0 )
  {
    v41 = (*(__int64 (__fastcall **)(CTopLevelWindow3D *, _QWORD))(*(_QWORD *)this + 96LL))(this, 0LL);
    v19 = v41;
    if ( v41 < 0 )
    {
      v42 = (unsigned int)v41;
      v43 = 129LL;
LABEL_84:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v43,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)v42,
        (int)v48);
      v46 = v19;
      v47 = 144LL;
      goto LABEL_86;
    }
    *((_DWORD *)this + 22) &= ~2u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 8) == 0 )
    goto LABEL_23;
  v44 = (*(__int64 (__fastcall **)(CTopLevelWindow3D *))(*(_QWORD *)this + 184LL))(this);
  v19 = v44;
  if ( v44 < 0 )
  {
    v42 = (unsigned int)v44;
    v43 = 136LL;
    goto LABEL_84;
  }
  *((_DWORD *)this + 22) &= ~8u;
  v1 = *((_DWORD *)this + 22);
LABEL_23:
  if ( (v1 & 0x10) == 0 )
    goto LABEL_24;
  v45 = CVisual::UpdateTransform(this);
  v19 = v45;
  if ( v45 < 0 )
  {
    v42 = (unsigned int)v45;
    v43 = 143LL;
    goto LABEL_84;
  }
  *((_DWORD *)this + 22) &= ~0x10u;
  v1 = *((_DWORD *)this + 22);
LABEL_24:
  if ( (v1 & 0x20) == 0 )
    goto LABEL_25;
  v18 = (*(__int64 (__fastcall **)(CTopLevelWindow3D *))(*(_QWORD *)this + 168LL))(this);
  v19 = v18;
  if ( v18 < 0 )
  {
    v42 = (unsigned int)v18;
    v43 = 150LL;
    goto LABEL_84;
  }
  *((_DWORD *)this + 22) &= ~0x20u;
  v1 = *((_DWORD *)this + 22);
LABEL_25:
  if ( (v1 & 0x40) == 0 )
    goto LABEL_26;
  v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)
                                                          + 352LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
          (char *)this + 204);
  v19 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x3B1u, 0LL);
    v42 = v19;
    v43 = 157LL;
    goto LABEL_84;
  }
  *((_DWORD *)this + 22) &= ~0x40u;
LABEL_26:
  if ( (*((_BYTE *)this + 88) & 4) != 0 )
  {
    v20 = (*(__int64 (__fastcall **)(CTopLevelWindow3D *))(*(_QWORD *)this + 208LL))(this);
    v19 = v20;
    if ( v20 >= 0 )
    {
      *((_DWORD *)this + 22) &= ~4u;
      goto LABEL_27;
    }
    v46 = (unsigned int)v20;
    v47 = 148LL;
LABEL_86:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)v46,
      (int)v48);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x363,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)v19,
      v50);
    return v19;
  }
LABEL_27:
  if ( *((char *)this + 88) >= 0 )
    return 0LL;
  v21 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 43);
  if ( !v21 || (v22 = CSecondaryWindowRepresentation::Validate(v21), v23 = v22, v22 >= 0) )
  {
    *((_DWORD *)this + 22) &= ~0x80u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36A,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)v22,
    (int)v48);
  return v23;
}
