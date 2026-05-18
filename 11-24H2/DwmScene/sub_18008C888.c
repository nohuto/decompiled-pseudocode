/*
 * XREFs of sub_18008C888 @ 0x18008C888
 * Callers:
 *     sub_180069830 @ 0x180069830 (sub_180069830.c)
 *     sub_18008C984 @ 0x18008C984 (sub_18008C984.c)
 *     sub_18008CA14 @ 0x18008CA14 (sub_18008CA14.c)
 * Callees:
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_18002FBFC @ 0x18002FBFC (sub_18002FBFC.c)
 *     sub_1800758C0 @ 0x1800758C0 (sub_1800758C0.c)
 *     sub_18008C734 @ 0x18008C734 (sub_18008C734.c)
 */

__int64 *__fastcall sub_18008C888(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 *v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  *a1 = 0LL;
  v3 = 16LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_1800758C0(a1, 16LL);
  v7 = *a1;
  v8 = v7;
  v9 = a1;
  do
  {
    sub_18008C734((__int64)&v7);
    --v3;
  }
  while ( v3 );
  v5 = v8;
  sub_180012140(v8, v8);
  v10 = 0LL;
  a1[1] = v5;
  sub_18002FBFC(&v10);
  return a1;
}
