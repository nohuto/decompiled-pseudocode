/*
 * XREFs of ??_EAtmosCheck@@UEAAPEAXI@Z @ 0x180147BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x180147150 (--1AtmosCheck@@UEAA@XZ.c)
 */

AtmosCheck *__fastcall AtmosCheck::`vector deleting destructor'(AtmosCheck *this, char a2)
{
  AtmosCheck::~AtmosCheck(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2C0);
  return this;
}
