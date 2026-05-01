/*
 * XREFs of ?GetMemoryUsageGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z @ 0x18034FE10
 * Callers:
 *     <none>
 * Callees:
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18035B2C8 (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetMemoryUsageGbInstantaneous(
        GamingOverlayExperienceManager *this,
        double *a2,
        double *a3)
{
  if ( !*((_QWORD *)this + 94) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)((char *)this - 136));
  *a2 = *((double *)this + 150);
  *a3 = *((double *)this + 151);
  return 0LL;
}
