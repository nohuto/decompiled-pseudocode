/*
 * XREFs of inflate_fast_chunk_ @ 0x1405FF1BC
 * Callers:
 *     inflate @ 0x1405F15F0 (inflate.c)
 * Callees:
 *     chunkcopy_core @ 0x1405F144C (chunkcopy_core.c)
 *     chunkcopy_lapped_relaxed @ 0x1405FEFFC (chunkcopy_lapped_relaxed.c)
 *     chunkunroll_relaxed @ 0x1405FF17C (chunkunroll_relaxed.c)
 */

__int64 __fastcall inflate_fast_chunk_(__int64 a1, int a2)
{
  __int64 v2; // r13
  _BYTE *v4; // r9
  __int64 v5; // rdi
  char *v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  _BYTE *v9; // r12
  char *v10; // r15
  unsigned int v11; // ecx
  _BYTE *v12; // r13
  __int64 v13; // r8
  unsigned __int64 v14; // rbp
  unsigned int v15; // r11d
  __int64 v16; // rbx
  int v17; // r10d
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  char *v20; // rdx
  int v21; // ecx
  char v22; // cl
  unsigned int v23; // ebx
  int v24; // ecx
  int v25; // eax
  char *i; // r8
  int v27; // ecx
  char v28; // dl
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // r10d
  unsigned int v32; // r10d
  _OWORD *v33; // rdx
  unsigned int v34; // r10d
  _OWORD *v35; // rax
  unsigned int v36; // r8d
  char *v37; // rcx
  char v38; // al
  unsigned int v39; // edx
  _OWORD *v40; // rax
  const char *v41; // rax
  __int64 v42; // rax
  char *v43; // r14
  int v44; // r11d
  __int64 result; // rax
  unsigned int v46; // [rsp+20h] [rbp-78h]
  unsigned int v47; // [rsp+24h] [rbp-74h]
  _OWORD *v48; // [rsp+28h] [rbp-70h]
  __int64 v49; // [rsp+30h] [rbp-68h]
  __int64 v50; // [rsp+38h] [rbp-60h]
  __int64 v51; // [rsp+40h] [rbp-58h]
  int v52; // [rsp+48h] [rbp-50h]
  unsigned int v53; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v54; // [rsp+A8h] [rbp+10h]
  int v55; // [rsp+B0h] [rbp+18h]
  unsigned int v56; // [rsp+B8h] [rbp+20h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v4 = *(_BYTE **)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(char **)a1;
  v7 = (unsigned int)(*(_DWORD *)(a1 + 8) - 14);
  v54 = *(_DWORD *)(v5 + 60);
  v8 = *(_DWORD *)(v5 + 52);
  v9 = &v4[(unsigned int)(v2 - 259)];
  v10 = &v6[v7];
  v52 = (_DWORD)v4 - (a2 - v2);
  v11 = *(_DWORD *)(v5 + 56);
  v12 = &v4[v2];
  v46 = v11;
  v47 = v8;
  if ( !v54 && v11 >= v8 )
    v54 = *(_DWORD *)(v5 + 52);
  v13 = *(_QWORD *)(v5 + 96);
  v14 = *(unsigned int *)(v5 + 72);
  v15 = *(_DWORD *)(v5 + 76);
  v16 = (unsigned int)((1 << *(_DWORD *)(v5 + 112)) - 1);
  v48 = *(_OWORD **)(v5 + 64);
  v17 = (1 << *(_DWORD *)(v5 + 116)) - 1;
  v18 = *(_QWORD *)(v5 + 104);
  v55 = v17;
  v49 = v13;
  v51 = v18;
  v50 = v16;
LABEL_5:
  v14 |= *(_QWORD *)v6 << v15;
  v19 = (unsigned __int64)v15 >> 3;
  v15 |= 0x38u;
  v6 += 7 - v19;
  v20 = (char *)(v13 + 4 * (v14 & v16));
  if ( !*v20 )
  {
    *v4++ = v20[2];
    v15 -= (unsigned __int8)v20[1];
    v14 >>= v20[1];
    v20 = (char *)(v13 + 4 * (v14 & v16));
    if ( !*v20 )
    {
      *v4++ = v20[2];
      v15 -= (unsigned __int8)v20[1];
      v14 >>= v20[1];
      v20 = (char *)(v13 + 4 * (v14 & v16));
    }
  }
  while ( 1 )
  {
    v21 = (unsigned __int8)v20[1];
    v14 >>= v21;
    v15 -= v21;
    v22 = *v20;
    if ( !*v20 )
    {
      *v4++ = v20[2];
LABEL_69:
      if ( v6 >= v10 || v4 >= v9 )
        goto LABEL_78;
      goto LABEL_5;
    }
    if ( (v22 & 0x10) != 0 )
      break;
    if ( (v22 & 0x40) != 0 )
    {
      if ( (v22 & 0x20) == 0 )
      {
        v41 = "invalid literal/length code";
        goto LABEL_77;
      }
      *(_DWORD *)(v5 + 8) = 16191;
      goto LABEL_78;
    }
    v20 = (char *)(v13 + 4 * (*((unsigned __int16 *)v20 + 1) + (unsigned __int64)((unsigned int)v14 & ((1 << v22) - 1))));
  }
  v23 = *((unsigned __int16 *)v20 + 1);
  v24 = v22 & 0xF;
  if ( v24 )
  {
    v25 = v14 & ((1 << v24) - 1);
    v14 >>= v24;
    v23 += v25;
    v15 -= v24;
  }
  for ( i = (char *)(v51 + 4LL * ((unsigned int)v14 & v17));
        ;
        i = (char *)(v51 + 4 * (*((unsigned __int16 *)i + 1) + (unsigned __int64)((unsigned int)v14 & ((1 << v28) - 1)))) )
  {
    v27 = (unsigned __int8)i[1];
    v28 = *i;
    v15 -= v27;
    v14 >>= v27;
    if ( (*i & 0x10) != 0 )
      break;
    if ( (v28 & 0x40) != 0 )
    {
      v41 = "invalid distance code";
      goto LABEL_77;
    }
  }
  v29 = v28 & 0xF;
  if ( v15 < v29 )
  {
    v14 |= *(_QWORD *)v6 << v15;
    v6 += 7 - ((unsigned __int64)v15 >> 3);
    v15 |= 0x38u;
  }
  v15 -= v29;
  v30 = v14 & ((1 << v29) - 1);
  v14 >>= v29;
  v31 = v30 + *((unsigned __int16 *)i + 1);
  v53 = v31;
  if ( v31 <= (int)v4 - v52 )
  {
    v36 = v23;
    v39 = v31;
LABEL_67:
    v40 = chunkcopy_lapped_relaxed(v4, v39, v36);
LABEL_64:
    v4 = v40;
LABEL_65:
    v13 = v49;
    v17 = v55;
    v16 = v50;
    goto LABEL_69;
  }
  v32 = v31 - ((_DWORD)v4 - v52);
  if ( v32 <= v46 || !*(_DWORD *)(v5 + 9056) )
  {
    if ( v54 < v32 )
    {
      v34 = v32 - v54;
      v33 = (_OWORD *)((char *)v48 + v47 - v34);
      if ( v34 >= v23 )
        goto LABEL_54;
      v23 -= v34;
      if ( v12 - v4 >= 16 )
      {
        v4 = chunkcopy_core(v4, v33, v34);
      }
      else
      {
        if ( (v34 & 8) != 0 )
        {
          *(_QWORD *)v4 = *(_QWORD *)v33;
          v4 += 8;
          v33 = (_OWORD *)((char *)v33 + 8);
        }
        if ( (v34 & 4) != 0 )
        {
          *(_DWORD *)v4 = *(_DWORD *)v33;
          v4 += 4;
          v33 = (_OWORD *)((char *)v33 + 4);
        }
        if ( (v34 & 2) != 0 )
        {
          *(_WORD *)v4 = *(_WORD *)v33;
          v4 += 2;
          v33 = (_OWORD *)((char *)v33 + 2);
        }
        if ( (v34 & 1) != 0 )
          *v4++ = *(_BYTE *)v33;
      }
      v33 = v48;
      v32 = v54;
    }
    else
    {
      v33 = (_OWORD *)((char *)v48 + v54 - v32);
    }
    if ( v32 < v23 )
    {
      if ( v12 - v4 >= 16 )
      {
        v4 = chunkcopy_core(v4, v33, v32);
      }
      else
      {
        if ( (v32 & 8) != 0 )
        {
          *(_QWORD *)v4 = *(_QWORD *)v33;
          v4 += 8;
          v33 = (_OWORD *)((char *)v33 + 8);
        }
        if ( (v32 & 4) != 0 )
        {
          *(_DWORD *)v4 = *(_DWORD *)v33;
          v4 += 4;
          v33 = (_OWORD *)((char *)v33 + 4);
        }
        if ( (v32 & 2) != 0 )
        {
          *(_WORD *)v4 = *(_WORD *)v33;
          v4 += 2;
          v33 = (_OWORD *)((char *)v33 + 2);
        }
        if ( (v32 & 1) != 0 )
          *v4++ = *(_BYTE *)v33;
      }
      v56 = v23 - v32;
      v35 = chunkunroll_relaxed(v4, &v53, &v56);
      v36 = v56;
      v4 = v35;
      if ( v12 - (_BYTE *)v35 < 48 )
      {
        if ( v56 )
        {
          v37 = (char *)v35 - v53;
          do
          {
            v38 = *v37++;
            *v4++ = v38;
            --v36;
          }
          while ( v36 );
        }
        goto LABEL_65;
      }
      v39 = v53;
      goto LABEL_67;
    }
LABEL_54:
    if ( v12 - v4 < 16 )
    {
      if ( (v23 & 8) != 0 )
      {
        *(_QWORD *)v4 = *(_QWORD *)v33;
        v4 += 8;
        v33 = (_OWORD *)((char *)v33 + 8);
      }
      if ( (v23 & 4) != 0 )
      {
        *(_DWORD *)v4 = *(_DWORD *)v33;
        v4 += 4;
        v33 = (_OWORD *)((char *)v33 + 4);
      }
      if ( (v23 & 2) != 0 )
      {
        *(_WORD *)v4 = *(_WORD *)v33;
        v4 += 2;
        v33 = (_OWORD *)((char *)v33 + 2);
      }
      if ( (v23 & 1) != 0 )
        *v4++ = *(_BYTE *)v33;
      goto LABEL_65;
    }
    v40 = chunkcopy_core(v4, v33, v23);
    goto LABEL_64;
  }
  v41 = "invalid distance too far back";
LABEL_77:
  *(_QWORD *)(a1 + 32) = v41;
  *(_DWORD *)(v5 + 8) = 16209;
LABEL_78:
  *(_QWORD *)(a1 + 16) = v4;
  v42 = v15 >> 3;
  v43 = &v6[-v42];
  v44 = v15 - 8 * v42;
  *(_QWORD *)a1 = v43;
  *(_DWORD *)(a1 + 24) = (_DWORD)v9 - (_DWORD)v4 + 259;
  *(_DWORD *)(a1 + 8) = (_DWORD)v10 - (_DWORD)v43 + 14;
  *(_DWORD *)(v5 + 76) = v44;
  result = (unsigned int)v14 & ((1 << v44) - 1);
  *(_DWORD *)(v5 + 72) = result;
  return result;
}
