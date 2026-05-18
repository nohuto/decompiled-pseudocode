/*
 * XREFs of sub_18007370C @ 0x18007370C
 * Callers:
 *     sub_18009A1D0 @ 0x18009A1D0 (sub_18009A1D0.c)
 *     sub_18009BFA8 @ 0x18009BFA8 (sub_18009BFA8.c)
 *     sub_18009C4C8 @ 0x18009C4C8 (sub_18009C4C8.c)
 *     sub_1800A3990 @ 0x1800A3990 (sub_1800A3990.c)
 *     sub_1800A3C0C @ 0x1800A3C0C (sub_1800A3C0C.c)
 *     sub_1800A3EDC @ 0x1800A3EDC (sub_1800A3EDC.c)
 *     sub_1800A5E98 @ 0x1800A5E98 (sub_1800A5E98.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800731A4 @ 0x1800731A4 (sub_1800731A4.c)
 *     sub_1800734FC @ 0x1800734FC (sub_1800734FC.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18007370C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v6; // [rsp+20h] [rbp-68h]
  __int64 v7; // [rsp+28h] [rbp-60h] BYREF
  __int64 v8; // [rsp+30h] [rbp-58h]
  _BYTE v9[16]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v10[32]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v11; // [rsp+68h] [rbp-20h]

  v11 = a1;
  sub_1800734FC(&v7, *(_DWORD *)(a2 + 20));
  v6 = sub_180016F54((__int64)v10, a1);
  v4 = *(_QWORD *)sub_1800731A4((__int64 *)(v7 + 16), (__int64)v9, v6);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)a2;
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 16);
  sub_180011A5C(v6);
  if ( v8 )
    sub_18001050C(v8);
  sub_180011A5C(a1);
  return 1;
}
