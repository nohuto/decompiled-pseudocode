/*
 * XREFs of ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800DB670
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180003B00 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180003EA8 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x18006D374 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 */

__int64 __fastcall CLauncherDismiss::OnEndTransitionRequest(struct _LIST_ENTRY *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  CLauncherAnimationBase::RecordLauncherRect(this);
  v2 = CStoryboard::_EnumerateWindows((CStoryboard *)this, 4u);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0xB89u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0xB88u);
  }
  return v3;
}
