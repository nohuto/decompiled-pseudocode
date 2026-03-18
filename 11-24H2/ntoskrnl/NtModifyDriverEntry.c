/*
 * XREFs of NtModifyDriverEntry @ 0x1407BE2B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1407BCA24 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140EFEAF0 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
