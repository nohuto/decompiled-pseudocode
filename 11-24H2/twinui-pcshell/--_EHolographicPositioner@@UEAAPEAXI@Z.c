/*
 * XREFs of ??_EHolographicPositioner@@UEAAPEAXI@Z @ 0x1801ADAC4
 * Callers:
 *     ??_EHolographicPositioner@@WDA@EAAPEAXI@Z @ 0x180408040 (--_EHolographicPositioner@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801ADB04 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

HolographicPositioner *__fastcall HolographicPositioner::`vector deleting destructor'(
        HolographicPositioner *this,
        char a2)
{
  HolographicPositioner::~HolographicPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x270);
  return this;
}
