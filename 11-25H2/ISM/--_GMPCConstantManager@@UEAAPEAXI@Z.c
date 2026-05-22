/*
 * XREFs of ??_GMPCConstantManager@@UEAAPEAXI@Z @ 0x1800B5820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCConstantManager@@UEAA@XZ @ 0x1800B5614 (--1MPCConstantManager@@UEAA@XZ.c)
 */

MPCConstantManager *__fastcall MPCConstantManager::`scalar deleting destructor'(MPCConstantManager *this, char a2)
{
  MPCConstantManager::~MPCConstantManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
