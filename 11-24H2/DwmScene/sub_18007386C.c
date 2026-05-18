/*
 * XREFs of sub_18007386C @ 0x18007386C
 * Callers:
 *     sub_18009A330 @ 0x18009A330 (sub_18009A330.c)
 *     sub_18009C108 @ 0x18009C108 (sub_18009C108.c)
 *     sub_18009C628 @ 0x18009C628 (sub_18009C628.c)
 *     sub_1800A3AF0 @ 0x1800A3AF0 (sub_1800A3AF0.c)
 *     sub_1800A3D6C @ 0x1800A3D6C (sub_1800A3D6C.c)
 *     sub_1800A403C @ 0x1800A403C (sub_1800A403C.c)
 *     sub_1800A5FF8 @ 0x1800A5FF8 (sub_1800A5FF8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180073304 @ 0x180073304 (sub_180073304.c)
 *     sub_18007365C @ 0x18007365C (sub_18007365C.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18007386C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v6; // [rsp+20h] [rbp-68h]
  __int64 v7; // [rsp+28h] [rbp-60h] BYREF
  __int64 v8; // [rsp+30h] [rbp-58h]
  _BYTE v9[16]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v10[32]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v11; // [rsp+68h] [rbp-20h]

  v11 = a1;
  sub_18007365C(&v7, *(_DWORD *)(a2 + 20));
  v6 = sub_180017054((__int64)v10, a1);
  v4 = *(_QWORD *)sub_180073304((__int64 *)(v7 + 16), (__int64)v9, v6);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)a2;
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 16);
  sub_180011B5C(v6);
  if ( v8 )
    sub_18001060C(v8);
  sub_180011B5C(a1);
  return 1;
}
