/*
 * XREFs of NtOpenKeyTransacted @ 0x1407D0330
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x1409DE6B0 (NtOpenKeyTransactedEx.c)
 */

NTSTATUS __cdecl NtOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  return NtOpenKeyTransactedEx(KeyHandle, DesiredAccess, ObjectAttributes, 0, TransactionHandle);
}
