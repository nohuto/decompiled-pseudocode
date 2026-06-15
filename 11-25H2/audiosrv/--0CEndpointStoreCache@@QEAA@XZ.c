/*
 * XREFs of ??0CEndpointStoreCache@@QEAA@XZ @ 0x1800A3ED8
 * Callers:
 *     _dynamic_initializer_for__g_endpointStoreCache__ @ 0x180007FC0 (_dynamic_initializer_for__g_endpointStoreCache__.c)
 * Callees:
 *     ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180021710 (--0-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 */

CEndpointStoreCache *__fastcall CEndpointStoreCache::CEndpointStoreCache(CEndpointStoreCache *this)
{
  g_endpointStoreCache = 0;
  SRWLock.Ptr = 0LL;
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&qword_1801CF588);
  return (CEndpointStoreCache *)&g_endpointStoreCache;
}
