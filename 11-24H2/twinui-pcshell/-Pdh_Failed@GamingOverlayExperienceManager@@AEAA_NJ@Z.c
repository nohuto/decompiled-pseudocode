/*
 * XREFs of ?Pdh_Failed@GamingOverlayExperienceManager@@AEAA_NJ@Z @ 0x1803572A8
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803572D4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall GamingOverlayExperienceManager::Pdh_Failed(GamingOverlayExperienceManager *this, int a2)
{
  char result; // al
  unsigned int v3; // ecx

  result = 0;
  if ( a2 > 0 )
    v3 = (unsigned __int16)a2 | 0x80070000;
  else
    v3 = a2;
  if ( v3 )
  {
    if ( a2 != -2147481643 )
      return 1;
  }
  return result;
}
