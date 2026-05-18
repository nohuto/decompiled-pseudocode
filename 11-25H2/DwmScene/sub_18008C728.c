/*
 * XREFs of sub_18008C728 @ 0x18008C728
 * Callers:
 *     sub_1800696D0 @ 0x1800696D0 (sub_1800696D0.c)
 *     sub_18008C824 @ 0x18008C824 (sub_18008C824.c)
 *     sub_18008C8B4 @ 0x18008C8B4 (sub_18008C8B4.c)
 * Callees:
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_18002FA9C @ 0x18002FA9C (sub_18002FA9C.c)
 *     sub_180075760 @ 0x180075760 (sub_180075760.c)
 *     sub_18008C5D4 @ 0x18008C5D4 (sub_18008C5D4.c)
 */

__int64 *__fastcall sub_18008C728(__int64 *a1, __int64 a2, __int64 a3)
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
  sub_180075760(a1, 16LL);
  v7 = *a1;
  v8 = v7;
  v9 = a1;
  do
  {
    sub_18008C5D4((__int64)&v7);
    --v3;
  }
  while ( v3 );
  v5 = v8;
  sub_180012040(v8, v8);
  v10 = 0LL;
  a1[1] = v5;
  sub_18002FA9C(&v10);
  return a1;
}
