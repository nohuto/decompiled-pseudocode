/*
 * XREFs of ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x1800B84D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioResourceManager@@UEAA@XZ @ 0x1800B74F8 (--1CAudioResourceManager@@UEAA@XZ.c)
 */

CAudioResourceManager *__fastcall CAudioResourceManager::`scalar deleting destructor'(
        CAudioResourceManager *this,
        char a2)
{
  CAudioResourceManager::~CAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
