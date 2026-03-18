/*
 * XREFs of ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802CAA00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x180097F44 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1801C7600 (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C7654 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x1801C7768 (McTemplateU0qqq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::Present(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned int a5)
{
  char v6; // bp
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v6 = (a3 & 2) != 0;
  CLegacySwapChain::PrePresent((CLegacySwapChain *)(a1 - 24), v6);
  v8 = CD3DDevice::Present(*(CD3DDevice **)(a1 + 40), *(struct IDXGISwapChainDWM1 **)(a1 + 264));
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x88u, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qqq_EventWriteTransfer(v9, &EVTDESC_ETWGUID_PRESENT, a5, 0, a3);
    CLegacySwapChain::PostPresent((CLegacySwapChain *)(a1 - 24), v6, v10 == 142213121);
  }
  return v10;
}
