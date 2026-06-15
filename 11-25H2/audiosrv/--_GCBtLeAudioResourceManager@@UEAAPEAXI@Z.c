/*
 * XREFs of ??_GCBtLeAudioResourceManager@@UEAAPEAXI@Z @ 0x1800ECBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBtLeAudioResourceManager@@UEAA@XZ @ 0x1800EC8BC (--1CBtLeAudioResourceManager@@UEAA@XZ.c)
 */

CBtLeAudioResourceManager *__fastcall CBtLeAudioResourceManager::`scalar deleting destructor'(
        CBtLeAudioResourceManager *this,
        char a2)
{
  CBtLeAudioResourceManager::~CBtLeAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x200);
  return this;
}
