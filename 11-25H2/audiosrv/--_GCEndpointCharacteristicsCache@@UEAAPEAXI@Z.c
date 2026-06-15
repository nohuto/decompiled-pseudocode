/*
 * XREFs of ??_GCEndpointCharacteristicsCache@@UEAAPEAXI@Z @ 0x18012A920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CEndpointCharacteristicsCache@@UEAA@XZ @ 0x180128838 (--1CEndpointCharacteristicsCache@@UEAA@XZ.c)
 */

CEndpointCharacteristicsCache *__fastcall CEndpointCharacteristicsCache::`scalar deleting destructor'(
        CEndpointCharacteristicsCache *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CEndpointCharacteristicsCache::~CEndpointCharacteristicsCache(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
