/*
 * XREFs of SbGetCurrentSwitchContext @ 0x1800710E0
 * Callers:
 *     LdrShutdownProcess @ 0x180002B70 (LdrShutdownProcess.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x180070DD0 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbpUpdateCache @ 0x1800AAA50 (SbpUpdateCache.c)
 * Callees:
 *     <none>
 */

char *SbGetCurrentSwitchContext()
{
  char *pShimData; // rax
  char *result; // rax

  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData )
    return 0LL;
  result = pShimData + 2016;
  if ( !result || !*((_DWORD *)result + 12) )
    return 0LL;
  return result;
}
