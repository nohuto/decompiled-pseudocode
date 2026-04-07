/*
 * XREFs of ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18009A0A4
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x1800439F0 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180065840 (-AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180088120 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ @ 0x18008AE04 (-InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18009A16C (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?InitializeConfigData@CDisplayAnimatedVisual@@AEAAXXZ @ 0x18009A35C (-InitializeConfigData@CDisplayAnimatedVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::Start(CDisplayAnimatedVisual *this)
{
  CDisplayAnimatedVisual *v2; // rcx
  int v3; // edi
  unsigned int v4; // eax
  __int64 v5; // rax

  CDisplayAnimatedVisual::InitializeConfigData(this);
  CDisplayAnimatedVisual::InitializeTelemetry(v2);
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
  v3 = CDisplayAnimatedVisual::AddInstructionsForBackgroundInNewVirtualScreen(this);
  if ( v3 < 0 )
  {
    v4 = 118;
  }
  else
  {
    v3 = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
    if ( v3 < 0 )
    {
      v4 = 123;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(CDisplayAnimatedVisual *))(*(_QWORD *)this + 208LL))(this);
      if ( v3 >= 0 )
        goto LABEL_8;
      v4 = 125;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v4, 0LL);
  CDisplayAnimatedVisual::Stop(this, 0LL);
LABEL_8:
  *((_QWORD *)this + 34) = 0LL;
  v5 = *((_QWORD *)this + 35);
  if ( v5 != *((_QWORD *)this + 36) )
    *((_QWORD *)this + 36) = v5;
  return (unsigned int)v3;
}
