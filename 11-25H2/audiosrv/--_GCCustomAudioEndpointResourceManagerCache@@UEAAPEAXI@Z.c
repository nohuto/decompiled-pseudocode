/*
 * XREFs of ??_GCCustomAudioEndpointResourceManagerCache@@UEAAPEAXI@Z @ 0x1800ECC00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCustomAudioEndpointResourceManagerCache@@UEAA@XZ @ 0x1800EC8D4 (--1CCustomAudioEndpointResourceManagerCache@@UEAA@XZ.c)
 */

CCustomAudioEndpointResourceManagerCache *__fastcall CCustomAudioEndpointResourceManagerCache::`scalar deleting destructor'(
        CCustomAudioEndpointResourceManagerCache *this,
        char a2)
{
  CCustomAudioEndpointResourceManagerCache::~CCustomAudioEndpointResourceManagerCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
