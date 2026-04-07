/*
 * XREFs of ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800D34A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180069470 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x1800694E0 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800A8224 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 */

__int64 __fastcall CShrinkPanel::OnEndTransitionRequest(__m128i *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CStoryboard::_EnumerateWindows(this, 4u);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0x601u, 0LL);
  }
  else
  {
    v4 = CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x602u, 0LL);
    else
      CAnimationScheduler::AbandonTransition(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
        5);
  }
  return v3;
}
