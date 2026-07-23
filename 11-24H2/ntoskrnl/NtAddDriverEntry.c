/*
 * XREFs of NtAddDriverEntry @ 0x1407BDCD0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  if ( dword_140EFEE10 == 2 )
    return ExpSetDriverEntry(1, DriverEntry, Id);
  else
    return -1073741822;
}
