/*
 * XREFs of sub_140BE2C70 @ 0x140BE2C70
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     sub_140516BA0 @ 0x140516BA0 (sub_140516BA0.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

void __fastcall sub_140BE2C70(const __m128i *a1)
{
  __m128i *v1; // rsi
  const __m128i *v2; // rbx
  __int64 v3; // rbp
  bool v4; // zf
  __int32 v5; // ecx
  char **v6; // r14
  unsigned int v7; // esi
  __int64 v8; // rdi
  unsigned int v9; // r11d
  char **v10; // r15
  _DWORD *v11; // r13
  __int64 v12; // r14
  char *v13; // r9
  char *v14; // r10
  const char *v15; // rax
  int v16; // r12d
  __int64 i; // rbx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  unsigned __int64 j; // rax
  _DWORD *v25; // r12
  __int64 v26; // r13
  _DWORD *v27; // r9
  _QWORD *v28; // r10
  char *v29; // r11
  int v30; // r8d
  char *v31; // rcx
  _QWORD *v32; // rdx
  __int64 v33; // r15
  char v34; // al
  int v35; // ecx
  void *v36; // rcx
  unsigned int *v37; // rax
  int v38; // r11d
  unsigned __int64 v39; // r14
  _QWORD *v40; // rdi
  unsigned int v41; // r9d
  _QWORD *v42; // r10
  const char *v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r8
  unsigned int v46; // esi
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int128 v49; // rax
  int v50; // edx
  unsigned int v51; // r9d
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 k; // rax
  __m128i si128; // xmm1
  __m128i *v56; // [rsp+20h] [rbp-88h]
  __int64 v57; // [rsp+28h] [rbp-80h]
  _BYTE v58[112]; // [rsp+38h] [rbp-70h] BYREF
  int v60; // [rsp+B8h] [rbp+10h]
  __int64 v61; // [rsp+C0h] [rbp+18h]
  __int64 v62; // [rsp+C8h] [rbp+20h]

  v1 = (__m128i *)a1;
  v2 = a1;
  v3 = *(_QWORD *)a1->m128i_i64[0];
  v4 = a1 == (const __m128i *)(a1->m128i_i64[0] + 40);
  v5 = a1[2].m128i_i32[2];
  if ( v4 )
    v1 = 0LL;
  v56 = v1;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_53;
    v6 = (char **)v2->m128i_i64[1];
    v7 = v2[2].m128i_u32[0];
    v57 = (__int64)v6;
    v62 = v2[1].m128i_i64[1];
    v61 = v2[1].m128i_i64[0];
    if ( !v6 )
    {
      v6 = *(char ***)(v3 + 2768);
      v57 = (__int64)v6;
    }
    if ( v7 )
    {
      do
      {
        v8 = 8LL;
        v9 = 0;
        if ( v7 < 8 )
          v8 = v7;
        v10 = v6;
        v11 = v58;
        v12 = v61;
        do
        {
          v10[1] = (char *)4096;
          v13 = (char *)(v12 + (v9 << 12));
          *v10 = v13;
          v14 = v13;
          *(_DWORD *)(v3 + 2120) += 4096;
          v15 = v13;
          v16 = *(_DWORD *)(v3 + 2100);
          for ( i = *(_QWORD *)(v3 + 2104); v15 < v13 + 4096; v15 += 64 )
            _mm_prefetch(v15, 0);
          v18 = *(_QWORD *)(v3 + 2104);
          v60 = 32;
          do
          {
            v19 = 8LL;
            do
            {
              v20 = *((_QWORD *)v14 + 1) ^ __ROL8__(*(_QWORD *)v14 ^ v18, v16);
              v14 += 16;
              v18 = __ROL8__(v20, v16);
              --v19;
            }
            while ( v19 );
            v21 = __ROL8__(i ^ (v14 - v13), 17);
            v22 = v60 - 1;
            v23 = ((unsigned __int8)(((v21 ^ i ^ (unsigned __int64)&v14[-v12 + -4096 * v9])
                                    * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v16 ^ v21 ^ i ^ ((_BYTE)v14 - v12))) & 0x3F;
            --v60;
            LOBYTE(v16) = 1;
            if ( v23 )
              LOBYTE(v16) = v23;
          }
          while ( v22 );
          v12 = v61;
          for ( j = v18; ; LODWORD(v18) = j ^ v18 )
          {
            j >>= 31;
            if ( !j )
              break;
          }
          ++v9;
          *v11 = v18 & 0x7FFFFFFF;
          v10 += 6;
          ++v11;
        }
        while ( v9 < (unsigned int)v8 );
        v6 = (char **)v57;
        sub_140516BA0(v3, v57, v8);
        v25 = v58;
        v26 = (unsigned int)v8;
        v27 = (_DWORD *)(v62 + 16);
        v28 = (_QWORD *)v62;
        v29 = (char *)(v57 + 16);
        do
        {
          v30 = 16;
          v31 = v29;
          v32 = v28;
          v33 = 2LL;
          do
          {
            v30 -= 8;
            *v32 = *(_QWORD *)v31;
            v31 += 8;
            ++v32;
            --v33;
          }
          while ( v33 );
          for ( ; v30; --v30 )
          {
            v34 = *v31++;
            *(_BYTE *)v32 = v34;
            v32 = (_QWORD *)((char *)v32 + 1);
          }
          v29 += 48;
          v28 = (_QWORD *)((char *)v28 + 20);
          v35 = *v25++ ^ *v27;
          *v27 ^= v35 & 0x7FFFFFFF;
          v27 += 5;
          --v26;
        }
        while ( v26 );
        v7 -= v8;
        v61 += (unsigned int)((_DWORD)v8 << 12);
        *(_DWORD *)(v3 + 2120) += (_DWORD)v8 << 15;
        v62 += 20 * v8;
      }
      while ( v7 );
      v2 = a1;
    }
    v36 = (void *)v2->m128i_i64[1];
    if ( v36 )
    {
      ExFreePool(v36);
      v2->m128i_i64[1] = 0LL;
    }
  }
  else
  {
    if ( !v2[2].m128i_i32[0] )
      goto LABEL_53;
    do
    {
      v37 = (unsigned int *)v2[1].m128i_i64[0];
      v38 = *(_DWORD *)(v3 + 2100);
      v39 = *(_QWORD *)(v3 + 2104);
      v40 = (_QWORD *)(v2->m128i_i64[1] + *v37);
      v41 = v37[1] - *v37;
      *(_DWORD *)(v3 + 2120) += v41;
      v42 = v40;
      v43 = (const char *)v40;
      v44 = (unsigned __int64)v40 + v41;
      if ( (unsigned __int64)v40 < v44 )
      {
        do
        {
          _mm_prefetch(v43, 0);
          v43 += 64;
        }
        while ( (unsigned __int64)v43 < v44 );
      }
      v45 = v39;
      v46 = v41 >> 7;
      if ( v41 >> 7 )
      {
        do
        {
          v47 = 8LL;
          do
          {
            v48 = v42[1] ^ __ROL8__(*v42 ^ v45, v38);
            v42 += 2;
            v45 = __ROL8__(v48, v38);
            --v47;
          }
          while ( v47 );
          v49 = (__ROL8__(v39 ^ ((char *)v42 - (char *)v40), 17) ^ v39 ^ ((char *)v42 - (char *)v40))
              * (unsigned __int128)0x7010008004002001uLL;
          BYTE8(v49) ^= v49 ^ (unsigned __int8)v38;
          LOBYTE(v38) = 1;
          v50 = BYTE8(v49) & 0x3F;
          if ( v50 )
            LOBYTE(v38) = v50;
          --v46;
        }
        while ( v46 );
        v2 = a1;
      }
      v51 = v41 & 0x7F;
      if ( v51 >= 8 )
      {
        v52 = (unsigned __int64)v51 >> 3;
        do
        {
          v45 = __ROL8__(*v42++ ^ v45, v38);
          v51 -= 8;
          --v52;
        }
        while ( v52 );
      }
      for ( ; v51; --v51 )
      {
        v53 = *(unsigned __int8 *)v42;
        v42 = (_QWORD *)((char *)v42 + 1);
        v45 = __ROL8__(v53 ^ v45, v38);
      }
      for ( k = v45; ; LODWORD(v45) = k ^ v45 )
      {
        k >>= 31;
        if ( !k )
          break;
      }
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      *(_DWORD *)v2[1].m128i_i64[1] ^= (v45 ^ *(_DWORD *)v2[1].m128i_i64[1]) & 0x7FFFFFFF;
      *(_DWORD *)v2[1].m128i_i64[1] &= ~0x80000000;
      v4 = v2[2].m128i_i32[0]-- == 1;
      v2[1] = _mm_add_epi64(si128, _mm_loadu_si128(v2 + 1));
    }
    while ( !v4 );
  }
  v1 = v56;
LABEL_53:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2->m128i_i64[0] + 32), 0xFFFFFFFF) == 1 )
    KeSignalGate((volatile signed __int32 *)(v2->m128i_i64[0] + 8), 1LL);
  if ( v1 )
    ExFreePool(v1);
}
