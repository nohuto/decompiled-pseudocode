/*
 * XREFs of ??_EMPCManager@@UEAAPEAXI@Z @ 0x1800B6150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCManager@@UEAA@XZ @ 0x1800B5F50 (--1MPCManager@@UEAA@XZ.c)
 */

MPCManager *__fastcall MPCManager::`vector deleting destructor'(MPCManager *this, char a2)
{
  MPCManager::~MPCManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
