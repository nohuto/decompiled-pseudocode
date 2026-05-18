/*
 * XREFs of sub_1800D0310 @ 0x1800D0310
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE930 @ 0x1800CE930 (sub_1800CE930.c)
 */

__int64 __fastcall sub_1800D0310(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0;
  if ( !(unsigned int)sub_1800CE930(a1, a2, &v5) )
    return v5;
  return a3;
}
