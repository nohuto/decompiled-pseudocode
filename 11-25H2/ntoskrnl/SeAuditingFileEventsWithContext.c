/*
 * XREFs of SeAuditingFileEventsWithContext @ 0x140782B40
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditingFileEventsWithContextEx @ 0x140487D50 (SeAuditingFileEventsWithContextEx.c)
 */

BOOLEAN __stdcall SeAuditingFileEventsWithContext(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  return SeAuditingFileEventsWithContextEx(
           AccessGranted,
           (__int64)SecurityDescriptor,
           (__int64)SubjectSecurityContext,
           0LL);
}
