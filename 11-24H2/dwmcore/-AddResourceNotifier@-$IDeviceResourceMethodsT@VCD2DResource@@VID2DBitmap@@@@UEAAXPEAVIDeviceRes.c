/*
 * XREFs of ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x180043FE0
 * Callers:
 *     ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WEI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802CD0D0 (-AddResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WEI@EAAXPEA.c)
 *     ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802CD7A0 (-AddResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EAAXPE.c)
 *     ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802CD7C0 (-AddResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEA.c)
 * Callees:
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x1800439AC (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 */

char *__fastcall IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::AddResourceNotifier(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  return std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(
           (char **)(a1 + 16),
           &v3);
}
