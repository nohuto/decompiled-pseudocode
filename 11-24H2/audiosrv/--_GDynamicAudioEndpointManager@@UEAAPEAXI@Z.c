/*
 * XREFs of ??_GDynamicAudioEndpointManager@@UEAAPEAXI@Z @ 0x1800C7650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800C758C (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 */

DynamicAudioEndpointManager *__fastcall DynamicAudioEndpointManager::`scalar deleting destructor'(
        DynamicAudioEndpointManager *this,
        char a2)
{
  DynamicAudioEndpointManager::~DynamicAudioEndpointManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A0);
  return this;
}
