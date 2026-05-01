/*
 * XREFs of ??_EGamingPosturePositioner@@UEAAPEAXI@Z @ 0x1804FA104
 * Callers:
 *     ??_EGamingPosturePositioner@@WGI@EAAPEAXI@Z @ 0x1804F9F40 (--_EGamingPosturePositioner@@WGI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GamingPosturePositioner@@UEAA@XZ @ 0x1804F8ED8 (--1GamingPosturePositioner@@UEAA@XZ.c)
 */

GamingPosturePositioner *__fastcall GamingPosturePositioner::`vector deleting destructor'(
        GamingPosturePositioner *this,
        char a2)
{
  GamingPosturePositioner::~GamingPosturePositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3E8);
  return this;
}
