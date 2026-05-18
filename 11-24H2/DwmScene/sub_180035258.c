/*
 * XREFs of sub_180035258 @ 0x180035258
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001EB4C @ 0x18001EB4C (sub_18001EB4C.c)
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_1800238EC @ 0x1800238EC (sub_1800238EC.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_180032804 @ 0x180032804 (sub_180032804.c)
 *     sub_180032C28 @ 0x180032C28 (sub_180032C28.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180035258(__int64 a1)
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
  sub_18001EB4C(
    v20,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    640,
    (__int64)"UpdateFrameTime",
    (__int64)"UpdateFrameTime");
  std::string::string(v21, "UpdateFrameTime");
  v3 = sub_180032548(a1, &v17);
  sub_180015274(&v13, v3);
  sub_18002F414(v19, (__int64)&v13);
  if ( v14 )
    sub_180010644(v14);
  if ( v18 )
    sub_18001060C(v18);
  sub_180011B5C((__int64)v21);
  sub_180032804((__int64)&v15, a1);
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
    v8 = sub_18002C088(v6);
    *(float *)(a1 + 936) = v8;
    v9 = *(float *)(a1 + 952);
    if ( v8 > v9 )
      *(float *)(a1 + 936) = v9;
  }
  v10 = sub_180032500(a1, 1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C5658, 0LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C5778, 0LL) )
  {
    *(float *)(a1 + 4LL * *(unsigned int *)(a1 + 1072) + 992) = sub_1800238EC(v6);
    *(_DWORD *)(a1 + 1072) = (*(_DWORD *)(a1 + 1072) + 1) % 0x14u;
    v12 = *(_DWORD *)(a1 + 1076) + 1;
    if ( v12 > 0x14 )
      v12 = 20;
    *(_DWORD *)(a1 + 1076) = v12;
    sub_180032C28();
  }
  *(_QWORD *)(a1 + 928) = v4;
  *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 936);
  if ( v16 )
    sub_18001060C(v16);
  sub_180030128((__int64)v19);
  return sub_18001EC3C((__int64)v20);
}
