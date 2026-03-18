/*
 * XREFs of FreeAllSpbs @ 0x1C0072380
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0071B3C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRealizePalette @ 0x1C02145A8 (xxxRealizePalette.c)
 * Callees:
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 */

__int64 FreeAllSpbs()
{
  __int64 result; // rax

  while ( 1 )
  {
    result = gpDispInfo;
    if ( !*(_QWORD *)(gpDispInfo + 32LL) )
      break;
    FreeSpb(*(char **)(gpDispInfo + 32LL));
  }
  *(_QWORD *)(gpDispInfo + 32LL) = 0LL;
  return result;
}
