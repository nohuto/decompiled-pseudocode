/*
 * XREFs of ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x14002C100
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009D920 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z.c)
 * Callees:
 *     ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x14009D794 (-EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

char __fastcall CFlipExBuffer::UpdateAttributes(CFlipExBuffer *this, const struct CFlipToken *a2)
{
  __m128 v3; // xmm6
  char v5; // si
  char v6; // al
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  char v10; // al
  unsigned int v11; // r8d
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  int v18; // eax
  int v19; // eax
  float v20; // xmm2_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  int v26; // eax
  unsigned __int8 v27; // dl
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx

  v3 = *(__m128 *)((char *)a2 + 136);
  v5 = 0;
  if ( *((_DWORD *)this + 13) != (*(unsigned int (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 120LL))(a2) )
  {
    *((_DWORD *)this + 13) = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 120LL))(a2);
    v5 = 1;
  }
  v6 = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 128LL))(a2);
  v7 = *((_DWORD *)this + 46);
  if ( ((v7 >> 12) & 1) != v6 )
  {
    v5 = 1;
    v7 = *((_DWORD *)this + 46) ^ ((unsigned __int16)*((_DWORD *)this + 46) ^ (unsigned __int16)((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 128LL))(a2) << 12)) & 0x1000;
    *((_DWORD *)this + 46) = v7;
  }
  v8 = *((unsigned __int8 *)a2 + 134);
  if ( (v7 & 1) != v8 )
  {
    v5 = 1;
    *((_DWORD *)this + 46) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)v8) & 1;
  }
  v9 = *((_DWORD *)a2 + 40);
  if ( *((_DWORD *)this + 29) != v9 )
  {
    *((_DWORD *)this + 29) = v9;
    v5 = 1;
  }
  v10 = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 144LL))(a2);
  v11 = *((_DWORD *)this + 46);
  if ( ((v11 >> 5) & 1) != (v10 != 0) )
  {
    v5 = 1;
    v11 = *((_DWORD *)this + 46) & 0xFFFFFFDF | ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 144LL))(a2) != 0
                                               ? 0x20
                                               : 0);
    *((_DWORD *)this + 46) = v11;
  }
  if ( *((float *)this + 17) != v3.m128_f32[0]
    || *((float *)this + 18) != _mm_shuffle_ps(v3, v3, 85).m128_f32[0]
    || *((float *)this + 19) != _mm_shuffle_ps(v3, v3, 170).m128_f32[0]
    || *((float *)this + 20) != _mm_shuffle_ps(v3, v3, 255).m128_f32[0] )
  {
    *(__m128 *)((char *)this + 68) = v3;
    v5 = 1;
  }
  v12 = *((unsigned __int8 *)a2 + 152);
  if ( ((v11 >> 2) & 1) != v12 )
  {
    v5 = 1;
    v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(4 * v12)) & 4;
    *((_DWORD *)this + 46) = v11;
  }
  v13 = *((_DWORD *)a2 + 57);
  if ( *((_DWORD *)this + 21) != v13 )
  {
    *((_DWORD *)this + 21) = v13;
    v5 = 1;
  }
  v14 = *((_DWORD *)a2 + 39);
  if ( *((_DWORD *)this + 12) != v14 )
  {
    *((_DWORD *)this + 12) = v14;
    v5 = 1;
  }
  v15 = *((unsigned __int8 *)a2 + 153);
  if ( ((v11 >> 3) & 1) != v15 )
  {
    v5 = 1;
    *((_DWORD *)this + 46) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(8 * v15)) & 8;
  }
  v16 = *(__m128i *)((char *)a2 + 164);
  if ( *(_QWORD *)((char *)this + 100) != *(_QWORD *)((char *)a2 + 164)
    || *(_QWORD *)((char *)this + 108) != _mm_srli_si128(v16, 8).m128i_u64[0] )
  {
    *(__m128i *)((char *)this + 100) = v16;
    v5 = 1;
  }
  v17 = *(__m128i *)((char *)a2 + 180);
  if ( *((_QWORD *)this + 21) != *(_QWORD *)((char *)a2 + 180)
    || *((_QWORD *)this + 22) != _mm_srli_si128(v17, 8).m128i_u64[0] )
  {
    *(__m128i *)((char *)this + 168) = v17;
    v5 = 1;
  }
  v18 = *((_DWORD *)a2 + 49);
  if ( *((_DWORD *)this + 40) != v18 )
  {
    *((_DWORD *)this + 40) = v18;
    v5 = 1;
  }
  v19 = *((_DWORD *)a2 + 50);
  if ( *((_DWORD *)this + 41) != v19 )
  {
    *((_DWORD *)this + 41) = v19;
    v5 = 1;
  }
  v20 = *((float *)a2 + 51);
  v21 = *((float *)a2 + 52);
  v22 = *((float *)a2 + 53);
  v23 = *((float *)a2 + 54);
  v24 = *((float *)a2 + 55);
  v25 = *((float *)a2 + 56);
  if ( *((float *)this + 30) != v20
    || *((float *)this + 31) != v21
    || *((float *)this + 32) != v22
    || *((float *)this + 33) != v23
    || *((float *)this + 34) != v24
    || *((float *)this + 35) != v25 )
  {
    *((float *)this + 30) = v20;
    v5 = 1;
    *((float *)this + 31) = v21;
    *((float *)this + 32) = v22;
    *((float *)this + 33) = v23;
    *((float *)this + 34) = v24;
    *((float *)this + 35) = v25;
  }
  v26 = *((_DWORD *)a2 + 58);
  if ( *((_DWORD *)this + 24) != v26 )
  {
    *((_DWORD *)this + 24) = v26;
    v5 = 1;
  }
  v27 = *((_BYTE *)a2 + 154);
  *((_DWORD *)this + 46) ^= ((unsigned __int16)*((_DWORD *)this + 46) ^ (unsigned __int16)(v27 << 10)) & 0x400;
  if ( (v27 & 1) == 0 )
    return v5;
  v29 = *((_DWORD *)a2 + 59);
  *((_DWORD *)this + 98) = v29;
  if ( v29 )
  {
    if ( (int)CFlipExBuffer::EnsureHDR10MetaData(this) < 0 )
    {
      *((_DWORD *)this + 98) = 0;
    }
    else if ( *((_DWORD *)this + 98) == 1 )
    {
      v31 = *((_QWORD *)this + 48);
      *(_OWORD *)v31 = *((_OWORD *)a2 + 15);
      *(_QWORD *)(v31 + 16) = *((_QWORD *)a2 + 32);
      *(_DWORD *)(v31 + 24) = *((_DWORD *)a2 + 66);
    }
    else if ( *((_DWORD *)this + 98) == 2 )
    {
      v30 = *((_QWORD *)this + 48);
      *(_OWORD *)v30 = *((_OWORD *)a2 + 15);
      *(_OWORD *)(v30 + 16) = *((_OWORD *)a2 + 16);
      *(_OWORD *)(v30 + 32) = *((_OWORD *)a2 + 17);
      *(_OWORD *)(v30 + 48) = *((_OWORD *)a2 + 18);
      *(_QWORD *)(v30 + 64) = *((_QWORD *)a2 + 38);
    }
  }
  return 1;
}
