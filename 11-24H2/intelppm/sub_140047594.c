/*
 * XREFs of sub_140047594 @ 0x140047594
 * Callers:
 *     sub_140028658 @ 0x140028658 (sub_140028658.c)
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 *     sub_14004B714 @ 0x14004B714 (sub_14004B714.c)
 *     sub_14004B874 @ 0x14004B874 (sub_14004B874.c)
 *     sub_14004BA80 @ 0x14004BA80 (sub_14004BA80.c)
 * Callees:
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_140047594(__int64 a1, __int64 a2, __int64 a3)
{
  char v7[8]; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+40h] [rbp-68h]
  __int64 v10; // [rsp+48h] [rbp-60h]
  int v11; // [rsp+50h] [rbp-58h]

  sub_140010680(v7, 0, 0x70uLL);
  v8 = 292;
  v9 = a2;
  v10 = a3;
  v11 = 0x4000000;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
