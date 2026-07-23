/*
 * XREFs of NtAddBootEntry @ 0x1407BDCA0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  if ( dword_140EFEE10 == 2 )
    return ExpSetBootEntry(1, BootEntry, (unsigned __int64)Id);
  else
    return -1073741822;
}
