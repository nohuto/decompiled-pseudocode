/*
 * XREFs of ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802CB730
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x180064EEC (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801C7300 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 */

__int64 __fastcall CConversionSwapChain::Present(__int64 a1, unsigned int a2, int a3, __int64 *a4, int a5)
{
  char v9; // si
  int v10; // eax
  unsigned int v11; // edi

  if ( (a3 & 2) != 0 )
  {
    v9 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 516) = 0;
    v9 = 0;
    CConversionSwapChain::ConvertSingleDesktopPlane((CConversionSwapChain *)(a1 - 24));
  }
  v10 = CLegacySwapChain::Present(a1, a2, a3, a4, a5);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x11Bu, 0LL);
  if ( !v9 )
    **(_DWORD **)(a1 + 776) = 0;
  return v11;
}
