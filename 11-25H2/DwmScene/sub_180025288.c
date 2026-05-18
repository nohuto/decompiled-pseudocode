/*
 * XREFs of sub_180025288 @ 0x180025288
 * Callers:
 *     sub_1800971A4 @ 0x1800971A4 (sub_1800971A4.c)
 *     sub_1800973E4 @ 0x1800973E4 (sub_1800973E4.c)
 *     sub_1800977BC @ 0x1800977BC (sub_1800977BC.c)
 *     sub_1800978E0 @ 0x1800978E0 (sub_1800978E0.c)
 *     sub_180098368 @ 0x180098368 (sub_180098368.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_18009651C @ 0x18009651C (sub_18009651C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180025288(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v6 = (_QWORD *)sub_180011C64(a1 + 8, &v10);
  v9 = 0LL;
  v8 = a1 + 3760;
  v9 = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  sub_18009651C(a2, &v8, a3);
  if ( v11 )
    sub_18001050C(v11);
  return a2;
}
