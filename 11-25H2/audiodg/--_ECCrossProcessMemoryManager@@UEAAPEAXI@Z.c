/*
 * XREFs of ??_ECCrossProcessMemoryManager@@UEAAPEAXI@Z @ 0x14001DB80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessMemoryManager@@UEAA@XZ @ 0x14001DBBC (--1CCrossProcessMemoryManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessMemoryManager *__fastcall CCrossProcessMemoryManager::`vector deleting destructor'(
        CCrossProcessMemoryManager *this,
        char a2)
{
  CCrossProcessMemoryManager::~CCrossProcessMemoryManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
