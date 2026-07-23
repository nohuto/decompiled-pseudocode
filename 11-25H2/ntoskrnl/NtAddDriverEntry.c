/*
 * XREFs of NtAddDriverEntry @ 0x1407AE0B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  if ( dword_140EFE810 == 2 )
    return ExpSetDriverEntry(1, DriverEntry, Id);
  else
    return -1073741822;
}
