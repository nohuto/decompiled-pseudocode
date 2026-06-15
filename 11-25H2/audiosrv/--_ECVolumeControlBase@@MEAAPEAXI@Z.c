/*
 * XREFs of ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x18010BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x1800A19F0 (--1CVolumeControlBase@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVolumeControlBase *__fastcall CVolumeControlBase::`vector deleting destructor'(CVolumeControlBase *this, char a2)
{
  CVolumeControlBase::~CVolumeControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
