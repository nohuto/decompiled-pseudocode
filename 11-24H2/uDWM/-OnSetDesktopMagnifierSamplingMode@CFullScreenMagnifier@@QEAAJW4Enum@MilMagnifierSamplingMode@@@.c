/*
 * XREFs of ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800C333C
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006AD70 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18007AECC (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(__int64 a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  *(_DWORD *)(a1 + 48) = 0;
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 48) = 2;
  v3 = CVisual::SetSamplingMode(*(_QWORD *)(a1 + 16));
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x165u, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x16Au, 0LL);
  }
  return v4;
}
