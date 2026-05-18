/*
 * XREFs of sub_18005069C @ 0x18005069C
 * Callers:
 *     sub_1800504A0 @ 0x1800504A0 (sub_1800504A0.c)
 *     sub_180050580 @ 0x180050580 (sub_180050580.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_1800279D0 @ 0x1800279D0 (sub_1800279D0.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005069C(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  sub_180011B04(*a2 + 72LL, &v7);
  v4 = *(_DWORD *)(*a2 + 88LL);
  sub_1800279D0(a1, (__int64)&v7);
  v10 = v4;
  v5 = sub_180050140((__int64 *)(a1 + 128), (__int64)v9, &v10);
  sub_18001244C((__int64 *)(*(_QWORD *)v5 + 40LL), a2);
  v10 = v4;
  result = sub_18002755C((__int64 *)(a1 + 80), (__int64)v9, &v10);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
  if ( v8 )
    return sub_18001050C(v8);
  return result;
}
