/*
 * XREFs of sub_18005AAA4 @ 0x18005AAA4
 * Callers:
 *     sub_18004A288 @ 0x18004A288 (sub_18004A288.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180023FEC @ 0x180023FEC (sub_180023FEC.c)
 *     sub_18002EEF0 @ 0x18002EEF0 (sub_18002EEF0.c)
 *     sub_18004B414 @ 0x18004B414 (sub_18004B414.c)
 *     sub_180059F80 @ 0x180059F80 (sub_180059F80.c)
 *     sub_18005A79C @ 0x18005A79C (sub_18005A79C.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_18005AAA4(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rcx
  char v10; // bl
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-80h] BYREF
  __int64 v15; // [rsp+40h] [rbp-78h]
  __int64 v16; // [rsp+48h] [rbp-70h]
  _QWORD *v17; // [rsp+50h] [rbp-68h]
  _QWORD *v18; // [rsp+58h] [rbp-60h]
  __int64 v19; // [rsp+60h] [rbp-58h] BYREF
  __int64 v20; // [rsp+68h] [rbp-50h]
  __int64 v21; // [rsp+70h] [rbp-48h]

  v16 = a1;
  v21 = a2;
  v17 = a3;
  v18 = a4;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_180017054(a1 + 16, a2);
  sub_18004B414((__int64 *)(a1 + 48));
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  sub_18002EEF0((__int64 *)(a1 + 80));
  memset((void *)(a1 + 96), 0, 0xA0uLL);
  sub_18000CD2C(a1 + 96, 16LL, 10LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  memset((void *)(a1 + 256), 0, 0xA0uLL);
  sub_18000CD2C(a1 + 256, 16LL, 10LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  v14 = a1 + 416;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  v8 = sub_18001B1F8(72LL);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 416) = v8;
  *(_DWORD *)(a1 + 432) = 0;
  unknown_libname_81((_QWORD *)(a1 + 440), a3);
  if ( *a4 )
  {
    v9 = unknown_libname_81(&v19, a4);
    v10 = 1;
  }
  else
  {
    v9 = sub_18005A79C(&v14);
    v10 = 2;
  }
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 456) = *v9;
  *(_QWORD *)(a1 + 464) = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v15 )
      sub_18001060C(v15);
  }
  if ( (v10 & 1) != 0 && v20 )
    sub_18001060C(v20);
  sub_180023FEC((_QWORD *)(a1 + 472));
  v14 = a1 + 480;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 480) = sub_180059F80();
  *(_OWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 15LL;
  *(_BYTE *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  sub_180011B5C(a2);
  v11 = a3[1];
  if ( v11 )
    sub_18001060C(v11);
  v12 = a4[1];
  if ( v12 )
    sub_18001060C(v12);
  return a1;
}
