/*
 * XREFs of ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x1800DB390
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180004190 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800DB570 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DCF8C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 */

__int64 __fastcall CAppArrangementImmediate::OnEndTransitionRequest(struct CImmersiveState **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  CBaseObject *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = CImmersiveState::Create(
         this + 23,
         *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 96LL));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CGroupingStoryboard::OnEndTransitionRequest((CGroupingStoryboard *)this);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v5 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen((CStoryboard *)this, 0LL, 3, 1, &v7);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0xC5Fu);
      if ( v7 )
        CBaseObject::Release(v7);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0xC5Du);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0xC5Bu);
  }
  return v3;
}
