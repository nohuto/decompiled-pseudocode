/*
 * XREFs of sub_1800C6DB0 @ 0x1800C6DB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     unknown_libname_83 @ 0x180017608 (unknown_libname_83.c)
 *     sub_1800C6514 @ 0x1800C6514 (sub_1800C6514.c)
 *     sub_1800C6590 @ 0x1800C6590 (sub_1800C6590.c)
 *     sub_1800C66F8 @ 0x1800C66F8 (sub_1800C66F8.c)
 *     sub_1800C6BF4 @ 0x1800C6BF4 (sub_1800C6BF4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800C6DB0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ecx
  const char *v7; // rax
  const char *v8; // rdi
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, void *, _QWORD, const char *); // rsi
  _OWORD v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[40]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v16[352]; // [rsp+90h] [rbp-70h] BYREF

  v12[0] = 0LL;
  v12[1] = _mm_load_si128((const __m128i *)&xmmword_18018D3A0);
  LOBYTE(v12[0]) = 0;
  v6 = *(_DWORD *)(a1 + 96);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      sub_1800C6BF4(&v13, (__int64 *)(a1 + 112));
      sub_1800C6590(a1, a2, v13, (v14[0] - v13) >> 5, a3);
      unknown_libname_83(v12, (__int64)v15);
      sub_1800C6514((__int64)&v13);
    }
  }
  else
  {
    memset(v16, 0, sizeof(v16));
    sub_1800C66F8((__int64)&v13, *(_QWORD *)(a1 + 104), (__int64)v16);
    sub_1800C6590(a1, a2, (__int64)v16, v13, a3);
    unknown_libname_83(v12, (__int64)v14);
    sub_180011B5C((__int64)v14);
  }
  v7 = (const char *)sub_1800138F8((__int64)v12);
  v8 = v7;
  v9 = *(_QWORD *)(a1 + 144);
  if ( v9 )
  {
    v10 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v9 + 40LL);
    if ( v7 )
      LODWORD(v7) = strnlen(v7, 0x7FFFFFFFuLL);
    v10(v9, &unk_1800F7B68, (unsigned int)v7, v8);
  }
  return sub_180011B5C((__int64)v12);
}
