/*
 * XREFs of ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802D49A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x18019EF74 (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801C0CF0 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
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
