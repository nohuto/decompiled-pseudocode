/*
 * XREFs of sub_180057674 @ 0x180057674
 * Callers:
 *     sub_180058E68 @ 0x180058E68 (sub_180058E68.c)
 * Callees:
 *     sub_18005755C @ 0x18005755C (sub_18005755C.c)
 *     sub_180058DF4 @ 0x180058DF4 (sub_180058DF4.c)
 */

__int64 __fastcall sub_180057674(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  v5 = (_OWORD *)sub_18005755C(a1, 2, 1);
  v6 = v5[1];
  v10[0] = *v5;
  v7 = v5[2];
  v10[1] = v6;
  v8 = v5[3];
  v10[2] = v7;
  v10[3] = v8;
  sub_180058DF4(a2, a3, v10);
  return a2;
}
