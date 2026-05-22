/*
 * XREFs of ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017A0BC
 * Callers:
 *     ?OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x180179CD0 (-OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z.c)
 * Callees:
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A8AC4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801325D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18017839C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x180178694 (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180178724 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x18017883C (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x180178B5C (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180178CD8 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180178E64 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180178FB4 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 *     SignedNormalize @ 0x18017A8F0 (SignedNormalize.c)
 *     ?UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ @ 0x18017B180 (-UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGameControllerAsPointerAndManipulation(ControllerProcessor *this)
{
  float v2; // xmm8_4
  double v3; // xmm6_8
  float v4; // xmm8_4
  double v5; // xmm0_8
  float v6; // xmm9_4
  double v7; // xmm0_8
  float v8; // xmm10_4
  double v9; // xmm0_8
  int v10; // eax
  char *v11; // rdi
  _BYTE *v12; // rsi
  char *v13; // rbp
  char *v14; // rbp

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl)
    || !*((_QWORD *)ISMStatics::GetGamepadInterceptionHelper() + 2) )
  {
    ControllerProcessor::UpdateBoundsIfNeeded(this);
    v2 = 0.0 - ((float (*)(void))SignedNormalize)();
    v3 = 0.0;
    v4 = v2 + ((float (*)(void))SignedNormalize)();
    v5 = ((double (*)(void))SignedNormalize)();
    v6 = *(float *)&v5;
    v7 = ((double (*)(void))SignedNormalize)();
    v8 = *(float *)&v7;
    v9 = 0.0;
    if ( *((_BYTE *)this + 276) )
    {
      v10 = *((_DWORD *)this + 52);
      if ( (v10 & 0x10) != 0 )
        *(_QWORD *)&v9 = *((unsigned int *)this + 1948);
      if ( (v10 & 0x20) != 0 )
      {
        *(_QWORD *)&v9 = *((unsigned int *)this + 1948);
        *(float *)&v9 = *(float *)&v9 * -1.0;
      }
      if ( (v10 & 0x40) != 0 )
      {
        *(_QWORD *)&v3 = *((unsigned int *)this + 1948);
        *(float *)&v3 = *(float *)&v3 * -1.0;
      }
      if ( (v10 & 0x80u) != 0 )
        *(_QWORD *)&v3 = *((unsigned int *)this + 1948);
    }
    else
    {
      v3 = ((double (*)(void))SignedNormalize)();
      *(_QWORD *)&v9 = *((unsigned int *)this + 49);
      SignedNormalize();
    }
    v11 = (char *)this + 328;
    if ( (*((_BYTE *)this + 328) & 1) != 0 )
      ControllerProcessor::CalculateNavigationDelta(this, v3, v9);
    v12 = (char *)this + 1265;
    if ( *((_BYTE *)this + 1265) )
    {
      v13 = (char *)this + 328;
      if ( (*v11 & 8) != 0 )
      {
        ControllerProcessor::CalculateMarginPanDelta(this);
        v13 = (char *)this + 328;
        v12 = (char *)this + 1265;
      }
      if ( (*v11 & 0x84) != 0 )
      {
        ControllerProcessor::CalculatePanDelta(this, v6, v8);
        v11 = v13;
      }
      if ( (*v11 & 2) != 0 )
        ControllerProcessor::CalculateZoomDelta(this, v4);
    }
    if ( (*v11 & 1) != 0 )
      ControllerProcessor::ApplyNavigationDelta(this);
    v14 = v11;
    if ( *v11 < 0 )
    {
      ControllerProcessor::ApplyPanDeltaToScroll(this);
      v14 = (char *)this + 328;
    }
    if ( *v12 )
    {
      if ( (*v11 & 0xC) != 0 )
      {
        ControllerProcessor::ApplyPanDelta(this);
        v11 = v14;
      }
      if ( (*v11 & 2) != 0 )
        ControllerProcessor::ApplyZoomDelta(this);
    }
  }
  return 0LL;
}
