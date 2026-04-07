/*
 * XREFs of ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180088DB8
 * Callers:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180009360 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOptions@CVisualProxy@@QEAAJ_N00@Z @ 0x1800736C4 (-SetOptions@CVisualProxy@@QEAAJ_N00@Z.c)
 */

__int64 __fastcall CVisual::SetHitTestVisibility(CVisual *this, __int64 a2, __int64 a3)
{
  char v3; // r9
  unsigned int v4; // ebx
  char v5; // r9
  CVisualProxy *v6; // rcx
  int v7; // eax

  v3 = *((_BYTE *)this + 36);
  v4 = 0;
  if ( (v3 & 0x20) == 0 )
  {
    v5 = v3 | 0x20;
    *((_BYTE *)this + 36) = v5;
    v6 = (CVisualProxy *)*((_QWORD *)this + 2);
    if ( v6 )
    {
      v7 = CVisualProxy::SetOptions(v6, 1, a3, (v5 & 0x40) != 0);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3DEu, 0LL);
    }
  }
  return v4;
}
