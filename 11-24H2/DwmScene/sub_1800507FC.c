/*
 * XREFs of sub_1800507FC @ 0x1800507FC
 * Callers:
 *     sub_180050600 @ 0x180050600 (sub_180050600.c)
 *     sub_1800506E0 @ 0x1800506E0 (sub_1800506E0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 *     sub_180027B30 @ 0x180027B30 (sub_180027B30.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800507FC(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  sub_180011C04(*a2 + 72LL, &v7);
  v4 = *(_DWORD *)(*a2 + 88LL);
  sub_180027B30(a1, (__int64)&v7);
  v10 = v4;
  v5 = sub_1800502A0((__int64 *)(a1 + 128), (__int64)v9, &v10);
  sub_18001254C((__int64 *)(*(_QWORD *)v5 + 40LL), a2);
  v10 = v4;
  result = sub_1800276BC((__int64 *)(a1 + 80), (__int64)v9, &v10);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
  if ( v8 )
    return sub_18001060C(v8);
  return result;
}
