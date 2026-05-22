/*
 * XREFs of ??_GPenHapticDevice@@UEAAPEAXI@Z @ 0x180188320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenHapticDevice@@UEAA@XZ @ 0x180188220 (--1PenHapticDevice@@UEAA@XZ.c)
 */

PenHapticDevice *__fastcall PenHapticDevice::`scalar deleting destructor'(PenHapticDevice *this, char a2)
{
  PenHapticDevice::~PenHapticDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
