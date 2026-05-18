/*
 * XREFs of sub_180034A20 @ 0x180034A20
 * Callers:
 *     sub_1800152E8 @ 0x1800152E8 (sub_1800152E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_180010A84 @ 0x180010A84 (sub_180010A84.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001C338 @ 0x18001C338 (sub_18001C338.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_18002B734 @ 0x18002B734 (sub_18002B734.c)
 *     sub_18002EEF0 @ 0x18002EEF0 (sub_18002EEF0.c)
 *     sub_18002F2A0 @ 0x18002F2A0 (sub_18002F2A0.c)
 *     sub_18002FC1C @ 0x18002FC1C (sub_18002FC1C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180034A20(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  char *v6; // rdx
  __m128i si128; // xmm6
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, __int128 *, void **, __m128i *); // rbx
  __int64 v10; // rcx
  __m128i v11; // [rsp+38h] [rbp-D0h] BYREF
  void *v12; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v14; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v15[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v16[64]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v17[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v18; // [rsp+F8h] [rbp-10h]
  __m128i v19; // [rsp+108h] [rbp+0h]
  __int64 v20; // [rsp+118h] [rbp+10h] BYREF

  result = *(_QWORD *)(a1 + 480);
  if ( result )
  {
    if ( !qword_1801C4E58 )
      qword_1801C4E58 = *(_QWORD *)(a1 + 480);
    v4 = sub_1800275D0(v15, 1);
    sub_18002B734((__int64)v16, v5, (__int64)v4);
    v6 = (char *)sub_1800138F8((__int64)&unk_1801C4F28);
    v13 = 0LL;
    v14 = 0LL;
    if ( v6 == &v6[qword_1801C4F38] )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_18018D3A0);
      v14 = si128;
      LOBYTE(v13) = 0;
    }
    else
    {
      sub_180010A84(&v13, v6, qword_1801C4F38);
      si128 = _mm_loadu_si128(&v14);
    }
    std::string::string(v17, "Hardware Version");
    v18 = v13;
    v19 = si128;
    v14 = _mm_load_si128((const __m128i *)&xmmword_18018D3A0);
    LOBYTE(v13) = 0;
    v11.m128i_i64[0] = (__int64)v16;
    v11.m128i_i64[1] = (__int64)&v20;
    sub_18002F2A0((__int64 *)&v12, &v11);
    sub_18000B6A4((__int64)v16, 64LL, 2LL, (void (__fastcall *)(__int64))sub_18002FF60);
    sub_180011B5C((__int64)&v13);
    sub_180011B5C((__int64)v15);
    v8 = *(_QWORD *)(a1 + 480);
    v9 = *(void (__fastcall **)(__int64, __int128 *, void **, __m128i *))(*(_QWORD *)v8 + 40LL);
    sub_18002EEF0(v11.m128i_i64);
    std::string::string(&v13, "Engine Initialized Success");
    v9(v8, &v13, &v12, &v11);
    sub_180011B5C((__int64)&v13);
    sub_18001C338((void **)&v11);
    result = sub_18002FC1C(&v12);
  }
  v10 = *(_QWORD *)(a1 + 496);
  if ( v10 )
  {
    LOBYTE(a2) = 1;
    return (*(__int64 (__fastcall **)(__int64, __int64, void *, const char *))(*(_QWORD *)v10 + 24LL))(
             v10,
             a2,
             &unk_1800F7C80,
             "2.7.0.2");
  }
  return result;
}
