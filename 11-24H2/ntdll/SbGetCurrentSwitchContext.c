/*
 * XREFs of SbGetCurrentSwitchContext @ 0x18008D9C0
 * Callers:
 *     SbpUpdateCache @ 0x18000BBE0 (SbpUpdateCache.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18008D6B0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrShutdownProcess @ 0x1800ABBC0 (LdrShutdownProcess.c)
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
