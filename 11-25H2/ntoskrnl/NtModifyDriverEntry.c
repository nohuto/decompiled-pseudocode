/*
 * XREFs of NtModifyDriverEntry @ 0x1407AEAE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140EFE810 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
