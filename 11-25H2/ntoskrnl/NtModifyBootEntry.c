/*
 * XREFs of NtModifyBootEntry @ 0x1407AEAB0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 */

__int64 __fastcall NtModifyBootEntry(const void *a1)
{
  if ( dword_140EFE810 == 2 )
    return ExpSetBootEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
