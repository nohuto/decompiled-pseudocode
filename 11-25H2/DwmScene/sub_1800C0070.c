/*
 * XREFs of sub_1800C0070 @ 0x1800C0070
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800BFC30 @ 0x1800BFC30 (sub_1800BFC30.c)
 */

__int64 *__fastcall sub_1800C0070(__int64 *lpMem, char a2)
{
  sub_1800BFC30(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
