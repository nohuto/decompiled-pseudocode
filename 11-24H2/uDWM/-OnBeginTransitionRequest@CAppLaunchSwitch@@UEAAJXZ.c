/*
 * XREFs of ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800D2DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x180022370 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18004087C (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180042C1C (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800C6638 (-IsLauncherVisible@CImmersiveState@@QEAA_NXZ.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnBeginTransitionRequest(CAppLaunchSwitch *this)
{
  CBaseObject *v1; // rsi
  int TrustLevel; // eax
  unsigned int v4; // ebx
  int v5; // eax
  bool v6; // al
  CAnimationScheduler *v7; // rcx
  const int *v8; // rdx
  unsigned int v10; // [rsp+20h] [rbp-18h]
  CImmersiveState *v11; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel();
  v4 = TrustLevel;
  if ( TrustLevel < 0 )
  {
    v8 = &CStoryboard::MILINSTRUMENTATIONHRESULTLIST;
    v10 = 2585;
  }
  else
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v12) )
    {
      v4 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180109BB8, 1LL, -2147467259, 0xA22u, 0LL);
      return v4;
    }
    v5 = CImmersiveState::Create(&v11, (const struct std::nothrow_t *)v12);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180109BB8, 1LL, v5, 0xA24u, 0LL);
      v1 = v11;
      goto LABEL_14;
    }
    v1 = v11;
    v6 = !CImmersiveState::IsLauncherVisible(v11);
    *((_BYTE *)this + 128) = v6;
    v7 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    if ( v6 )
    {
      TrustLevel = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v7, 0x3Bu, 0LL, this, 0LL);
      v4 = TrustLevel;
      if ( TrustLevel >= 0 )
        goto LABEL_14;
      v10 = 2600;
    }
    else
    {
      TrustLevel = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v7, 0x3Au, 0LL, this, 0LL);
      v4 = TrustLevel;
      if ( TrustLevel >= 0 )
        goto LABEL_14;
      v10 = 2604;
    }
    v8 = &dword_180109BB8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, v8, 1LL, TrustLevel, v10, 0LL);
LABEL_14:
  if ( v1 )
    CBaseObject::Release(v1);
  return v4;
}
