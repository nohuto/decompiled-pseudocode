/*
 * XREFs of ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x1800D3100
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18004087C (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?_CreateAndAddNullComponent@CStoryboard@@IEAAJHPEAPEAVCAnimationComponent@@@Z @ 0x180098050 (-_CreateAndAddNullComponent@CStoryboard@@IEAAJHPEAPEAVCAnimationComponent@@@Z.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800D32F0 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 */

__int64 __fastcall CAppArrangementImmediate::OnEndTransitionRequest(struct CImmersiveState **this)
{
  CBaseObject *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  CBaseObject *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  v3 = CImmersiveState::Create(
         this + 23,
         *(const struct std::nothrow_t **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 96LL));
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v3, 0xC84u, 0LL);
  }
  else
  {
    v5 = CGroupingStoryboard::OnEndTransitionRequest((CGroupingStoryboard *)this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0xC86u, 0LL);
      return v4;
    }
    v6 = CStoryboard::_CreateAndAddNullComponent((CStoryboard *)this, 3, &v8);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0xC88u, 0LL);
    v2 = v8;
  }
  if ( v2 )
    CBaseObject::Release(v2);
  return v4;
}
