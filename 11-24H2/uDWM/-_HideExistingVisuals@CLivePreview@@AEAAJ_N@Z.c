/*
 * XREFs of ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x180049DFC
 * Callers:
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x1800496A4 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800497FC (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180015620 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLivePreview::_HideExistingVisuals(CLivePreview *this, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int v3; // ebp
  __int64 i; // rbx
  __int64 v6; // rcx
  int started; // eax

  v2 = 0;
  v3 = a2;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 72); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 40 * i) + 440LL);
    if ( v6 )
    {
      started = CTopLevelWindow::StartLivePreviewAnimation(v6, (v3 ^ 1u) + 1);
      v2 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x439u, 0LL);
        return v2;
      }
    }
  }
  return v2;
}
