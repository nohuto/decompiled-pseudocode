/*
 * XREFs of ??_GSpatialRimDeviceCollectionCallbacks@@UEAAPEAXI@Z @ 0x1800D25D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x18009A35C (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SpatialRimDeviceCollectionCallbacks *__fastcall SpatialRimDeviceCollectionCallbacks::`scalar deleting destructor'(
        SpatialRimDeviceCollectionCallbacks *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
