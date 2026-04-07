/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001AFA4
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18001AA30 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18001B208 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnOffsetUpdated(CTopLevelWindow3D *this, char a2)
{
  unsigned int v2; // edi
  int started; // eax

  v2 = 0;
  if ( a2 && CTopLevelWindow3D::ShouldDelayTransition(this, 0) )
  {
    started = CTopLevelWindow3D::StartAnimation((__int64)this, 9u);
    v2 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x22Au, 0LL);
  }
  else if ( !*((_BYTE *)this + 248) && !*((_DWORD *)this + 85) )
  {
    *((_OWORD *)this + 17) = *(_OWORD *)(*((_QWORD *)this + 36) + 48LL);
  }
  return v2;
}
