/*
 * XREFs of NtModifyBootEntry @ 0x1407AEAB0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140EFE810 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
