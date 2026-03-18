/*
 * XREFs of SeAuditingFileEvents @ 0x140791DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140F04644 && AccessGranted
    || byte_140F04645 && !AccessGranted
    || byte_140F04646 && AccessGranted
    || byte_140F04647 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
