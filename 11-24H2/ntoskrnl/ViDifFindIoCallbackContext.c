/*
 * XREFs of ViDifFindIoCallbackContext @ 0x140B8C8C4
 * Callers:
 *     VfDifRecoverIoCallbacks @ 0x14060F4F0 (VfDifRecoverIoCallbacks.c)
 *     ViDifCaptureDriverEntry @ 0x140B8C70C (ViDifCaptureDriverEntry.c)
 *     ViDifCaptureIoCallbacks @ 0x140B8C758 (ViDifCaptureIoCallbacks.c)
 * Callees:
 *     <none>
 */

char **__fastcall ViDifFindIoCallbackContext(int a1)
{
  char **result; // rax

  result = &VfDifIoCallbackThunks;
  while ( *((_DWORD *)result + 6) != a1 )
  {
    result += 4;
    if ( !*result )
      return 0LL;
  }
  return result;
}
