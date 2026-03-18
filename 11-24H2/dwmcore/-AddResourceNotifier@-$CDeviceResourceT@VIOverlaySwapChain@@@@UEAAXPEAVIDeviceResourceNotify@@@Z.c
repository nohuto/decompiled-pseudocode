/*
 * XREFs of ?AddResourceNotifier@?$CDeviceResourceT@VIOverlaySwapChain@@@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x180211640
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x1800439AC (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 */

char *__fastcall CDeviceResourceT<IOverlaySwapChain>::AddResourceNotifier(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(
           (char **)(a1 + 16),
           &v3);
}
