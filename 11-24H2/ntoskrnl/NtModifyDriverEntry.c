/*
 * XREFs of NtModifyDriverEntry @ 0x1407BE700
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140EFEE10 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
