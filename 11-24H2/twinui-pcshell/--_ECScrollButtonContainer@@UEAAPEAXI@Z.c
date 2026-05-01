/*
 * XREFs of ??_ECScrollButtonContainer@@UEAAPEAXI@Z @ 0x1804D94D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CScrollButtonContainer@@UEAA@XZ @ 0x1804D9460 (--1CScrollButtonContainer@@UEAA@XZ.c)
 */

CScrollButtonContainer *__fastcall CScrollButtonContainer::`vector deleting destructor'(
        CScrollButtonContainer *this,
        char a2)
{
  CScrollButtonContainer::~CScrollButtonContainer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B8);
  return this;
}
