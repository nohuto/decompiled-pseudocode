/*
 * XREFs of ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800C6B10
 * Callers:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18001D5E4 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C7D34 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800E67BC (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CLivePreview::GetAnimationDuration(int a1)
{
  float result; // xmm0_4
  int v2; // ecx

  result = FLOAT_0_001;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
  {
    if ( a1 && (v2 = a1 - 1) != 0 )
    {
      if ( (unsigned int)(v2 - 1) <= 1 )
        return FLOAT_0_15000001;
    }
    else
    {
      return FLOAT_0_2;
    }
  }
  return result;
}
