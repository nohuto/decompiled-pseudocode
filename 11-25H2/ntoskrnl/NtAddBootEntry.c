/*
 * XREFs of NtAddBootEntry @ 0x1407AE080
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  if ( dword_140EFE810 == 2 )
    return ExpSetBootEntry(1, BootEntry, (unsigned __int64)Id);
  else
    return -1073741822;
}
