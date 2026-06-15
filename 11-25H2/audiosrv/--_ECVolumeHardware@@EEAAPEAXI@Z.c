/*
 * XREFs of ??_ECVolumeHardware@@EEAAPEAXI@Z @ 0x180087850
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x1800A6140 (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVolumeHardware *__fastcall CVolumeHardware::`vector deleting destructor'(CVolumeHardware *this, char a2)
{
  CVolumeHardware::~CVolumeHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B0);
  return this;
}
