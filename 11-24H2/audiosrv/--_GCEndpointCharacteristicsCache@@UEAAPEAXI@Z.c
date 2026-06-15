/*
 * XREFs of ??_GCEndpointCharacteristicsCache@@UEAAPEAXI@Z @ 0x1801329F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CEndpointCharacteristicsCache@@UEAA@XZ @ 0x180130904 (--1CEndpointCharacteristicsCache@@UEAA@XZ.c)
 */

CEndpointCharacteristicsCache *__fastcall CEndpointCharacteristicsCache::`scalar deleting destructor'(
        CEndpointCharacteristicsCache *this,
        char a2)
{
  CEndpointCharacteristicsCache::~CEndpointCharacteristicsCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
