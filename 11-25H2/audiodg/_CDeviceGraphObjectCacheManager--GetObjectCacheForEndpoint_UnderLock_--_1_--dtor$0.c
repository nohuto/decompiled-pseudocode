/*
 * XREFs of _CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock_::_1_::dtor$0 @ 0x1400931F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 96));
}
