/*
 * XREFs of SbGetCurrentSwitchContext @ 0x180071CE0
 * Callers:
 *     SbpUpdateCache @ 0x180039890 (SbpUpdateCache.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800719D0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrShutdownProcess @ 0x1800FDE80 (LdrShutdownProcess.c)
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
