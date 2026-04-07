/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800F3C10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x1800152F4 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180024BD0 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180025CA0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x18004E3F0 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180050890 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x1800692D4 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18007C5F4 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18008B318 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     ?WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ @ 0x1800CB22C (-WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  int v8; // r9d
  struct CProjectedShadowScene *WindowListForDesktopCanFail; // rax
  struct CProjectedShadowScene *v11; // rbx
  struct CWindowData *v12; // rdx
  struct CWindowData **v13; // r8
  struct CWindowData *v14; // rcx
  __int64 v15; // r8
  int inserted; // eax
  struct CWindowData *v17; // rdx
  struct CRenderDataVisual *RootVisualForDesktop; // rbx
  __int64 v19; // rax
  int ProjectedShadowSceneForDesktop; // eax
  __int64 v21; // rbx
  struct _LIST_ENTRY *v22; // r15
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *v24; // rcx
  __int64 *v25; // r14
  __int64 v26; // r11
  unsigned int v27; // eax
  unsigned int v28; // r8d
  __int64 v29; // r9
  __int64 v30; // r11
  struct _LIST_ENTRY **v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // [rsp+20h] [rbp-20h]
  struct CProjectedShadowScene *v34; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+38h] [rbp-8h] BYREF
  struct CWindowData *v36; // [rsp+78h] [rbp+38h] BYREF

  v35 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = 0;
  v36 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v36);
  if ( !v36 )
  {
    v33 = 3943;
LABEL_3:
    v8 = -2147024890;
    v7 = -2147024890;
LABEL_4:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v33, 0LL);
    goto LABEL_5;
  }
  WindowListForDesktopCanFail = (struct CProjectedShadowScene *)CWindowList::GetWindowListForDesktopCanFail(
                                                                  this,
                                                                  *((_QWORD *)v36 + 17));
  v11 = WindowListForDesktopCanFail;
  if ( !WindowListForDesktopCanFail )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xF6Au, 0LL);
    goto LABEL_5;
  }
  v34 = WindowListForDesktopCanFail;
  if ( a3 )
  {
    CWindowList::GetSyncedWindowData(this, a3, 1, &v34);
    WindowListForDesktopCanFail = v34;
    if ( !v34 )
    {
      v33 = 3957;
      goto LABEL_3;
    }
  }
  if ( v36 == *(struct CWindowData **)WindowListForDesktopCanFail )
    goto LABEL_5;
  v12 = *(struct CWindowData **)v36;
  v13 = (struct CWindowData **)*((_QWORD *)v36 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)v36 + 8LL) != v36
    || *v13 != v36
    || (*v13 = v12,
        *((_QWORD *)v12 + 1) = v13,
        v14 = v36,
        v15 = *(_QWORD *)WindowListForDesktopCanFail,
        *(struct CProjectedShadowScene **)(*(_QWORD *)WindowListForDesktopCanFail + 8LL) != WindowListForDesktopCanFail) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v36 = v15;
  *((_QWORD *)v14 + 1) = WindowListForDesktopCanFail;
  *(_QWORD *)(v15 + 8) = v14;
  *(_QWORD *)WindowListForDesktopCanFail = v14;
  if ( v12 )
  {
    if ( v12 != v11 )
    {
      inserted = CWindowList::ReevaluateAutoParenting(this, v12, 0);
      v7 = inserted;
      if ( inserted < 0 )
      {
        v33 = 3971;
LABEL_19:
        v8 = inserted;
        goto LABEL_4;
      }
    }
  }
  v17 = v36;
  if ( *((_QWORD *)v36 + 55) )
  {
    inserted = CWindowList::ReevaluateAutoParenting(this, v36, 1);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v33 = 3978;
      goto LABEL_19;
    }
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)v36 + 17));
    inserted = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v36 + 56), 0);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v33 = 3982;
      goto LABEL_19;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
    {
      inserted = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 59)
                                                                         + 192LL))(
                   *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
                   v36);
      v7 = inserted;
      if ( inserted < 0 )
      {
        v33 = 3985;
        goto LABEL_19;
      }
    }
    else
    {
      inserted = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 58)
                                                                         + 200LL))(
                   *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
                   v36);
      v7 = inserted;
      if ( inserted < 0 )
      {
        v33 = 3989;
        goto LABEL_19;
      }
    }
    v17 = v36;
    if ( v36 == *((struct CWindowData **)this + 87) && *((_QWORD *)this + 67) )
    {
      inserted = CWindowList::ZOrderAcrylicSheet(this);
      v7 = inserted;
      if ( inserted < 0 )
      {
        v33 = 3995;
        goto LABEL_19;
      }
      v17 = v36;
    }
    if ( *((_QWORD *)v17 + 58) )
    {
      inserted = VisualCollection::InsertRelative(
                   (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 144),
                   *((CMILRefCountBase ****)v17 + 58),
                   *((CMILRefCountBase ****)v17 + 55),
                   1);
      v7 = inserted;
      if ( inserted < 0 )
      {
        v33 = 4001;
        goto LABEL_19;
      }
      v17 = v36;
    }
    v19 = *((_QWORD *)v17 + 55);
    if ( v19 && (*(_BYTE *)(v19 + 201) & 0x10) != 0 )
    {
      v34 = 0LL;
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v34);
      ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                         this,
                                         *((_QWORD *)v36 + 17),
                                         0,
                                         &v34);
      v7 = ProjectedShadowSceneForDesktop;
      if ( ProjectedShadowSceneForDesktop < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProjectedShadowSceneForDesktop, 0xFA8u, 0LL);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v34);
        goto LABEL_5;
      }
      CProjectedShadowScene::WindowZOrderChanged(v34);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v34);
      v17 = v36;
    }
  }
  v21 = *((_QWORD *)v17 + 75);
  if ( v21 && *(_DWORD *)(v21 + 632) > 1u )
  {
    v22 = 0LL;
    v23 = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)v17 + 17));
    if ( v23 )
    {
      v24 = *(struct _LIST_ENTRY **)v36;
      if ( *(struct _LIST_ENTRY **)v36 != v23 )
      {
        while ( v24[37].Blink != (struct _LIST_ENTRY *)v21 )
        {
          v24 = v24->Flink;
          if ( v24 == v23 )
          {
            v25 = (__int64 *)(v21 + 608);
            goto LABEL_47;
          }
        }
        v22 = v24;
      }
    }
    v25 = (__int64 *)(v21 + 608);
    if ( !v22 )
    {
LABEL_47:
      if ( *(struct CWindowData **)(*v25 + 8LL * (unsigned int)(*(_DWORD *)(v21 + 632) - 1)) == v36 )
        goto LABEL_5;
      DynArray<CStoryboard const *,0>::Remove(v25, (__int64 *)&v36);
      v27 = *(_DWORD *)(v26 + 24);
      v28 = v27 + 1;
      if ( v27 + 1 < v27 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
        goto LABEL_5;
      }
      if ( v28 <= *(_DWORD *)(v26 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)v26 + 8LL * *(unsigned int *)(v26 + 24)) = v36;
        *(_DWORD *)(v26 + 24) = v28;
        goto LABEL_5;
      }
      inserted = DynArrayImpl<0>::AddMultipleAndSet(v26, 8, 1, &v36);
      if ( inserted >= 0 )
        goto LABEL_5;
      v33 = 190;
      goto LABEL_19;
    }
    DynArray<CStoryboard const *,0>::Remove((__int64 *)(v21 + 608), (__int64 *)&v36);
    v31 = *(struct _LIST_ENTRY ***)v30;
    v32 = *(_DWORD *)(v30 + 24);
    if ( v32 )
    {
      do
      {
        if ( v22 == *v31 )
          break;
        ++v6;
        ++v31;
      }
      while ( v6 < v32 );
    }
    DynArray<CWindowData *,0>::InsertAt(v30, (unsigned __int64)&v36, v6, v29);
  }
LABEL_5:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v35);
  return v7;
}
