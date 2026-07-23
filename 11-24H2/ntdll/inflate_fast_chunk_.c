/*
 * XREFs of inflate_fast_chunk_ @ 0x1801531B4
 * Callers:
 *     inflate @ 0x18014FA34 (inflate.c)
 * Callees:
 *     chunkcopy_core @ 0x18014F89C (chunkcopy_core.c)
 *     chunkset_core_0 @ 0x180153024 (chunkset_core_0.c)
 *     chunkunroll_relaxed @ 0x180153174 (chunkunroll_relaxed.c)
 */

__int64 __fastcall inflate_fast_chunk_(__int64 a1, int a2)
{
  __int64 v2; // r13
  __m128i *v4; // r9
  __int64 v5; // rdi
  _QWORD *v6; // r14
  __m128i *v7; // r12
  unsigned __int64 v8; // r15
  __int8 *v9; // r13
  __int64 v10; // r8
  unsigned __int64 v11; // rbp
  unsigned int v12; // ebx
  __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rcx
  char *v16; // rdx
  int v17; // ecx
  char v18; // cl
  unsigned int v19; // r11d
  int v20; // ecx
  int v21; // eax
  char *i; // r8
  int v23; // ecx
  char v24; // dl
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // r10d
  unsigned int v28; // r10d
  __int8 *v29; // rdx
  unsigned int v30; // r10d
  __m128i *v31; // rax
  int v32; // r8d
  __int8 *v33; // rcx
  __int8 v34; // al
  unsigned int v35; // edx
  __m128i *v36; // rax
  const char *v37; // rax
  __int64 v38; // rax
  char *v39; // r14
  int v40; // ebx
  __int64 result; // rax
  unsigned int v42; // [rsp+20h] [rbp-78h]
  int v43; // [rsp+24h] [rbp-74h]
  __int64 v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+30h] [rbp-68h]
  __int8 *v46; // [rsp+38h] [rbp-60h]
  __int64 v47; // [rsp+40h] [rbp-58h]
  int v48; // [rsp+48h] [rbp-50h]
  unsigned int v49; // [rsp+A0h] [rbp+8h]
  int v50; // [rsp+A8h] [rbp+10h]
  unsigned int v51; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v52; // [rsp+B8h] [rbp+20h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v4 = *(__m128i **)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD **)a1;
  v49 = *(_DWORD *)(v5 + 60);
  v7 = (__m128i *)((char *)v4 + (unsigned int)(v2 - 259));
  v8 = *(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 8) - 14);
  v48 = (_DWORD)v4 - (a2 - v2);
  v9 = &v4->m128i_i8[v2];
  v42 = *(_DWORD *)(v5 + 56);
  v43 = *(_DWORD *)(v5 + 52);
  if ( !v49 && *(_DWORD *)(v5 + 56) >= *(_DWORD *)(v5 + 52) )
    v49 = *(_DWORD *)(v5 + 52);
  v10 = *(_QWORD *)(v5 + 96);
  v11 = *(unsigned int *)(v5 + 72);
  v12 = *(_DWORD *)(v5 + 76);
  v13 = (unsigned int)((1 << *(_DWORD *)(v5 + 112)) - 1);
  v46 = *(__int8 **)(v5 + 64);
  v14 = (1 << *(_DWORD *)(v5 + 116)) - 1;
  v50 = v14;
  v44 = v10;
  v47 = *(_QWORD *)(v5 + 104);
  v45 = v13;
LABEL_5:
  v11 |= *v6 << v12;
  v15 = (unsigned __int64)v12 >> 3;
  v12 |= 0x38u;
  v6 = (_QWORD *)((char *)v6 + 7 - v15);
  v16 = (char *)(v10 + 4 * (v11 & v13));
  if ( !*v16 )
  {
    v4->m128i_i8[0] = v16[2];
    v4 = (__m128i *)((char *)v4 + 1);
    v12 -= (unsigned __int8)v16[1];
    v11 >>= v16[1];
    v16 = (char *)(v10 + 4 * (v11 & v13));
    if ( !*v16 )
    {
      v4->m128i_i8[0] = v16[2];
      v4 = (__m128i *)((char *)v4 + 1);
      v12 -= (unsigned __int8)v16[1];
      v11 >>= v16[1];
      v16 = (char *)(v10 + 4 * (v11 & v13));
    }
  }
  while ( 1 )
  {
    v17 = (unsigned __int8)v16[1];
    v11 >>= v17;
    v12 -= v17;
    v18 = *v16;
    if ( !*v16 )
    {
      v4->m128i_i8[0] = v16[2];
      v4 = (__m128i *)((char *)v4 + 1);
LABEL_76:
      if ( (unsigned __int64)v6 >= v8 || v4 >= v7 )
        goto LABEL_85;
      goto LABEL_5;
    }
    if ( (v18 & 0x10) != 0 )
      break;
    if ( (v18 & 0x40) != 0 )
    {
      if ( (v18 & 0x20) == 0 )
      {
        v37 = "invalid literal/length code";
        goto LABEL_84;
      }
      *(_DWORD *)(v5 + 8) = 16191;
      goto LABEL_85;
    }
    v16 = (char *)(v10 + 4 * (*((unsigned __int16 *)v16 + 1) + (unsigned __int64)((unsigned int)v11 & ((1 << v18) - 1))));
  }
  v19 = *((unsigned __int16 *)v16 + 1);
  v20 = v18 & 0xF;
  if ( v20 )
  {
    v21 = v11 & ((1 << v20) - 1);
    v11 >>= v20;
    v19 += v21;
    v12 -= v20;
  }
  for ( i = (char *)(v47 + 4LL * ((unsigned int)v11 & v14));
        ;
        i = (char *)(v47 + 4 * (*((unsigned __int16 *)i + 1) + (unsigned __int64)((unsigned int)v11 & ((1 << v24) - 1)))) )
  {
    v23 = (unsigned __int8)i[1];
    v24 = *i;
    v12 -= v23;
    v11 >>= v23;
    if ( (*i & 0x10) != 0 )
      break;
    if ( (v24 & 0x40) != 0 )
    {
      v37 = "invalid distance code";
      goto LABEL_84;
    }
  }
  v25 = v24 & 0xF;
  if ( v12 < v25 )
  {
    v11 |= *v6 << v12;
    v6 = (_QWORD *)((char *)v6 + 7 - ((unsigned __int64)v12 >> 3));
    v12 |= 0x38u;
  }
  v12 -= v25;
  v26 = v11 & ((1 << v25) - 1);
  v11 >>= v25;
  v27 = v26 + *((unsigned __int16 *)i + 1);
  v51 = v27;
  if ( v27 <= (int)v4 - v48 )
  {
    if ( v27 < v19 && v27 < 0x10 )
    {
      v32 = v19;
      v35 = v27;
      goto LABEL_73;
    }
    v29 = &v4->m128i_i8[-v27];
    goto LABEL_66;
  }
  v28 = v27 - ((_DWORD)v4 - v48);
  if ( v28 <= v42 || !*(_DWORD *)(v5 + 9056) )
  {
    if ( v49 < v28 )
    {
      v30 = v28 - v49;
      v29 = &v46[v43 - v30];
      if ( v30 >= v19 )
      {
LABEL_57:
        if ( v9 - (__int8 *)v4 < 16 )
        {
          if ( (v19 & 8) != 0 )
          {
            v4->m128i_i64[0] = *(_QWORD *)v29;
            v4 = (__m128i *)((char *)v4 + 8);
            v29 += 8;
          }
          if ( (v19 & 4) != 0 )
          {
            v4->m128i_i32[0] = *(_DWORD *)v29;
            v4 = (__m128i *)((char *)v4 + 4);
            v29 += 4;
          }
          if ( (v19 & 2) != 0 )
          {
            v4->m128i_i16[0] = *(_WORD *)v29;
            v4 = (__m128i *)((char *)v4 + 2);
            v29 += 2;
          }
          if ( (v19 & 1) != 0 )
          {
            v4->m128i_i8[0] = *v29;
            v4 = (__m128i *)((char *)v4 + 1);
          }
          goto LABEL_69;
        }
LABEL_66:
        v32 = v19;
        goto LABEL_67;
      }
      v19 -= v30;
      if ( v9 - (__int8 *)v4 >= 16 )
      {
        v4 = (__m128i *)chunkcopy_core(v4, v29, v30);
      }
      else
      {
        if ( (v30 & 8) != 0 )
        {
          v4->m128i_i64[0] = *(_QWORD *)v29;
          v4 = (__m128i *)((char *)v4 + 8);
          v29 += 8;
        }
        if ( (v30 & 4) != 0 )
        {
          v4->m128i_i32[0] = *(_DWORD *)v29;
          v4 = (__m128i *)((char *)v4 + 4);
          v29 += 4;
        }
        if ( (v30 & 2) != 0 )
        {
          v4->m128i_i16[0] = *(_WORD *)v29;
          v4 = (__m128i *)((char *)v4 + 2);
          v29 += 2;
        }
        if ( (v30 & 1) != 0 )
        {
          v4->m128i_i8[0] = *v29;
          v4 = (__m128i *)((char *)v4 + 1);
        }
      }
      v29 = v46;
      v28 = v49;
    }
    else
    {
      v29 = &v46[v49 - v28];
    }
    if ( v28 < v19 )
    {
      if ( v9 - (__int8 *)v4 >= 16 )
      {
        v4 = (__m128i *)chunkcopy_core(v4, v29, v28);
      }
      else
      {
        if ( (v28 & 8) != 0 )
        {
          v4->m128i_i64[0] = *(_QWORD *)v29;
          v4 = (__m128i *)((char *)v4 + 8);
          v29 += 8;
        }
        if ( (v28 & 4) != 0 )
        {
          v4->m128i_i32[0] = *(_DWORD *)v29;
          v4 = (__m128i *)((char *)v4 + 4);
          v29 += 4;
        }
        if ( (v28 & 2) != 0 )
        {
          v4->m128i_i16[0] = *(_WORD *)v29;
          v4 = (__m128i *)((char *)v4 + 2);
          v29 += 2;
        }
        if ( (v28 & 1) != 0 )
        {
          v4->m128i_i8[0] = *v29;
          v4 = (__m128i *)((char *)v4 + 1);
        }
      }
      v52 = v19 - v28;
      v31 = (__m128i *)chunkunroll_relaxed(v4, &v51, &v52);
      v32 = v52;
      v4 = v31;
      if ( v9 - (__int8 *)v31 < 48 )
      {
        if ( v52 )
        {
          v33 = &v31->m128i_i8[-v51];
          do
          {
            v34 = *v33++;
            v4->m128i_i8[0] = v34;
            v4 = (__m128i *)((char *)v4 + 1);
            --v32;
          }
          while ( v32 );
        }
        goto LABEL_69;
      }
      if ( v51 < v52 && v51 < 0x10 )
      {
        v35 = v51;
LABEL_73:
        v36 = chunkset_core_0(v4, v35, v32);
        goto LABEL_68;
      }
      v29 = &v31->m128i_i8[-v51];
LABEL_67:
      v36 = (__m128i *)chunkcopy_core(v4, v29, v32);
LABEL_68:
      v4 = v36;
LABEL_69:
      v10 = v44;
      v14 = v50;
      v13 = v45;
      goto LABEL_76;
    }
    goto LABEL_57;
  }
  v37 = "invalid distance too far back";
LABEL_84:
  *(_QWORD *)(a1 + 32) = v37;
  *(_DWORD *)(v5 + 8) = 16209;
LABEL_85:
  *(_QWORD *)(a1 + 16) = v4;
  v38 = v12 >> 3;
  v39 = (char *)v6 - v38;
  v40 = v12 - 8 * v38;
  *(_QWORD *)a1 = v39;
  *(_DWORD *)(a1 + 24) = (_DWORD)v7 - (_DWORD)v4 + 259;
  *(_DWORD *)(a1 + 8) = v8 - (_DWORD)v39 + 14;
  *(_DWORD *)(v5 + 76) = v40;
  result = (unsigned int)v11 & ((1 << v40) - 1);
  *(_DWORD *)(v5 + 72) = result;
  return result;
}
