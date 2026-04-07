/*
 * XREFs of ?_RegisterAnimationNotification@CAnimationScheduler@@AEAAJXZ @ 0x18007E26C
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18007E198 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180087274 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_RegisterAnimationNotification(CAnimationScheduler *this)
{
  unsigned int v1; // ebx
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rsi
  int v5; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v3 = CDesktopManager::AcquireAnimationEngine();
    v4 = v3;
    if ( v3 )
    {
      v5 = CAnimationEngine::RegisterForAnimationCompleteNotification(v3, this);
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x228u, 0LL);
      else
        *((_BYTE *)this + 80) = 1;
      CAnimationEngine::Release(v4);
    }
  }
  return v1;
}
