/*
 * XREFs of ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18006DAA6
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x18006D0A0 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x18006D8D0 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x1800E66E4 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800E68E8 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLivePreviewAnimation(CLivePreviewTimeline **this)
{
  unsigned int v2; // ebx
  int v3; // r9d
  double CurrentOpacity; // xmm0_8
  int v5; // eax
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)this + 64) == 1 || *((_DWORD *)this + 64) == 2 )
  {
    v6 = CTopLevelWindow::LivePreviewAnimation_Flipped((CTopLevelWindow *)this);
    v2 = v6;
    if ( v6 < 0 )
    {
      v3 = v6;
      v8 = 4529;
      goto LABEL_12;
    }
  }
  else
  {
    if ( (unsigned int)(*((_DWORD *)this + 64) - 3) >= 2 )
    {
      v2 = -2147467259;
      v8 = 4538;
LABEL_5:
      v3 = v2;
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v8);
      return v2;
    }
    CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(this[90]);
    v5 = CTopLevelWindow::SetLivePreviewAlpha((CTopLevelWindow *)this, CurrentOpacity * *((double *)this + 24));
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1181u);
      v8 = 4534;
      goto LABEL_5;
    }
    if ( *((_BYTE *)this[90] + 72) )
      CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)this);
  }
  return v2;
}
