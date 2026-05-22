/*
 * XREFs of ??_GPenDevice@@UEAAPEAXI@Z @ 0x180189130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenDevice@@UEAA@XZ @ 0x18018904C (--1PenDevice@@UEAA@XZ.c)
 */

PenDevice *__fastcall PenDevice::`scalar deleting destructor'(PenDevice *this, char a2)
{
  PenDevice::~PenDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
