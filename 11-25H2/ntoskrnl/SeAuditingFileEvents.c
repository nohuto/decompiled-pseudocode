/*
 * XREFs of SeAuditingFileEvents @ 0x140782B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140F04264 && AccessGranted
    || byte_140F04265 && !AccessGranted
    || byte_140F04266 && AccessGranted
    || byte_140F04267 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
