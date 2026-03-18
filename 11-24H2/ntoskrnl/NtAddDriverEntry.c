/*
 * XREFs of NtAddDriverEntry @ 0x1407BD880
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1407BCA24 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtAddDriverEntry(const void *a1, unsigned int *a2)
{
  if ( dword_140EFEAF0 == 2 )
    return ExpSetDriverEntry(1, a1, a2);
  else
    return 3221225474LL;
}
