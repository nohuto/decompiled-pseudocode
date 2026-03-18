/*
 * XREFs of ExpReducedLicenseData @ 0x140AA0910
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

char ExpReducedLicenseData()
{
  char result; // al

  result = 0;
  if ( (_DWORD)InitSafeBootMode || InitIsWinPEMode )
    return 1;
  return result;
}
