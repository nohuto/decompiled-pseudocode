/*
 * XREFs of ??_EKioskPositioner@@UEAAPEAXI@Z @ 0x18007B454
 * Callers:
 *     ??_EKioskPositioner@@WCI@EAAPEAXI@Z @ 0x1804F11C0 (--_EKioskPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1KioskPositioner@@UEAA@XZ @ 0x18007B490 (--1KioskPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KioskPositioner *__fastcall KioskPositioner::`vector deleting destructor'(KioskPositioner *this, char a2)
{
  KioskPositioner::~KioskPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A8);
  return this;
}
