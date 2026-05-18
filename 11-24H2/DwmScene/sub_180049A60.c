/*
 * XREFs of sub_180049A60 @ 0x180049A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800143A4 @ 0x1800143A4 (sub_1800143A4.c)
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 */

__int64 *__fastcall sub_180049A60(__int64 a1)
{
  __int64 v2; // rdi
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  if ( 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v2) >> 3) )
  {
    sub_180047740(v2, *(_QWORD *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = v2;
  }
  v4 = 0LL;
  return sub_1800143A4(a1, &v4);
}
