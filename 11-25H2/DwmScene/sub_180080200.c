/*
 * XREFs of sub_180080200 @ 0x180080200
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_1800800B0 @ 0x1800800B0 (sub_1800800B0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180080200(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v8[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  sub_1800800B0((__int64 *)(a3 + 496), v8);
  v5 = v8[0];
  v6 = (_QWORD *)sub_180011C64(a3 + 8, &v9);
  sub_180027B50(v5, v6);
  if ( v10 )
    sub_18001050C(v10);
  *a2 = v8[0];
  a2[1] = v8[1];
  return a2;
}
