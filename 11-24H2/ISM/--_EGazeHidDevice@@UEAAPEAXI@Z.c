/*
 * XREFs of ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x1800DCA50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800E02DC (--1GazeHidDevice@@UEAA@XZ.c)
 */

GazeHidDevice *__fastcall GazeHidDevice::`vector deleting destructor'(GazeHidDevice *this, char a2)
{
  GazeHidDevice::~GazeHidDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
