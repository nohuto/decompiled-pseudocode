/*
 * XREFs of ExpReducedLicenseData @ 0x140A9BCA0
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
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
