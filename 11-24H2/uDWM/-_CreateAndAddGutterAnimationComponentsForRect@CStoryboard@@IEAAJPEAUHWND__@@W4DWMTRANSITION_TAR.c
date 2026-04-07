/*
 * XREFs of ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800D468C
 * Callers:
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800D482C (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180053F3C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800DD490 (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddGutterAnimationComponentsForRect(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        CMILRefCountBase *a7,
        CMILRefCountBase *a8)
{
  int GutterAnimationComponentsForRect; // eax
  unsigned int v9; // ebx

  if ( a7 )
    *(_QWORD *)a7 = 0LL;
  if ( a8 )
    *(_QWORD *)a8 = 0LL;
  GutterAnimationComponentsForRect = CTransitionVisualController::CreateGutterAnimationComponentsForRect(
                                       *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24),
                                       a2,
                                       a3);
  v9 = GutterAnimationComponentsForRect;
  if ( GutterAnimationComponentsForRect < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      GutterAnimationComponentsForRect,
      0x1614u,
      0LL);
  return v9;
}
