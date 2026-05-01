/*
 * XREFs of ?DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA?AW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@XZ @ 0x180224410
 * Callers:
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1802191BC (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18023E194 (-InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?get_OverlayDisplayMode@GamingOverlayExperienceManager@@UEAAJPEAW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@@Z @ 0x18023FA20 (-get_OverlayDisplayMode@GamingOverlayExperienceManager@@UEAAJPEAW4GamingOverlayDisplayMode@Gamin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingOverlayExperienceManager::DetermineCurrentDisplayMode(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 1584) )
    return (unsigned int)(*(_BYTE *)(a1 + 1585) != 0) + 1;
  return result;
}
