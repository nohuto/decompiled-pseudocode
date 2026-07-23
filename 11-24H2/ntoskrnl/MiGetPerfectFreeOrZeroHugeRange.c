/*
 * XREFs of MiGetPerfectFreeOrZeroHugeRange @ 0x1406716BC
 * Callers:
 *     MiGetBestHugeRangeFromNode @ 0x140671050 (MiGetBestHugeRangeFromNode.c)
 * Callees:
 *     MiGetPerfectColorHeadHugeRange @ 0x140671548 (MiGetPerfectColorHeadHugeRange.c)
 */

__int64 *__fastcall MiGetPerfectFreeOrZeroHugeRange(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]
  __int64 v10; // [rsp+48h] [rbp-10h]

  v5[1] = 0LL;
  v6 = 0;
  v9 = 0;
  v10 = 0LL;
  v3 = &MiZeroThenZero;
  v5[0] = a1;
  if ( (a3 & 0x10) == 0 )
    v3 = &MiFreeThenFree;
  v7 = a2;
  v5[2] = v3;
  v8 = a3;
  return MiGetPerfectColorHeadHugeRange((__int64)v5, a2);
}
