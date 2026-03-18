/*
 * XREFs of DbgkpLkmdSnapObject @ 0x14057B5C4
 * Callers:
 *     DbgkpLkmdSnapPendingIrps @ 0x1406FC3A4 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     DbgkpLkmdSnapDataEx @ 0x14057B304 (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall DbgkpLkmdSnapObject(__int64 a1, _WORD *a2, int a3)
{
  __int64 result; // rax

  if ( a3 == 3 )
  {
    if ( *a2 == 3 )
      goto LABEL_10;
    return 3221225477LL;
  }
  if ( a3 == 4 )
  {
    if ( *a2 == 4 )
      goto LABEL_10;
    return 3221225477LL;
  }
  if ( a3 != 5 || *a2 != 5 )
    return 3221225477LL;
LABEL_10:
  result = DbgkpLkmdSnapDataEx(a1);
  if ( (int)result >= 0 && (unsigned int)(a3 - 4) <= 1 )
    return DbgkpLkmdSnapDataEx(a1);
  return result;
}
