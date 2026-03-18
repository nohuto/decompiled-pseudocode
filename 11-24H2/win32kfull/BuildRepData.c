/*
 * XREFs of BuildRepData @ 0x1401409A4
 * Callers:
 *     BuildShrinkAAInfo @ 0x14013F8E0 (BuildShrinkAAInfo.c)
 *     BuildExpandAAInfo @ 0x1401400A0 (BuildExpandAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildRepData(__int64 a1, int a2, int a3)
{
  _WORD *v3; // r12
  int v4; // r10d
  int v5; // r11d
  int v6; // r8d
  int v7; // esi
  int v8; // edi
  __int64 v9; // rax
  int v10; // edx
  int *v11; // r15
  int *v12; // rcx
  int v13; // ebx
  unsigned __int8 v14; // r14
  char v15; // r13
  int v16; // ecx
  int v17; // edx
  int v18; // r9d
  int v19; // ecx
  int v20; // ecx
  int v21; // edx
  int i; // eax
  __int64 result; // rax
  __int64 v24; // [rsp+0h] [rbp-68h]
  __m128i v25; // [rsp+10h] [rbp-58h]
  __int128 v26; // [rsp+20h] [rbp-48h]
  __int128 v27; // [rsp+20h] [rbp-48h]
  __int128 v28; // [rsp+30h] [rbp-38h]
  __int128 v29; // [rsp+40h] [rbp-28h]
  int *v30; // [rsp+50h] [rbp-18h]
  int v32; // [rsp+B8h] [rbp+50h] BYREF
  int v33; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int8 v34; // [rsp+C8h] [rbp+60h]

  v33 = a3;
  v32 = a2;
  v3 = *(_WORD **)(a1 + 40);
  v4 = 0;
  v24 = 0LL;
  v5 = a3;
  v6 = -1;
  v7 = _mm_cvtsi128_si32(*(__m128i *)a1);
  v26 = *(_OWORD *)(a1 + 16);
  v8 = a2;
  v9 = HIDWORD(*(_QWORD *)a1);
  v25 = *(__m128i *)a1;
  v29 = *(_OWORD *)(a1 + 48);
  v28 = *(_OWORD *)(a1 + 32);
  if ( v7 < (int)HIDWORD(*(_QWORD *)a1) )
  {
    v10 = v7;
    v11 = &v32;
    v12 = &v33;
  }
  else
  {
    if ( v7 <= (int)HIDWORD(*(_QWORD *)a1) )
      return 0LL;
    v10 = HIDWORD(*(_QWORD *)a1);
    v11 = &v33;
    LODWORD(v9) = v7;
    v12 = &v32;
  }
  v30 = v12;
  v13 = 0;
  v14 = 0;
  WORD1(v28) = 0;
  v15 = 0;
  v16 = 2 * v9 + v10;
  v17 = 2 * v10;
  v18 = 2;
  v34 = 0;
  if ( v5 >= SHIDWORD(v26) )
    goto LABEL_16;
  while ( 1 )
  {
    v16 -= v17;
    if ( v16 < 0 )
    {
      ++*v11;
      if ( v6 != -1 )
        *v3++ = v13;
      v5 = v33;
      v16 += 2 * v9;
      v8 = v32;
      v13 = 0;
      v15 = 0;
    }
    ++v15;
    if ( v8 < (int)v26 || v5 < SDWORD2(v26) || v8 >= SDWORD1(v26) || v5 >= SHIDWORD(v26) )
      break;
    ++v13;
    if ( v6 == -1 )
    {
      LODWORD(v24) = v5;
      v34 = v15 - 1;
      v6 = v8;
      BYTE2(v28) = v15 - 1;
    }
    v4 = v8;
    HIDWORD(v24) = v5;
LABEL_14:
    ++*v30;
    v5 = v33;
    if ( v33 >= SHIDWORD(v26) )
      goto LABEL_15;
    v8 = v32;
  }
  if ( v6 == -1 )
    goto LABEL_14;
LABEL_15:
  v14 = 0;
LABEL_16:
  if ( v6 == -1 )
    return 0LL;
  if ( v13 )
  {
    *v3++ = v13;
    v19 = v16 - v17;
    if ( v19 >= 0 )
    {
      do
      {
        ++v14;
        v19 -= v17;
      }
      while ( v19 >= 0 );
      BYTE3(v28) = v14;
    }
  }
  v20 = v6;
  if ( v7 < v25.m128i_i32[1] )
  {
    v21 = 2;
    goto LABEL_23;
  }
  v21 = v34;
  v18 = v14;
  if ( v34 )
  {
    do
    {
LABEL_23:
      if ( v20 <= (int)v26 )
        break;
      --v20;
      --v21;
    }
    while ( v21 );
  }
  for ( i = v4; v18; --v18 )
  {
    if ( i >= DWORD1(v26) - 1 )
      break;
    ++i;
  }
  BYTE1(v28) = i - v4;
  DWORD1(v27) = v4 + 1;
  v25.m128i_i32[2] = v6;
  *((_QWORD *)&v27 + 1) = v24 + 0x100000000LL;
  v25.m128i_i32[3] = v4 - v6 + 1;
  result = 1LL;
  *(__m128i *)a1 = v25;
  LODWORD(v27) = v6;
  *(_OWORD *)(a1 + 16) = v27;
  *(_QWORD *)&v29 = v3;
  DWORD2(v29) = 1;
  LOBYTE(v28) = v6 - v20;
  *(_OWORD *)(a1 + 32) = v28;
  *(_OWORD *)(a1 + 48) = v29;
  return result;
}
