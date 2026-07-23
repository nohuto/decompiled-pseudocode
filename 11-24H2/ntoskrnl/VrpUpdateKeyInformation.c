/*
 * XREFs of VrpUpdateKeyInformation @ 0x14092A470
 * Callers:
 *     VrpPostQueryKey @ 0x14092A060 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x14092A618 (VrpPostEnumerateKey.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VrpUpdateKeyInformation(
        int a1,
        int *a2,
        unsigned int a3,
        unsigned int *a4,
        __m128i *a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned int *v10; // r11
  unsigned int *v11; // rdi
  __m128i *v12; // r15
  int *v13; // r12
  int *v14; // r13
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rcx
  _WORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int16 v23; // r10
  __m128i v24; // xmm0
  unsigned __int16 v25; // ax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // xmm0_8
  _WORD *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdi
  _DWORD *v32; // [rsp+20h] [rbp-48h]
  _DWORD *v33; // [rsp+28h] [rbp-40h]
  __m128i v34; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  v33 = 0LL;
  v32 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v34 = 0LL;
  switch ( a1 )
  {
    case 0:
      v21 = 4LL;
      v15 = 16;
      v22 = 3LL;
LABEL_30:
      v13 = &a2[v21];
      v23 = 0;
      v14 = &a2[v22];
      v25 = _mm_cvtsi128_si32(*a5);
      v34 = *a5;
      v24 = v34;
      v34.m128i_i16[0] = 0;
      v26 = (unsigned __int64)v25 >> 1;
      v27 = _mm_srli_si128(v24, 8).m128i_u64[0];
      if ( v26 )
      {
        v28 = (_WORD *)(v27 - 2 + 2 * v26);
        do
        {
          if ( *v28 == 92 )
            break;
          v23 += 2;
          --v28;
          --v26;
        }
        while ( v26 );
        v34.m128i_i16[0] = v23;
      }
      v34.m128i_i16[1] = v23;
      v34.m128i_i64[1] = v27 + 2 * v26;
      v12 = &v34;
      if ( a1 == 1 )
      {
        v18 = *a4;
        if ( *a4 < v15 )
          return (unsigned int)-1073741789;
        v16 = v18 + v23;
        if ( v16 < v18 )
        {
          *a4 = -1;
          return (unsigned int)-2147483643;
        }
        goto LABEL_6;
      }
LABEL_5:
      v16 = (_DWORD)v13 + v12->m128i_u16[0] - (_DWORD)a2;
LABEL_6:
      *a4 = v16;
      if ( a3 >= v15 )
      {
        if ( a3 >= v16 )
        {
          if ( !v10 )
            goto LABEL_9;
          v29 = *v11;
          if ( !*v11 )
            goto LABEL_9;
          v30 = *v10;
          if ( v29 + (unsigned int)v30 >= (unsigned int)v30 && v29 + (unsigned int)v30 <= a3 )
          {
            v31 = (v12->m128i_u16[0] + 27) & 0xFFFFFFFC;
            memmove((char *)a2 + v31, (char *)a2 + v30, v29);
            memset_0((char *)a2 + v31 + (unsigned int)*v32, 0, a3 - *v32 - (unsigned int)v31);
            *v33 = v31;
LABEL_9:
            memmove(v13, (const void *)v12->m128i_i64[1], v12->m128i_u16[0]);
            *v14 = v12->m128i_u16[0];
            return v6;
          }
        }
        return (unsigned int)-2147483643;
      }
      return (unsigned int)-1073741789;
    case 1:
      v15 = 24;
      v10 = (unsigned int *)(a2 + 3);
      v11 = (unsigned int *)(a2 + 4);
      v33 = a2 + 3;
      v32 = a2 + 4;
      v21 = 6LL;
      v22 = 5LL;
      goto LABEL_30;
    case 3:
      v12 = a5;
      v13 = a2 + 1;
      v14 = a2;
      v15 = 4;
      goto LABEL_5;
  }
  if ( a1 != 4 )
  {
    if ( a1 != 8 )
      return (unsigned int)-1073741811;
    if ( a3 >= 4 )
    {
      *a2 = (a6 >> 1) & 1;
      return v6;
    }
    return (unsigned int)-1073741789;
  }
  v19 = (unsigned __int64)a5->m128i_u16[0] >> 1;
  if ( a3 < 0x28 )
    return (unsigned int)-1073741789;
  if ( v19 )
  {
    v20 = (_WORD *)(a5->m128i_i64[1] - 2 + 2 * v19);
    do
    {
      if ( *v20 == 92 )
        break;
      --v20;
      --v19;
    }
    while ( v19 );
  }
  a2[8] = a5->m128i_u16[0] - 2 * v19;
  return v6;
}
