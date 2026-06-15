/*
 * XREFs of ??_GCBtAudioResourceManager@@UEAAPEAXI@Z @ 0x1800ECB80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBtAudioResourceManager@@UEAA@XZ @ 0x1800EC7D8 (--1CBtAudioResourceManager@@UEAA@XZ.c)
 */

void **__fastcall CBtAudioResourceManager::`scalar deleting destructor'(void **this, char a2)
{
  CBtAudioResourceManager::~CBtAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x200);
  return this;
}
