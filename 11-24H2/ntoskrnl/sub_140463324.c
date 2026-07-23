/*
 * XREFs of sub_140463324 @ 0x140463324
 * Callers:
 *     sub_140801320 @ 0x140801320 (sub_140801320.c)
 *     sub_1409DA700 @ 0x1409DA700 (sub_1409DA700.c)
 * Callees:
 *     sub_140463394 @ 0x140463394 (sub_140463394.c)
 *     sub_1404633F4 @ 0x1404633F4 (sub_1404633F4.c)
 */

__int64 __fastcall sub_140463324(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
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
  v12 = sub_140463394(&v10, (unsigned int)(a5 - a3));
  v13 = v8 + a7;
  v14 = v12;
  sub_1404633F4(&v10, a6 - a5, a4);
  return 0LL;
}
