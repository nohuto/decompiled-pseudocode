/*
 * XREFs of ??_GCBtLeAudioResourceManager@@UEAAPEAXI@Z @ 0x1800F1C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBtLeAudioResourceManager@@UEAA@XZ @ 0x1800F18EC (--1CBtLeAudioResourceManager@@UEAA@XZ.c)
 */

CBtLeAudioResourceManager *__fastcall CBtLeAudioResourceManager::`scalar deleting destructor'(
        CBtLeAudioResourceManager *this,
        char a2)
{
  CBtLeAudioResourceManager::~CBtLeAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x240);
  return this;
}
