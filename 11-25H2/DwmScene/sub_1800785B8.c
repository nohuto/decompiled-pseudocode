/*
 * XREFs of sub_1800785B8 @ 0x1800785B8
 * Callers:
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 *     sub_180078AC8 @ 0x180078AC8 (sub_180078AC8.c)
 *     sub_180078E9C @ 0x180078E9C (sub_180078E9C.c)
 *     sub_180078EFC @ 0x180078EFC (sub_180078EFC.c)
 *     sub_18007AC94 @ 0x18007AC94 (sub_18007AC94.c)
 *     sub_18007AF10 @ 0x18007AF10 (sub_18007AF10.c)
 *     sub_18007B19C @ 0x18007B19C (sub_18007B19C.c)
 *     sub_18007C9B4 @ 0x18007C9B4 (sub_18007C9B4.c)
 * Callees:
 *     sub_18006B15C @ 0x18006B15C (sub_18006B15C.c)
 */

__int64 __fastcall sub_1800785B8(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_18006B15C(v3);
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
