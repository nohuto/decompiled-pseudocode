/*
 * XREFs of ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x180018BD8
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029FFC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180018CE0 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180018D6C (-AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18001FF9C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002D880 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::Start(CDisplayAnimatedVisual *this)
{
  _QWORD *v2; // rdi
  bool v3; // zf
  int v4; // edi
  __int64 v5; // rax
  unsigned int v7; // eax

  *((_DWORD *)this + 88) = 97;
  v2 = (_QWORD *)((char *)this + 416);
  *((_DWORD *)this + 90) = 1;
  v3 = *((_QWORD *)this + 52) == 0LL;
  *((_DWORD *)this + 89) = 2;
  *((_DWORD *)this + 94) = 2;
  *((_DWORD *)this + 91) = 96;
  *((_DWORD *)this + 92) = 1;
  *((_DWORD *)this + 93) = 108;
  *((_DWORD *)this + 95) = 1;
  if ( v3 )
  {
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((char *)this + 416);
    if ( (int)DCompositionCreateAnimationStats((char *)this + 416) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(*v2, 0LL);
  }
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
  v4 = CDisplayAnimatedVisual::AddInstructionsForBackgroundInNewVirtualScreen(this);
  if ( v4 < 0 )
  {
    v7 = 120;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v7, 0LL);
    CDisplayAnimatedVisual::Stop(this, 0LL);
    goto LABEL_7;
  }
  v4 = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
  if ( v4 < 0 )
  {
    v7 = 125;
    goto LABEL_11;
  }
  v4 = (*(__int64 (__fastcall **)(CDisplayAnimatedVisual *))(*(_QWORD *)this + 216LL))(this);
  if ( v4 < 0 )
  {
    v7 = 127;
    goto LABEL_11;
  }
LABEL_7:
  v5 = *((_QWORD *)this + 41);
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 42) = v5;
  return (unsigned int)v4;
}
