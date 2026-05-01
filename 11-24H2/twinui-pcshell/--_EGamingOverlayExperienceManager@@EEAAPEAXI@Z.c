/*
 * XREFs of ??_EGamingOverlayExperienceManager@@EEAAPEAXI@Z @ 0x18034B4F8
 * Callers:
 *     ??_EGamingOverlayExperienceManager@@GDA@EAAPEAXI@Z @ 0x18034AFC0 (--_EGamingOverlayExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803480B8 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 */

GamingOverlayExperienceManager *__fastcall GamingOverlayExperienceManager::`vector deleting destructor'(
        GamingOverlayExperienceManager *this,
        char a2)
{
  GamingOverlayExperienceManager::~GamingOverlayExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
