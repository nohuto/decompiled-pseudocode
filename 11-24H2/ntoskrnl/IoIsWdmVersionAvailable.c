/*
 * XREFs of IoIsWdmVersionAvailable @ 0x140A708B0
 * Callers:
 *     DifIoIsWdmVersionAvailableWrapper @ 0x140629750 (DifIoIsWdmVersionAvailableWrapper.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsWdmVersionAvailable(UCHAR MajorVersion, UCHAR MinorVersion)
{
  BOOLEAN result; // al

  if ( MajorVersion < 6u )
    return 1;
  result = 0;
  if ( MajorVersion == 6 && !MinorVersion )
    return 1;
  return result;
}
