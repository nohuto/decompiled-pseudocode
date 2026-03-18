/*
 * XREFs of ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAPEAVCD3DDevice@@XZ @ 0x1802D6C70
 * Callers:
 *     ?Present@CDDASwapChain@@QEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800C5D54 (-Present@CDDASwapChain@@QEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x1801CCDF0 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 *     ?GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ @ 0x1801FD260 (-GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(__int64 a1)
{
  return IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(a1 - 240);
}
