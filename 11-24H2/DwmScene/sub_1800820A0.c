/*
 * XREFs of sub_1800820A0 @ 0x1800820A0
 * Callers:
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 *     sub_180082480 @ 0x180082480 (sub_180082480.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_180027B30 @ 0x180027B30 (sub_180027B30.c)
 *     sub_180027CB0 @ 0x180027CB0 (sub_180027CB0.c)
 *     sub_180036AF4 @ 0x180036AF4 (sub_180036AF4.c)
 *     sub_18007D650 @ 0x18007D650 (sub_18007D650.c)
 *     sub_180081BB8 @ 0x180081BB8 (sub_180081BB8.c)
 *     sub_1800821A4 @ 0x1800821A4 (sub_1800821A4.c)
 *     sub_1800823C0 @ 0x1800823C0 (sub_1800823C0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800820A0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-30h] BYREF

  sub_180027B30(a1, (__int64)a2);
  result = (__int64)sub_180036AF4(a1 + 160, &v11);
  if ( v11 )
  {
    v5 = *a2;
    sub_180081BB8((__int64 *)(*a2 + 496LL), (__int64 *)&v10);
    v6 = v10;
    v7 = (_QWORD *)sub_180011D64(v5 + 8, &v13);
    sub_180027CB0(v6, v7);
    if ( *((_QWORD *)&v13 + 1) )
      sub_18001060C(*((__int64 *)&v13 + 1));
    v8 = v10;
    v9 = sub_18007D650((__int64)v14, a1 + 96);
    sub_1800823C0(v8, *a2, v9, v11);
    v13 = v10;
    v10 = 0LL;
    result = sub_1800821A4(a1, &v13);
    if ( *((_QWORD *)&v10 + 1) )
      result = sub_18001060C(*((__int64 *)&v10 + 1));
  }
  if ( v12 )
    return sub_18001060C(v12);
  return result;
}
