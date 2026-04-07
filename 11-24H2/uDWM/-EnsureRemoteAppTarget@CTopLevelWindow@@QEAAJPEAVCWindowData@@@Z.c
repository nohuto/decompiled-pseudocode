/*
 * XREFs of ?EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z @ 0x180030138
 * Callers:
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x1800300C0 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?SetRemoteAppPolicy@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWM_REMOTEAPP_POLICY@@@Z @ 0x1800F31D0 (-SetRemoteAppPolicy@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWM_REMOTEAPP_POLICY@@@Z.c)
 * Callees:
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x18001D980 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E00 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ @ 0x180029774 (-UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x180088030 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::EnsureRemoteAppTarget(CTopLevelWindow *this, struct CWindowData *a2)
{
  bool v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, GUID *, __int64); // r9
  int updated; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) < 2 )
    return 0LL;
  v5 = CDesktopManager::s_defaultRemoteAppCreation;
  if ( *((_DWORD *)a2 + 52) == 1 )
  {
    v5 = 1;
  }
  else if ( *((_DWORD *)a2 + 52) == 2 )
  {
    v5 = 0;
  }
  v6 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v7 = *((_QWORD *)this + 103);
  if ( v5 )
  {
    if ( !v7 )
    {
      v18 = 0LL;
      v8 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v18);
      updated = v9(v6, &GUID_63b15c56_0b24_4262_9a9a_22531257c0e6, v8);
      v11 = updated;
      if ( updated < 0 )
      {
        v12 = 541LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)updated,
          v16);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v18);
        return v11;
      }
      updated = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 56LL))(v18, *((_QWORD *)a2 + 5));
      v11 = updated;
      if ( updated < 0 )
      {
        v12 = 543LL;
        goto LABEL_21;
      }
      updated = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
      v11 = updated;
      if ( updated < 0 )
      {
        v12 = 544LL;
        goto LABEL_21;
      }
      v13 = v18;
      v18 = 0LL;
      *((_QWORD *)this + 103) = v13;
      updated = CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(this);
      v11 = updated;
      if ( updated < 0 )
      {
        v12 = 548LL;
        goto LABEL_21;
      }
      updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(this);
      v11 = updated;
      if ( updated < 0 )
      {
        v12 = 549LL;
        goto LABEL_21;
      }
      updated = CTopLevelWindow::UpdateRemoteAppRenderTargetBounds(this);
      v11 = updated;
      if ( updated < 0 )
      {
        v12 = 550LL;
        goto LABEL_21;
      }
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v18);
    }
    return 0LL;
  }
  if ( !v7 )
    return 0LL;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 103) + 56LL))(*((_QWORD *)this + 103), 0LL);
  v14 = *((_QWORD *)this + 103);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    *((_QWORD *)this + 103) = 0LL;
  }
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  v11 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22E,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v15,
    v16);
  return v11;
}
