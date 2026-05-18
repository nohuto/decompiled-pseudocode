/*
 * XREFs of sub_18008FEF0 @ 0x18008FEF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_180041910 @ 0x180041910 (sub_180041910.c)
 *     sub_1800419C0 @ 0x1800419C0 (sub_1800419C0.c)
 *     sub_180041B78 @ 0x180041B78 (sub_180041B78.c)
 *     sub_180041CD8 @ 0x180041CD8 (sub_180041CD8.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_18005E620 @ 0x18005E620 (sub_18005E620.c)
 *     sub_180062514 @ 0x180062514 (sub_180062514.c)
 *     sub_1800699F0 @ 0x1800699F0 (sub_1800699F0.c)
 *     sub_18007C138 @ 0x18007C138 (sub_18007C138.c)
 *     sub_18007C1A8 @ 0x18007C1A8 (sub_18007C1A8.c)
 *     sub_18007C380 @ 0x18007C380 (sub_18007C380.c)
 *     sub_18007C7FC @ 0x18007C7FC (sub_18007C7FC.c)
 *     sub_18008DD88 @ 0x18008DD88 (sub_18008DD88.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008FEF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // r12
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rdx
  __int16 v13; // cx
  char v14; // r14
  char v15; // r13
  char v16; // cl
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rbx
  int v20; // ebx
  _DWORD *v21; // rax
  __int32 v22; // xmm1_4
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rax
  __m128i *p_si128; // rax
  unsigned int v30; // edx
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rax
  __m128 v35; // [rsp+20h] [rbp-60h] BYREF
  __m128i si128; // [rsp+30h] [rbp-50h] BYREF
  __int64 v37; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v38[32]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v39; // [rsp+68h] [rbp-18h] BYREF

  v35.m128_u64[0] = a4;
  v7 = *(_BYTE *)(a3 + 162);
  v8 = 1;
  if ( v7 )
  {
    switch ( v7 )
    {
      case 2:
        *(_DWORD *)(a2 + 188) = 1;
        break;
      case 3:
        *(_DWORD *)(a2 + 188) = 3;
        break;
      case 4:
        *(_DWORD *)(a2 + 188) = 2;
        break;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 184) = 1;
    *(_DWORD *)(a2 + 188) = 0;
  }
  *(_WORD *)(a2 + 112) = *(_WORD *)(a3 + 160);
  v37 = a4;
  v9 = a4 + 688;
  v10 = sub_1800323A0(*(_QWORD *)(a4 + 3648), 1);
  v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C4908, 0LL);
  v13 = *(_WORD *)(a2 + 112);
  if ( !v11 || (v13 & 0x10) == 0 )
  {
    v14 = 0;
    goto LABEL_14;
  }
  v14 = 1;
  if ( (v13 & 0x20) != 0 )
  {
LABEL_14:
    v15 = 1;
    goto LABEL_15;
  }
  v15 = 0;
LABEL_15:
  v16 = v13 & 1;
  if ( !v14 || !v16 )
    v8 = 0;
  sub_180041910(a2, v12, v8);
  if ( !v8 )
    *(_WORD *)(a2 + 112) = *(_WORD *)(a2 + 112) & 0xFFFC | 2;
  v17 = *(_QWORD *)(*(_QWORD *)(v35.m128_u64[0] + 3648) + 512LL);
  sub_180016F54((__int64)v38, (__int64)&unk_1801C7EA8);
  v35.m128_u64[0] = (unsigned __int64)v38;
  v35.m128_u64[1] = (unsigned __int64)&v39;
  v18 = sub_18005E620(si128.m128i_i64, (__m128i *)&v35);
  v19 = sub_18004C644(v17, (void **)v18);
  sub_18000B2D4((__int64)v38, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_1800419C0(a2, v19, v14);
  v20 = *(_DWORD *)(a3 + 4);
  if ( (v20 & 1) != 0 )
  {
    v35.m128_i32[0] = *(_DWORD *)(a3 + 16);
    v35 = _mm_mul_ps(
            _mm_add_ps(
              _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                         _mm_and_ps(
                                           _mm_shuffle_ps((__m128)v35.m128_u32[0], (__m128)v35.m128_u32[0], 0),
                                           (__m128)xmmword_1800F6FC0),
                                         (__m128)xmmword_1800F7020)),
              (__m128)xmmword_1800F7010),
            (__m128)xmmword_180105FD0);
    if ( v15 )
    {
      v21 = sub_180062514((int *)&v35, &si128);
      v35.m128_u64[0] = *(_QWORD *)v21;
      v35.m128_i32[2] = v21[2];
      v22 = v21[3];
      v35.m128_i32[3] = v22;
    }
    else
    {
      v22 = v35.m128_i32[3];
    }
    if ( !v14 && *(float *)&v22 < 1.0 && !v7 )
      *(_DWORD *)(a2 + 188) = 3;
    v23 = *(_DWORD *)(a3 + 20);
    if ( v23 )
    {
      v24 = sub_1800699F0(v9, v23, a5);
      sub_180041B78(a2, (__int64)&unk_1801C6DC8, v24, v9);
      sub_18007C138(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6F68, *(_BYTE *)(a3 + 32));
      sub_18008DD88(&v37, (__int64)&si128);
      sub_180041CD8(a2, (__int64)&unk_1801C6DC8, &si128);
      if ( v15 )
      {
        v35.m128_u64[0] = 0x3F8000003F800000LL;
        v35.m128_i32[2] = 1065353216;
      }
      if ( si128.m128i_i64[1] )
        sub_18001050C(si128.m128i_i64[1]);
    }
    sub_18007C1A8(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6D08, &v35);
  }
  if ( (v20 & 2) != 0 )
  {
    v35.m128_i32[0] = *(_DWORD *)(a3 + 36);
    v35 = _mm_mul_ps(
            _mm_add_ps(
              _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                         _mm_and_ps(
                                           _mm_shuffle_ps((__m128)v35.m128_u32[0], (__m128)v35.m128_u32[0], 0),
                                           (__m128)xmmword_1800F6FC0),
                                         (__m128)xmmword_1800F7020)),
              (__m128)xmmword_1800F7010),
            (__m128)xmmword_180105FD0);
    if ( v15 )
      v35 = *(__m128 *)sub_180062514((int *)&v35, &si128);
    v25 = *(_DWORD *)(a3 + 40);
    if ( v25 )
    {
      v26 = sub_1800699F0(v9, v25, a5);
      sub_180041B78(a2, (__int64)&unk_1801C6E08, v26, v9);
      sub_18007C138(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6F88, *(_BYTE *)(a3 + 56));
      sub_18008DD88(&v37, (__int64)&si128);
      sub_180041CD8(a2, (__int64)&unk_1801C6E08, &si128);
      if ( v15 )
        v35 = (__m128)xmmword_18018C610;
      if ( si128.m128i_i64[1] )
        sub_18001050C(si128.m128i_i64[1]);
    }
    sub_18007C1A8(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6D28, &v35);
  }
  if ( (v20 & 4) != 0 )
  {
    v27 = *(_DWORD *)(a3 + 84);
    if ( v27 )
    {
      v28 = sub_1800699F0(v9, v27, a5);
      sub_180041B78(a2, (__int64)&unk_1801C6DE8, v28, v9);
      sub_18007C138(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6F48, *(_BYTE *)(a3 + 100));
      sub_18008DD88(&v37, (__int64)&si128);
      sub_180041CD8(a2, (__int64)&unk_1801C6DE8, &si128);
      if ( si128.m128i_i64[1] )
        sub_18001050C(si128.m128i_i64[1]);
    }
    if ( v14 )
    {
      v35.m128_i32[0] = *(_DWORD *)(a3 + 96);
      v35.m128_i32[1] = v35.m128_i32[0];
      v35.m128_u64[1] = 0x3F8000003F800000LL;
      p_si128 = (__m128i *)&v35;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_18018C610);
      p_si128 = &si128;
    }
    si128 = *p_si128;
    sub_18007C7FC(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6D68, &si128);
  }
  if ( (v20 & 0x10) != 0 )
  {
    v30 = *(_DWORD *)(a3 + 68);
    if ( v30 )
    {
      v31 = sub_1800699F0(v9, v30, a5);
      sub_180041B78(a2, (__int64)&unk_1801C6E28, v31, v9);
      sub_18007C138(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6FA8, *(_BYTE *)(a3 + 80));
      sub_18008DD88(&v37, (__int64)&si128);
      sub_180041CD8(a2, (__int64)&unk_1801C6E28, &si128);
      if ( si128.m128i_i64[1] )
        sub_18001050C(si128.m128i_i64[1]);
    }
    if ( v14 )
    {
      v35.m128_i32[0] = *(_DWORD *)(a3 + 60);
      v35 = _mm_mul_ps(
              _mm_add_ps(
                _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                           _mm_and_ps(
                                             _mm_shuffle_ps((__m128)v35.m128_u32[0], (__m128)v35.m128_u32[0], 0),
                                             (__m128)xmmword_1800F6FC0),
                                           (__m128)xmmword_1800F7020)),
                (__m128)xmmword_1800F7010),
              (__m128)xmmword_180105FD0);
      if ( v15 )
        v35 = *(__m128 *)sub_180062514((int *)&v35, &si128);
      sub_18007C1A8(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6DA8, &v35);
    }
  }
  if ( (v20 & 0x20) != 0 )
  {
    v32 = *(_DWORD *)(a3 + 120);
    if ( v32 )
    {
      v33 = sub_1800699F0(v9, v32, a5);
      sub_180041B78(a2, (__int64)&unk_1801C6E68, v33, v9);
      sub_18007C138(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6FC8, *(_BYTE *)(a3 + 140));
      sub_18008DD88(&v37, (__int64)&si128);
      sub_180041CD8(a2, (__int64)&unk_1801C6E68, &si128);
      if ( si128.m128i_i64[1] )
        sub_18001050C(si128.m128i_i64[1]);
    }
    if ( v14 )
      sub_18007C380(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6D88);
  }
  return sub_18007C380(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6F08);
}
