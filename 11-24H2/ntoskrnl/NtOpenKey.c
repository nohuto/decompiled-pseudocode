/*
 * XREFs of NtOpenKey @ 0x140A40DB0
 * Callers:
 *     IopProtectSystemPartition @ 0x140C203FC (IopProtectSystemPartition.c)
 *     ExpWatchProductTypeInitialization @ 0x140C4381C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtOpenKeyEx @ 0x140A40DD0 (NtOpenKeyEx.c)
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return NtOpenKeyEx(KeyHandle, DesiredAccess, ObjectAttributes, 0);
}
