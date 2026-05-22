/*
 * XREFs of ??_EMouseHapticDevice@@UEAAPEAXI@Z @ 0x180188C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TouchpadHapticDevice@@UEAA@XZ @ 0x180184AD4 (--1TouchpadHapticDevice@@UEAA@XZ.c)
 */

MouseHapticDevice *__fastcall MouseHapticDevice::`vector deleting destructor'(MouseHapticDevice *this, char a2)
{
  TouchpadHapticDevice::~TouchpadHapticDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x278);
  return this;
}
