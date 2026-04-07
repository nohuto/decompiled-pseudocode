/*
 * XREFs of ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180042210
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180004E74 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800436E8 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800DD130 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_SetDesktopId(CTransitionVisualController *this, __int64 a2)
{
  unsigned int v2; // ebx
  signed int LastError; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  if ( *((_QWORD *)this + 12) != -1LL )
  {
    if ( *((_QWORD *)this + 12) == a2 )
      return v2;
    v7 = 3010;
    goto LABEL_13;
  }
  SetLastError(0);
  if ( (unsigned int)GetDesktopID(1LL, &v8) )
  {
    if ( v8 == a2 )
    {
      *((_QWORD *)this + 12) = a2;
      return v2;
    }
    v7 = 3004;
LABEL_13:
    v2 = -2003304443;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2003304443,
      v7,
      0LL);
    return v2;
  }
  LastError = GetLastError();
  v2 = LastError;
  if ( LastError > 0 )
    v2 = (unsigned __int16)LastError | 0x80070000;
  if ( (v2 & 0x80000000) == 0 )
    v2 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v2,
    0xBB3u,
    0LL);
  return v2;
}
