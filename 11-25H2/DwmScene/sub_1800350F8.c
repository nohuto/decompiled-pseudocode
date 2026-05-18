/*
 * XREFs of sub_1800350F8 @ 0x1800350F8
 * Callers:
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_18001E9EC @ 0x18001E9EC (sub_18001E9EC.c)
 *     sub_18001EADC @ 0x18001EADC (sub_18001EADC.c)
 *     sub_18002378C @ 0x18002378C (sub_18002378C.c)
 *     sub_18002BF28 @ 0x18002BF28 (sub_18002BF28.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 *     sub_1800326A4 @ 0x1800326A4 (sub_1800326A4.c)
 *     sub_180032AC8 @ 0x180032AC8 (sub_180032AC8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800350F8(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // ecx
  float v8; // xmm0_4
  float v9; // xmm1_4
  __int64 v10; // r14
  unsigned int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-79h] BYREF
  volatile signed __int32 *v14; // [rsp+48h] [rbp-71h]
  __int64 v15; // [rsp+50h] [rbp-69h] BYREF
  __int64 v16; // [rsp+58h] [rbp-61h]
  __int64 v17; // [rsp+60h] [rbp-59h] BYREF
  __int64 v18; // [rsp+68h] [rbp-51h]
  __int64 v19[4]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v20[8]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v21[4]; // [rsp+D0h] [rbp+17h] BYREF

  v2 = unknown_libname_81(&v15, (_QWORD *)(a1 + 464));
  sub_18001E9EC(
    v20,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    640,
    (__int64)"UpdateFrameTime",
    (__int64)"UpdateFrameTime");
  std::string::string(v21, "UpdateFrameTime");
  v3 = sub_1800323E8(a1, &v17);
  sub_180015174(&v13, v3);
  sub_18002F2B4(v19, (__int64)&v13);
  if ( v14 )
    sub_180010544(v14);
  if ( v18 )
    sub_18001050C(v18);
  sub_180011A5C((__int64)v21);
  sub_1800326A4((__int64)&v15, a1);
  if ( v15 )
    v4 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 328LL))(v15, &v13);
  else
    v4 = 0x8000000000000000uLL;
  v5 = *(_QWORD *)(a1 + 928);
  if ( v5 == 0x8000000000000000uLL || v4 == 0x8000000000000000uLL )
    v6 = 0LL;
  else
    v6 = v4 - v5;
  v7 = *(_DWORD *)(a1 + 960);
  if ( v7 )
  {
    if ( v7 == 1 )
      *(_DWORD *)(a1 + 936) = *(_DWORD *)(a1 + 956);
  }
  else
  {
    v8 = sub_18002BF28(v6);
    *(float *)(a1 + 936) = v8;
    v9 = *(float *)(a1 + 952);
    if ( v8 > v9 )
      *(float *)(a1 + 936) = v9;
  }
  v10 = sub_1800323A0(a1, 1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C4648, 0LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C4768, 0LL) )
  {
    *(float *)(a1 + 4LL * *(unsigned int *)(a1 + 1072) + 992) = sub_18002378C(v6);
    *(_DWORD *)(a1 + 1072) = (*(_DWORD *)(a1 + 1072) + 1) % 0x14u;
    v12 = *(_DWORD *)(a1 + 1076) + 1;
    if ( v12 > 0x14 )
      v12 = 20;
    *(_DWORD *)(a1 + 1076) = v12;
    sub_180032AC8();
  }
  *(_QWORD *)(a1 + 928) = v4;
  *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 936);
  if ( v16 )
    sub_18001050C(v16);
  sub_18002FFC8((__int64)v19);
  return sub_18001EADC((__int64)v20);
}
