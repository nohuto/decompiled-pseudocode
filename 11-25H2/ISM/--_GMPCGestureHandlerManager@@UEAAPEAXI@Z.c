/*
 * XREFs of ??_GMPCGestureHandlerManager@@UEAAPEAXI@Z @ 0x1800B4000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x1800B3F94 (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 */

MPCGestureHandlerManager *__fastcall MPCGestureHandlerManager::`scalar deleting destructor'(
        MPCGestureHandlerManager *this,
        char a2)
{
  MPCGestureHandlerManager::~MPCGestureHandlerManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
