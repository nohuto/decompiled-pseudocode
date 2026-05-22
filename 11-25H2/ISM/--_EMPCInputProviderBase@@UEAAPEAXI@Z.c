/*
 * XREFs of ??_EMPCInputProviderBase@@UEAAPEAXI@Z @ 0x1800C1AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800C6D30 (--1MPCInputProviderBase@@UEAA@XZ.c)
 */

MPCInputProviderBase *__fastcall MPCInputProviderBase::`vector deleting destructor'(
        MPCInputProviderBase *this,
        char a2)
{
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE48);
  return this;
}
