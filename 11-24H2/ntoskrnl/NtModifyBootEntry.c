/*
 * XREFs of NtModifyBootEntry @ 0x1407BE6D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140EFEE10 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
