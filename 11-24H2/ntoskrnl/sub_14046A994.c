/*
 * XREFs of sub_14046A994 @ 0x14046A994
 * Callers:
 *     sub_140800BE0 @ 0x140800BE0 (sub_140800BE0.c)
 *     sub_1409E0950 @ 0x1409E0950 (sub_1409E0950.c)
 * Callees:
 *     sub_14046AA04 @ 0x14046AA04 (sub_14046AA04.c)
 *     sub_14046AA64 @ 0x14046AA64 (sub_14046AA64.c)
 */

__int64 __fastcall sub_14046A994(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+24h] [rbp-24h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  v12 = 0;
  v8 = a5 - a3;
  v10 = a2;
  v11 = a1;
  v15 = a3;
  v12 = sub_14046AA04(&v10, (unsigned int)(a5 - a3));
  v13 = v8 + a7;
  v14 = v12;
  sub_14046AA64(&v10, a6 - a5, a4);
  return 0LL;
}
