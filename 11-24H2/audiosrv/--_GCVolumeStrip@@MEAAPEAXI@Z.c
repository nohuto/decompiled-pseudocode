/*
 * XREFs of ??_GCVolumeStrip@@MEAAPEAXI@Z @ 0x180047960
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x18004799C (--1CVolumeStrip@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVolumeStrip *__fastcall CVolumeStrip::`scalar deleting destructor'(CVolumeStrip *this, char a2)
{
  CVolumeStrip::~CVolumeStrip(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}
