/*
 * XREFs of sub_1800C0A74 @ 0x1800C0A74
 * Callers:
 *     sub_1800C0350 @ 0x1800C0350 (sub_1800C0350.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180027BB8 @ 0x180027BB8 (sub_180027BB8.c)
 *     sub_180050D9C @ 0x180050D9C (sub_180050D9C.c)
 *     sub_180051390 @ 0x180051390 (sub_180051390.c)
 *     sub_1800513B0 @ 0x1800513B0 (sub_1800513B0.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BEC70 @ 0x1800BEC70 (sub_1800BEC70.c)
 *     sub_1800BF6E0 @ 0x1800BF6E0 (sub_1800BF6E0.c)
 *     sub_1800C01D4 @ 0x1800C01D4 (sub_1800C01D4.c)
 *     sub_1800C1068 @ 0x1800C1068 (sub_1800C1068.c)
 *     sub_1800C1CE8 @ 0x1800C1CE8 (sub_1800C1CE8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C0A74(
        __int64 a1,
        __int32 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned int v13; // r15d
  unsigned int v14; // esi
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // eax
  int v20; // ecx
  __m128i v21; // xmm6
  unsigned __int64 v22; // r12
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int128 *, unsigned __int64, __int64 *); // rdi
  bool v25; // cf
  int v26; // eax
  ULONG_PTR v27; // rbx
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rcx
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  void **v36; // [rsp+70h] [rbp-98h] BYREF
  int v37; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v38; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v39; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v40; // [rsp+90h] [rbp-78h] BYREF
  __m128i v41; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v42[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v43; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v44; // [rsp+D8h] [rbp-30h]
  int v45; // [rsp+E8h] [rbp-20h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v47[5]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+1C0h] [rbp+B8h] BYREF
  void *retaddr; // [rsp+260h] [rbp+158h]

  v13 = a8;
  v14 = a6;
  LODWORD(v35) = a2;
  LODWORD(v36) = a3;
  v40 = a4;
  v39 = a6;
  v37 = a7;
  v38 = a8;
  v32 = a9;
  if ( (a8 & 1) != 0 && a6 == 17 )
  {
    std::string::string(v47, "Unsupported texture options: Format::UInt8_RGBA cannot be used with BindToShader");
    v15 = std::string::string(
            v42,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_180068508(pExceptionObject, (__int64)v15, v16, (__int64)v47, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v17 = sub_1800C01D4((__int64)v47, a3, a4, a6, a7, a8);
  v43 = *(_OWORD *)v17;
  v44 = *(_OWORD *)(v17 + 16);
  v18 = *(_DWORD *)(v17 + 32);
  v45 = v18;
  DWORD2(v43) = a5;
  if ( (v13 & 0x20) != 0 )
  {
    v19 = a4;
    if ( a3 >= a4 )
      v19 = a3;
    v20 = 0;
    while ( v19 > 1 )
    {
      v19 >>= 1;
      ++v20;
    }
    HIDWORD(v43) = v20 != -1;
    v45 = v18 | 1;
    DWORD2(v44) |= 0x20u;
    *(_BYTE *)(a1 + 208) = 1;
  }
  v34.m128i_i64[0] = v32;
  v34.m128i_i32[2] = a2;
  v34.m128i_i32[3] = sub_1800C1CE8(v14, a3, a4, &v35);
  if ( (v13 & 0x20) != 0 )
    *(_QWORD *)(a1 + 200) = 4LL * *(_QWORD *)(a1 + 200) / 3uLL;
  sub_180027BB8(a1, *(_QWORD *)(a1 + 200), (v13 & 6) != 0 ? 3 : 11);
  v41 = v34;
  v33 = 0LL;
  sub_180011B04(a1 + 72, &v34);
  v21 = v34;
  v22 = _mm_srli_si128(v34, 8).m128i_u64[0];
  sub_1800B9A04(v34.m128i_i64[0], &v35);
  v23 = v35;
  v24 = *(__int64 (__fastcall **)(__int64, __int128 *, unsigned __int64, __int64 *))(*(_QWORD *)v35 + 48LL);
  sub_18000E854(&v33);
  v25 = v32 != 0;
  v32 = -v32;
  v26 = v24(v23, &v43, (unsigned __int64)&v41 & -(__int64)v25, &v33);
  v27 = v26;
  sub_1800BB198(v21.m128i_i64[0], v26);
  if ( (v27 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v27;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18000E854(&v35);
  if ( v22 )
    sub_18001050C(_mm_srli_si128(v21, 8).m128i_i64[0]);
  sub_180050D9C(&v32, &v36, (int *)&v40, &a5, (int *)&v39, (int *)&v38, &v37);
  sub_1800C1068(a1, (unsigned int)&v34, v33, v13, HIDWORD(v43));
  sub_1800BEC70((__int64 *)(a1 + 176), &v33);
  sub_1800BEC70((__int64 *)(a1 + 160), v34.m128i_i64);
  v28 = sub_18001B098(16LL);
  if ( v28 )
  {
    v29 = HIDWORD(v43);
    v30 = v32;
    v32 = 0LL;
    *(_QWORD *)v28 = v30;
    *(_DWORD *)(v28 + 8) = v29;
    *(_DWORD *)(v28 + 12) = 1;
  }
  v36 = (void **)v28;
  sub_1800BF6E0((void ***)(a1 + 112), &v36);
  sub_180051390(&v36);
  sub_18000E854(v34.m128i_i64);
  sub_1800513B0((void **)&v32);
  return sub_18000E854(&v33);
}
