/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800497FC
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045584 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180015730 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180015798 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B514 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180031D68 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180032DDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180043FD0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x180048FC4 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180049728 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800497AC (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x180049DFC (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x18009B040 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-Reg.c)
 *     ?GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ @ 0x18009B068 (-GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ.c)
 *     ??$attach_to_smart_pointer@VCTopLevelWindow@@@wil@@YAXAEAV?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@PEAVCTopLevelWindow@@@Z @ 0x1800C7A48 (--$attach_to_smart_pointer@VCTopLevelWindow@@@wil@@YAXAEAV-$ComPtr@VCTopLevelWindow@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLivePreview::_FadeOutToGlass(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  char v4; // r12
  CContainerVisual *RootVisualForDesktop; // rax
  CContainerVisual *v6; // rsi
  __int64 v7; // r8
  CMILRefCountBase ***v8; // r8
  int inserted; // eax
  CImmersiveState *v10; // rcx
  struct CVisual *v11; // r8
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  struct _LIST_ENTRY *i; // r14
  CTopLevelWindow *Blink; // rcx
  unsigned int Flink; // r15d
  __int64 v25; // rax
  int v26; // eax
  char v27; // bl
  unsigned int v28; // eax
  unsigned int v29; // edx
  CBaseObject *v30; // rcx
  int v31; // eax
  CBaseObject *v33; // rcx
  int v34; // eax
  int v35; // eax
  CBaseObject *v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  float AnimationDuration; // xmm0_4
  int v41; // r9d
  __int128 v42; // [rsp+30h] [rbp-30h] BYREF
  char v43; // [rsp+40h] [rbp-20h]
  _QWORD v44[2]; // [rsp+48h] [rbp-18h] BYREF
  char v45; // [rsp+58h] [rbp-8h]
  CBaseObject *v46; // [rsp+98h] [rbp+38h] BYREF

  v2 = CLivePreview::_HideExistingVisuals(this, 1);
  v3 = v2;
  v4 = 0;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x562u, 0LL);
    return v3;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 53) + 176LL) )
    goto LABEL_67;
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           *((_QWORD *)this + 31));
  v6 = RootVisualForDesktop;
  v7 = *((_QWORD *)this + 59);
  if ( v7 )
    v8 = *(CMILRefCountBase ****)(v7 + 440);
  else
    v8 = 0LL;
  inserted = CContainerVisual::InsertChildBefore(RootVisualForDesktop, (CMILRefCountBase ***)this, v8);
  v3 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x567u, 0LL);
    return v3;
  }
  if ( CImmersiveState::GetTopBackgroundWindow(*((CImmersiveState **)this + 60)) )
    v11 = (struct CVisual *)*((_QWORD *)CImmersiveState::GetTopBackgroundWindow(v10) + 55);
  v12 = CContainerVisual::InsertChildAfter(v6, *((struct CVisual **)this + 52), v11);
  v3 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x56Du, 0LL);
    return v3;
  }
  LODWORD(v13) = *((_DWORD *)this + 72);
  while ( 1 )
  {
    do
    {
      v13 = (unsigned int)(v13 - 1);
      if ( (int)v13 < 0 )
      {
        WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                 *((_QWORD *)this + 31));
        for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
        {
          Blink = (CTopLevelWindow *)i[27].Blink;
          if ( Blink && LODWORD(i[8].Flink) == 12 )
          {
            Flink = CAccent::s_clrCurrentAccentBackground;
            if ( LODWORD(i[11].Flink) != CAccent::s_clrCurrentAccentBackground )
            {
              Flink = (unsigned int)i[11].Flink;
              LODWORD(i[11].Flink) = CAccent::s_clrCurrentAccentBackground;
              CTopLevelWindow::OnAccentPolicyUpdated(Blink);
              v4 = 1;
            }
            v46 = 0LL;
            v25 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
                    v44,
                    &v46);
            v3 = CTopLevelWindow::CloneVisualTreeForLivePreview(
                   (CTopLevelWindow *)i[27].Blink,
                   0,
                   (struct CTopLevelWindow **)(v25 + 8));
            if ( v45 )
              wil::attach_to_smart_pointer<CTopLevelWindow>(v44[0], v44[1]);
            if ( (v3 & 0x80000000) != 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x5A2u, 0LL);
              goto LABEL_57;
            }
            if ( v4 )
            {
              LODWORD(i[11].Flink) = Flink;
              CTopLevelWindow::OnAccentPolicyUpdated((CTopLevelWindow *)i[27].Blink);
            }
            v26 = CContainerVisual::AddChild(*((CContainerVisual **)this + 52), v46);
            v3 = v26;
            v4 = 0;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x5ABu, 0LL);
              goto LABEL_57;
            }
            if ( (BYTE4(i[46].Flink) & 1) != 0 )
            {
              v27 = 0;
              CTopLevelWindow::SetLivePreviewAlpha(v46, 0.0);
            }
            else
            {
              v27 = 1;
            }
            *(_QWORD *)&v42 = v46;
            BYTE8(v42) = v27;
            *(_DWORD *)((char *)&v42 + 9) = 0;
            *(_WORD *)((char *)&v42 + 13) = 0;
            HIBYTE(v42) = 0;
            v28 = *((_DWORD *)this + 96);
            v29 = v28 + 1;
            if ( v28 + 1 < v28 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
            }
            else if ( v29 > *((_DWORD *)this + 95) )
            {
              v37 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 360, 16, 1, &v42);
              if ( v37 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0xBEu, 0LL);
            }
            else
            {
              *(_OWORD *)(*((_QWORD *)this + 45) + 16LL * v28) = v42;
              *((_DWORD *)this + 96) = v29;
            }
            v30 = v46;
            if ( v46 )
            {
              v46 = 0LL;
              CBaseObject::Release(v30);
            }
          }
        }
        CContainerVisual::AddChild(*((CContainerVisual **)this + 52), *((struct CVisual **)this + 54));
        v31 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 55) + 48LL))(*((_QWORD *)this + 55));
        v3 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x5B9u, 0LL);
          return v3;
        }
        v38 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 48LL))(*((_QWORD *)this + 54));
        v3 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x5BAu, 0LL);
          return v3;
        }
        v39 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 53) + 48LL))(*((_QWORD *)this + 53));
        v3 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x5BBu, 0LL);
          return v3;
        }
LABEL_67:
        *((_DWORD *)this + 128) = 3;
        AnimationDuration = CLivePreview::GetAnimationDuration();
        CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 49), v41, AnimationDuration);
        CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
        CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
        return v3;
      }
      v14 = *(_QWORD *)(*((_QWORD *)this + 33) + 40 * v13);
    }
    while ( (*(_BYTE *)(v14 + 739) & 1) != 0 || (*(_BYTE *)(v14 + 742) & 2) != 0 );
    v46 = 0LL;
    v15 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
            &v42,
            &v46);
    v3 = CTopLevelWindow::CloneVisualTreeForLivePreview(
           *(CTopLevelWindow **)(v14 + 440),
           0,
           (struct CTopLevelWindow **)(v15 + 8));
    if ( v43 )
      wil::attach_to_smart_pointer<CTopLevelWindow>(v42, *((_QWORD *)&v42 + 1));
    if ( (v3 & 0x80000000) != 0 )
      break;
    if ( *(_DWORD *)(v14 + 128) == 1 )
    {
      v16 = CContainerVisual::AddChild(*((CContainerVisual **)this + 53), v46);
      v3 = v16;
      if ( v16 >= 0 )
        goto LABEL_18;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x57Bu, 0LL);
LABEL_57:
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v46);
      return v3;
    }
    v34 = CContainerVisual::AddChild(*((CContainerVisual **)this + 54), v46);
    v3 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x57Fu, 0LL);
      goto LABEL_57;
    }
LABEL_18:
    v17 = *((_QWORD *)this + 33);
    v18 = *(_QWORD *)(v17 + 40 * v13 + 8);
    if ( v18 )
    {
      v35 = CContainerVisual::RemoveChild(*(CContainerVisual **)(v18 + 24), *(struct CVisual **)(v17 + 40 * v13 + 8));
      if ( v35 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x585u, 0LL);
      v36 = *(CBaseObject **)(*((_QWORD *)this + 33) + 40 * v13 + 8);
      if ( v36 )
      {
        CBaseObject::Release(v36);
        *(_QWORD *)(*((_QWORD *)this + 33) + 40 * v13 + 8) = 0LL;
      }
    }
    v19 = v46;
    v46 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 33) + 40 * v13 + 8) = v19;
    v20 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      CBaseObject::Release(v20);
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x577u, 0LL);
  v33 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    CBaseObject::Release(v33);
  }
  return v3;
}
