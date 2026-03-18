/*
 * XREFs of NtAddDriverEntry @ 0x1407AE0B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtAddDriverEntry(const void *a1, unsigned int *a2)
{
  if ( dword_140EFE810 == 2 )
    return ExpSetDriverEntry(1, a1, a2);
  else
    return 3221225474LL;
}
