/*
 * XREFs of ??_GPenHapticDevice@@UEAAPEAXI@Z @ 0x18018BF00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenHapticDevice@@UEAA@XZ @ 0x18018BDB8 (--1PenHapticDevice@@UEAA@XZ.c)
 */

PenHapticDevice *__fastcall PenHapticDevice::`scalar deleting destructor'(PenHapticDevice *this, char a2)
{
  PenHapticDevice::~PenHapticDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
