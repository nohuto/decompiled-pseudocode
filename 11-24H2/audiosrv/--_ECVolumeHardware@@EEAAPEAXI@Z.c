/*
 * XREFs of ??_ECVolumeHardware@@EEAAPEAXI@Z @ 0x180074890
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x1800A257C (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVolumeHardware *__fastcall CVolumeHardware::`vector deleting destructor'(CVolumeHardware *this, char a2)
{
  CVolumeHardware::~CVolumeHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1C0);
  return this;
}
