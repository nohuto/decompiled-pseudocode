/*
 * XREFs of ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001D19C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x18001D980 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18002EFF8 (-CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x18002F81C (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18006C2A8 (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18007B028 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___ @ 0x18008A048 (CWindowList--ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008F394 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180096A00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800DACF4 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800EC558 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::EnsureTopLevelWindow(CWindowList *this, struct CWindowData *a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *v7; // rcx
  struct CTopLevelWindow3D *v8; // rbx
  bool v9; // dl
  char v10; // al
  __int64 v11; // rbx
  __int64 v12; // rdi
  CTopLevelWindow *v13; // rbx
  void *v14; // rax
  int v16; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CWindowData *v18; // [rsp+58h] [rbp+28h] BYREF
  CVisual *v19; // [rsp+60h] [rbp+30h] BYREF
  struct CTopLevelWindow3D *v20; // [rsp+68h] [rbp+38h] BYREF

  v18 = a2;
  if ( !*((_QWORD *)a2 + 55) )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
    updated = CTopLevelWindow::CreateWindowWithNotify(v18, &v19);
    v4 = updated;
    if ( updated < 0 )
    {
      v5 = 1922LL;
LABEL_28:
      v7 = retaddr;
      goto LABEL_29;
    }
    updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(v19);
    v4 = updated;
    if ( updated < 0 )
    {
      v5 = 1923LL;
      goto LABEL_28;
    }
    v20 = 0LL;
    updated = CTopLevelWindow3D::Create(&v20);
    v4 = updated;
    v7 = retaddr;
    if ( updated < 0 )
    {
      v5 = 1926LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        v7,
        (void *)v5,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)updated,
        v16);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
      return v4;
    }
    if ( *((_QWORD *)v18 + 56) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x78C,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        v6);
    v8 = v20;
    CTopLevelWindow3D::SetWindowData(v20, v18);
    *((_QWORD *)v18 + 56) = v8;
    if ( (*((_BYTE *)v18 + 739) & 2) != 0 )
    {
      updated = CVisual::SetIsMagnifier(v19, v9);
      v4 = updated;
      if ( updated < 0 )
      {
        v5 = 1939LL;
        goto LABEL_28;
      }
      *((_BYTE *)v18 + 739) &= ~2u;
    }
    if ( (*((_BYTE *)v18 + 739) & 0x40) != 0 )
      CTopLevelWindow::SetVisualProtectContent(v19, 1);
    if ( (*((_BYTE *)v18 + 740) & 2) != 0 )
    {
      updated = CVisual::SetIsCursor(v19, 1);
      v4 = updated;
      if ( updated < 0 )
      {
        v5 = 1950LL;
        goto LABEL_28;
      }
      v20 = (struct CTopLevelWindow3D *)&v18;
      CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___(this, &v20);
    }
    v10 = *((_BYTE *)v18 + 741);
    if ( (v10 & 8) != 0 )
    {
      *((_BYTE *)v18 + 741) = v10 & 0xF7;
      v11 = *(_QWORD *)(*((_QWORD *)v18 + 82) + 40LL);
      v12 = *((_QWORD *)v18 + 5);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
      {
        updated = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                 + 59)
                                                                              + 56LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
                    v11,
                    v12,
                    0LL);
        v4 = updated;
        if ( updated < 0 )
        {
          v5 = 1968LL;
          goto LABEL_28;
        }
      }
      else
      {
        updated = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                 + 58)
                                                                              + 72LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
                    v11,
                    v12,
                    0LL);
        v4 = updated;
        if ( updated < 0 )
        {
          v5 = 1973LL;
          goto LABEL_28;
        }
      }
    }
    if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v18 + 3) + 424LL))(*((_QWORD *)v18 + 3)) )
    {
      v13 = v19;
      v14 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v18 + 3) + 424LL))(*((_QWORD *)v18 + 3));
      updated = CTopLevelWindow::CreateWindowTarget(v13, v14);
      v4 = updated;
      if ( updated < 0 )
      {
        v5 = 1979LL;
        goto LABEL_28;
      }
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
  }
  return 0LL;
}
