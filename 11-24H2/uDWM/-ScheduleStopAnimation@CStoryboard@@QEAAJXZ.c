/*
 * XREFs of ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180097680
 * Callers:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180045A6C (-Abandon@CStoryboard@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800430F4 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18006C3AC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStoryboard::ScheduleStopAnimation(CStoryboard *this)
{
  unsigned int v2; // edi
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rbx
  unsigned int v5; // edx
  int v6; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0;
  v3 = CDesktopManager::AcquireAnimationEngine();
  v4 = v3;
  if ( v3 )
  {
    v5 = *((_DWORD *)this + 7);
    if ( v5 != -1 )
    {
      v6 = CAnimationEngine::ScheduleStopAnimation(v3, v5);
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v6,
          0x16A2u,
          0LL);
    }
  }
  CStoryboard::_Cleanup(this);
  if ( v4 )
    CAnimationEngine::Release(v4);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v2;
}
