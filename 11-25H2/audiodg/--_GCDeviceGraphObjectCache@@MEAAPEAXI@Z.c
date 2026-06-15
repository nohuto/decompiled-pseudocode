/*
 * XREFs of ??_GCDeviceGraphObjectCache@@MEAAPEAXI@Z @ 0x14003E350
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x14003E38C (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDeviceGraphObjectCache *__fastcall CDeviceGraphObjectCache::`scalar deleting destructor'(
        CDeviceGraphObjectCache *this,
        char a2)
{
  CDeviceGraphObjectCache::~CDeviceGraphObjectCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
