/*
 * XREFs of ??_ECCrossProcessKSMemory@@UEAAPEAXI@Z @ 0x180105BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseMemory@@IEAA@XZ @ 0x180079F9C (--1CCrossProcessBaseMemory@@IEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessKSMemory *__fastcall CCrossProcessKSMemory::`vector deleting destructor'(
        CCrossProcessKSMemory *this,
        char a2)
{
  *((_DWORD *)this + 11) = -1073741823;
  CCrossProcessBaseMemory::~CCrossProcessBaseMemory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
