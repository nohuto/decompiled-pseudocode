/*
 * XREFs of ??_GCDeviceGraphObjectCacheManager@@UEAAPEAXI@Z @ 0x14006B480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDeviceGraphObjectCacheManager@@UEAA@XZ @ 0x14006B3A8 (--1CDeviceGraphObjectCacheManager@@UEAA@XZ.c)
 */

CDeviceGraphObjectCacheManager *__fastcall CDeviceGraphObjectCacheManager::`scalar deleting destructor'(
        CDeviceGraphObjectCacheManager *this,
        char a2)
{
  CDeviceGraphObjectCacheManager::~CDeviceGraphObjectCacheManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
