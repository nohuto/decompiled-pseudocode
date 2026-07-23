/*
 * XREFs of NtModifyDriverEntry @ 0x1407AEAE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140EFE810 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
