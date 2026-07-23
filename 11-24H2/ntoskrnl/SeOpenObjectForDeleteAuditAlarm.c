/*
 * XREFs of SeOpenObjectForDeleteAuditAlarm @ 0x14088E160
 * Callers:
 *     <none>
 * Callees:
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088DEB0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 */

void __stdcall SeOpenObjectForDeleteAuditAlarm(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        PBOOLEAN GenerateOnClose)
{
  if ( AccessMode )
    SeOpenObjectForDeleteAuditAlarmWithTransaction(
      ObjectTypeName,
      Object,
      AbsoluteObjectName,
      SecurityDescriptor,
      AccessState,
      ObjectCreated,
      AccessGranted,
      AccessMode,
      0LL,
      GenerateOnClose);
}
