/*
 * XREFs of ?IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z @ 0x1800AA4C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800ABC2C (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioMediaType::IsEqual(struct IAudioMediaType *this, struct IAudioMediaType *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __m128i *lpVtbl; // rcx
  __int64 v8; // r10
  __m128i v9; // xmm1
  __int16 v10; // r12
  __int64 v11; // r15
  __int16 v12; // r9
  int v13; // r8d
  unsigned __int64 v14; // r11
  __int16 v15; // si
  __int16 v16; // dx
  __int16 v17; // ax
  __int16 v18; // r8
  unsigned int v19; // esi
  int v20; // esi
  int v21; // ecx
  int v22; // edx
  struct IAudioMediaTypeVtbl *v23; // r9
  __m128i v25; // [rsp+28h] [rbp-38h]
  __int128 v26; // [rsp+40h] [rbp-20h]

  v3 = 0;
  if ( a2 && a3 )
  {
    *a3 = 0;
    if ( this == a2 )
    {
      *a3 = 14;
      return v3;
    }
    v6 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
    lpVtbl = (__m128i *)this[2].lpVtbl;
    v8 = v6;
    if ( !v6 )
    {
      if ( lpVtbl )
        return 1;
      else
        *a3 |= 0xEu;
      return v3;
    }
    if ( lpVtbl )
    {
      v9 = *lpVtbl;
      v10 = *(_WORD *)(v6 + 16);
      v11 = lpVtbl->m128i_i64[0];
      v25 = *lpVtbl;
      v26 = *(_OWORD *)v6;
      if ( HIWORD(lpVtbl->m128i_u32[0]) )
      {
        v12 = WORD1(*(_OWORD *)v6);
      }
      else
      {
        v12 = 0;
        WORD1(v26) = 0;
        DWORD2(v26) = 0;
        WORD6(v26) = 0;
      }
      if ( v9.m128i_i32[1] )
      {
        v13 = HIDWORD(*(_QWORD *)v6);
      }
      else
      {
        v13 = 0;
        *(_QWORD *)((char *)&v26 + 4) = 0LL;
      }
      v14 = _mm_srli_si128(v9, 8).m128i_u64[0];
      if ( HIWORD(v14) )
      {
        v15 = HIWORD(*(_OWORD *)v6);
      }
      else
      {
        v15 = 0;
        HIDWORD(v26) = 0;
      }
      v16 = _mm_cvtsi128_si32(v9);
      if ( v16 )
      {
        v17 = *(_OWORD *)v6;
      }
      else
      {
        v17 = 0;
        LOWORD(v26) = 0;
      }
      if ( !v12 )
      {
        v25.m128i_i16[1] = 0;
        v11 = v25.m128i_i64[0];
        v25.m128i_i32[2] = 0;
        v25.m128i_i16[6] = 0;
        v14 = v25.m128i_u64[1];
      }
      if ( !v13 )
      {
        *(__int64 *)((char *)v25.m128i_i64 + 4) = 0LL;
        v14 = v25.m128i_u64[1];
        v11 = v25.m128i_u32[0];
      }
      if ( !v15 )
        v14 = v25.m128i_u32[2];
      if ( !v17 )
      {
        v25.m128i_i16[0] = 0;
        v16 = 0;
        v11 = v25.m128i_i64[0];
      }
      if ( v17 == 1 )
        v10 = 0;
      v18 = 0;
      if ( v16 != 1 )
        v18 = lpVtbl[1].m128i_i16[0];
      if ( v17 != v16
        || lpVtbl->m128i_i16[0] == -2
        && (*(_QWORD *)(v8 + 24) != lpVtbl[1].m128i_i64[1] || *(_QWORD *)(v8 + 32) != lpVtbl[2].m128i_i64[0]) )
      {
        return 1;
      }
      if ( v10 != v18 )
        return 1;
      v19 = *a3 | 2;
      *a3 = v19;
      if ( __PAIR128__(v14, v11) != v26 || v18 != v10 )
        return 1;
      v20 = v19 | 4;
      v21 = 18;
      *a3 = v20;
      v22 = 18;
      v23 = this[2].lpVtbl;
      if ( LOWORD(v23->QueryInterface) != 1 )
        v22 = LOWORD(v23->Release) + 18;
      if ( *(_WORD *)v8 != 1 )
        v21 = *(unsigned __int16 *)(v8 + 16) + 18;
      if ( v22 != v21 )
        return ((unsigned __int8)~*(_BYTE *)a3 >> 3) & 1;
      if ( memcmp_0((char *)&v23->Release + 2, (const void *)(v8 + 18), *(unsigned __int16 *)(v8 + 16)) )
        return 1;
      *a3 = v20 | 8;
    }
    return ((unsigned __int8)~*(_BYTE *)a3 >> 3) & 1;
  }
  return 2147942487LL;
}
