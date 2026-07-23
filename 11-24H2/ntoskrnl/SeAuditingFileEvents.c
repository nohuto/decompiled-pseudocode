/*
 * XREFs of SeAuditingFileEvents @ 0x140791D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140F048E4 && AccessGranted
    || byte_140F048E5 && !AccessGranted
    || byte_140F048E6 && AccessGranted
    || byte_140F048E7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
