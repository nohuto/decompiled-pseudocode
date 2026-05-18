/*
 * XREFs of sub_1800BADB0 @ 0x1800BADB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18002500C @ 0x18002500C (sub_18002500C.c)
 *     sub_1800250E0 @ 0x1800250E0 (sub_1800250E0.c)
 *     sub_180025134 @ 0x180025134 (sub_180025134.c)
 *     sub_180026FD0 @ 0x180026FD0 (sub_180026FD0.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800BADB0(__int64 a1, int a2)
{
  int v3; // edi
  __int64 result; // rax
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  __int128 *v10; // rax
  __m128 v11; // xmm7
  __m128 v12; // xmm8
  _QWORD *v13; // rax
  __int64 v14; // rax
  void (__fastcall *v15)(__int64 *); // rbx
  __int64 v16; // [rsp+38h] [rbp-79h] BYREF
  __int64 v17; // [rsp+40h] [rbp-71h]
  __int64 *v18; // [rsp+48h] [rbp-69h] BYREF
  __int64 v19; // [rsp+50h] [rbp-61h]
  __int128 v20; // [rsp+58h] [rbp-59h] BYREF
  __int64 v21; // [rsp+68h] [rbp-49h] BYREF
  __int64 v22; // [rsp+70h] [rbp-41h]
  __int64 v23; // [rsp+78h] [rbp-39h] BYREF
  __int64 v24; // [rsp+80h] [rbp-31h]
  _BYTE v25[96]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v26; // [rsp+118h] [rbp+67h] BYREF
  int v27; // [rsp+120h] [rbp+6Fh]

  v3 = 0;
  v27 = 0;
  *(_DWORD *)(a1 + 416) = a2;
  result = sub_180025134(a1);
  v5 = result;
  v6 = 0;
  if ( (_DWORD)result )
  {
    v7 = *((_QWORD *)&v20 + 1);
    do
    {
      sub_1800250E0(a1, &v18, v6);
      v8 = v18;
      sub_18002851C((__int64)(v18 + 1), (__int64)v25);
      (*(void (__fastcall **)(__int64 *))(*v8 + 112))(v8);
      (*(void (__fastcall **)(__int64 *))(*v8 + 120))(v8);
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(*v8 + 152))(v8);
      unknown_libname_81(&v21, v9);
      if ( v21 )
      {
        v10 = (__int128 *)unknown_libname_81(&v23, (_QWORD *)(v21 + 456));
        v3 |= 1u;
      }
      else
      {
        v20 = 0LL;
        v10 = &v20;
        v3 |= 2u;
        v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
      }
      unknown_libname_81(&v16, v10);
      if ( (v3 & 2) != 0 )
      {
        v3 &= ~2u;
        if ( v7 )
          sub_18001050C(v7);
      }
      if ( (v3 & 1) != 0 )
      {
        v3 &= ~1u;
        if ( v24 )
          sub_18001050C(v24);
      }
      v11 = 0LL;
      v12 = 0LL;
      if ( v16 )
      {
        v13 = sub_18002500C(v16, &v26);
        v11 = (__m128)*(unsigned int *)v13;
        v12 = (__m128)*((unsigned int *)v13 + 1);
      }
      v14 = *v8;
      v15 = *(void (__fastcall **)(__int64 *))(*v8 + 56);
      (*(void (__fastcall **)(__int64 *))(v14 + 104))(v18);
      (*(void (__fastcall **)(__int64 *))(*v18 + 96))(v18);
      v15(v18);
      if ( v16 )
        sub_180026FD0(v16, _mm_unpacklo_ps(v11, v12).m128_i64[0]);
      if ( v17 )
        sub_18001050C(v17);
      if ( v22 )
        sub_18001050C(v22);
      result = sub_180010F44((__int64)v25);
      if ( v19 )
        result = sub_18001050C(v19);
      ++v6;
    }
    while ( v6 < v5 );
  }
  return result;
}
