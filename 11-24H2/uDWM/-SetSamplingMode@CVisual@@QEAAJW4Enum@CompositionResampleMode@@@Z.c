/*
 * XREFs of ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18007AECC
 * Callers:
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18007AD78 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800C333C (-OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetResampleMode@CVisualProxy@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18007AF44 (-SetResampleMode@CVisualProxy@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 */

__int64 __fastcall CVisual::SetSamplingMode(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CVisualProxy::SetResampleMode(*(_QWORD *)(a1 + 16));
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x198u, 0LL);
  return v2;
}
