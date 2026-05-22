/*
 * XREFs of ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017BAD4
 * Callers:
 *     ?OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x18017B470 (-OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z.c)
 * Callees:
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A7574 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18017929C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x180179594 (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180179624 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x18017973C (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x180179AB0 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180179C2C (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180179DB8 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180179F08 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 *     SignedNormalize @ 0x18017C344 (SignedNormalize.c)
 *     ?UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ @ 0x18017CC38 (-UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ.c)
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

  if ( !*((_QWORD *)ISMStatics::GetGamepadInterceptionHelper() + 2) )
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
        *(_QWORD *)&v9 = *((unsigned int *)this + 1946);
      if ( (v10 & 0x20) != 0 )
      {
        *(_QWORD *)&v9 = *((unsigned int *)this + 1946);
        *(float *)&v9 = *(float *)&v9 * -1.0;
      }
      if ( (v10 & 0x40) != 0 )
      {
        *(_QWORD *)&v3 = *((unsigned int *)this + 1946);
        *(float *)&v3 = *(float *)&v3 * -1.0;
      }
      if ( (v10 & 0x80u) != 0 )
        *(_QWORD *)&v3 = *((unsigned int *)this + 1946);
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
