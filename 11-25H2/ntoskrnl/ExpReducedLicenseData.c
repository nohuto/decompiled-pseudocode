/*
 * XREFs of ExpReducedLicenseData @ 0x140A9AB50
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

char ExpReducedLicenseData()
{
  char result; // al

  result = 0;
  if ( InitSafeBootMode || InitIsWinPEMode )
    return 1;
  return result;
}
