/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C7D34
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C65F8 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18000A1B8 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18000F370 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?Attach@?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@QEAAXPEAVCTopLevelWindow@@@Z @ 0x180010884 (-Attach@-$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@QEAAXPEAVCTopLevelWindow@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180018D20 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002B8A0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18005007C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800C6B10 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x1800C8550 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x1800C9AA0 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x1800E66E4 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLivePreview::_FadeOutToGlass(CLivePreview *this)
{
  int inserted; // eax
  int v3; // ebx
  char v4; // r12
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v6; // r8
  struct CVisual *v7; // r8
  VisualCollection *v8; // rsi
  struct CVisual *v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r13
  int v15; // eax
  int v16; // r9d
  struct CVisual *v17; // rdx
  int v18; // eax
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  struct _LIST_ENTRY *Blink; // r14
  CWindowData **v24; // rcx
  unsigned int Flink; // r15d
  int v26; // eax
  char v27; // bl
  CBaseObject *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // edx
  int v31; // eax
  CBaseObject *v32; // rcx
  int v34; // [rsp+20h] [rbp-40h]
  unsigned int v35; // [rsp+20h] [rbp-40h]
  int v36; // [rsp+20h] [rbp-40h]
  int v37; // [rsp+20h] [rbp-40h]
  unsigned int v38; // [rsp+20h] [rbp-40h]
  struct CTopLevelWindow *v39[2]; // [rsp+30h] [rbp-30h] BYREF
  char v40; // [rsp+40h] [rbp-20h]
  CBaseObject **v41; // [rsp+48h] [rbp-18h]
  struct CTopLevelWindow *v42; // [rsp+50h] [rbp-10h] BYREF
  char v43; // [rsp+58h] [rbp-8h]
  CBaseObject *v44; // [rsp+98h] [rbp+38h] BYREF

  inserted = CLivePreview::_HideExistingVisuals(this, 1);
  v3 = inserted;
  v4 = 0;
  if ( inserted < 0 )
  {
    v35 = 1381;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v35);
    return (unsigned int)v3;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 59) + 72LL) )
  {
LABEL_72:
    *((_DWORD *)this + 140) = 3;
    CLivePreview::GetAnimationDuration(0);
    CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 55));
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    return (unsigned int)v3;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           *((_QWORD *)this + 37));
  v6 = *((_QWORD *)this + 65);
  if ( v6 )
    v7 = *(struct CVisual **)(v6 + 440);
  else
    v7 = 0LL;
  v8 = (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32);
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               (unsigned __int64)this,
               v7,
               0,
               v34);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v35 = 1386;
    goto LABEL_3;
  }
  v9 = this;
  v10 = *(_QWORD *)(*((_QWORD *)this + 66) + 48LL);
  if ( v10 )
    v9 = *(struct CVisual **)(v10 + 440);
  inserted = VisualCollection::InsertRelative(v8, *((_QWORD *)this + 58), v9, 1u, v36);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v35 = 1392;
    goto LABEL_3;
  }
  v11 = *((_DWORD *)this + 84) - 1;
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = 40LL * v11;
    do
    {
      v14 = *(_QWORD *)(v13 + *((_QWORD *)this + 39));
      if ( (*(_BYTE *)(v14 + 675) & 1) == 0 && (*(_BYTE *)(v14 + 678) & 2) == 0 )
      {
        v44 = 0LL;
        v39[0] = (struct CTopLevelWindow *)&v44;
        v39[1] = 0LL;
        v40 = 1;
        v3 = CTopLevelWindow::CloneVisualTreeForLivePreview(*(CTopLevelWindow **)(v14 + 440), 0, &v39[1]);
        if ( v40 )
          Microsoft::WRL::ComPtr<CTopLevelWindow>::Attach((CBaseObject **)v39[0], v39[1]);
        if ( v3 < 0 )
        {
          v38 = 1402;
          v16 = v3;
          goto LABEL_49;
        }
        if ( *(_DWORD *)(v14 + 132) == 1 )
        {
          v15 = VisualCollection::InsertRelative(
                  (VisualCollection *)(*((_QWORD *)this + 59) + 32LL),
                  (unsigned __int64)v44,
                  0LL,
                  0,
                  v37);
          v3 = v15;
          if ( v15 < 0 )
          {
            v38 = 1406;
LABEL_24:
            v16 = v15;
LABEL_49:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v38);
LABEL_50:
            v28 = v44;
            if ( v44 )
            {
              v44 = 0LL;
              goto LABEL_52;
            }
            return (unsigned int)v3;
          }
        }
        else
        {
          v15 = VisualCollection::InsertRelative(
                  (VisualCollection *)(*((_QWORD *)this + 60) + 32LL),
                  (unsigned __int64)v44,
                  0LL,
                  0,
                  v37);
          v3 = v15;
          if ( v15 < 0 )
          {
            v38 = 1410;
            goto LABEL_24;
          }
        }
        v17 = *(struct CVisual **)(*((_QWORD *)this + 39) + v13 + 8);
        if ( v17 )
        {
          v18 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v17 + 3) + 32LL), v17);
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x588u);
          v19 = *(CBaseObject **)(*((_QWORD *)this + 39) + v13 + 8);
          if ( v19 )
          {
            CBaseObject::Release(v19);
            *(_QWORD *)(*((_QWORD *)this + 39) + v13 + 8) = 0LL;
          }
        }
        v20 = v44;
        v44 = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 39) + v13 + 8) = v20;
        v21 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          CBaseObject::Release(v21);
        }
      }
      v13 -= 40LL;
      --v12;
    }
    while ( v12 >= 0 );
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           *((_QWORD *)this + 37));
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
  {
LABEL_63:
    VisualCollection::InsertRelative(
      (VisualCollection *)(*((_QWORD *)this + 58) + 32LL),
      *((_QWORD *)this + 60),
      0LL,
      0,
      v37);
    inserted = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 61) + 64LL))(*((_QWORD *)this + 61));
    v3 = inserted;
    if ( inserted < 0 )
    {
      v35 = 1470;
      goto LABEL_3;
    }
    inserted = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 64LL))(*((_QWORD *)this + 60));
    v3 = inserted;
    if ( inserted < 0 )
    {
      v35 = 1471;
      goto LABEL_3;
    }
    inserted = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 64LL))(*((_QWORD *)this + 59));
    v3 = inserted;
    if ( inserted < 0 )
    {
      v35 = 1472;
      goto LABEL_3;
    }
    goto LABEL_72;
  }
  while ( 1 )
  {
    v24 = (CWindowData **)Blink[27].Blink;
    if ( !v24 || HIDWORD(Blink[8].Flink) != 12 )
      goto LABEL_62;
    Flink = CAccent::s_clrCurrentAccentBackground;
    if ( LODWORD(Blink[11].Flink) != CAccent::s_clrCurrentAccentBackground )
    {
      Flink = (unsigned int)Blink[11].Flink;
      LODWORD(Blink[11].Flink) = CAccent::s_clrCurrentAccentBackground;
      CTopLevelWindow::OnAccentPolicyUpdated(v24);
      v4 = 1;
    }
    v44 = 0LL;
    v41 = &v44;
    v42 = 0LL;
    v43 = 1;
    v3 = CTopLevelWindow::CloneVisualTreeForLivePreview((CTopLevelWindow *)Blink[27].Blink, 0, &v42);
    if ( v43 )
      Microsoft::WRL::ComPtr<CTopLevelWindow>::Attach(v41, v42);
    if ( v3 < 0 )
      break;
    if ( v4 )
    {
      LODWORD(Blink[11].Flink) = Flink;
      CTopLevelWindow::OnAccentPolicyUpdated((CWindowData **)Blink[27].Blink);
    }
    v26 = VisualCollection::InsertRelative(
            (VisualCollection *)(*((_QWORD *)this + 58) + 32LL),
            (unsigned __int64)v44,
            0LL,
            0,
            v37);
    v3 = v26;
    v4 = 0;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x5AFu);
      goto LABEL_50;
    }
    if ( (BYTE4(Blink[42].Flink) & 1) != 0 )
    {
      v27 = 0;
      CTopLevelWindow::SetLivePreviewAlpha(v44, 0.0);
    }
    else
    {
      v27 = 1;
    }
    v39[0] = v44;
    LOBYTE(v39[1]) = v27;
    v29 = *((unsigned int *)this + 108);
    v30 = v29 + 1;
    if ( (int)v29 + 1 >= (unsigned int)v29 )
    {
      if ( v30 > *((_DWORD *)this + 107) )
      {
        v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 408, 16, 1, v39);
        if ( v31 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*((_QWORD *)this + 51) + 16 * v29) = *(_OWORD *)v39;
        *((_DWORD *)this + 108) = v30;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    v32 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      CBaseObject::Release(v32);
    }
LABEL_62:
    Blink = Blink->Blink;
    if ( Blink == WindowListForDesktop )
      goto LABEL_63;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x5A6u);
  v28 = v44;
  if ( v44 )
  {
    v44 = 0LL;
LABEL_52:
    CBaseObject::Release(v28);
  }
  return (unsigned int)v3;
}
