/*
 * XREFs of ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x180213DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x180213DEC (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVirtualTouchpadExperienceManager *__fastcall CVirtualTouchpadExperienceManager::`vector deleting destructor'(
        CVirtualTouchpadExperienceManager *this,
        char a2)
{
  CVirtualTouchpadExperienceManager::~CVirtualTouchpadExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x378);
  return this;
}
