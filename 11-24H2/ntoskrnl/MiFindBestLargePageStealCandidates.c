/*
 * XREFs of MiFindBestLargePageStealCandidates @ 0x140443E10
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiCollapseRunTopDown @ 0x14030F6D0 (MiCollapseRunTopDown.c)
 *     MiFindNextLowerLargePageCandidate @ 0x14044437C (MiFindNextLowerLargePageCandidate.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiFindBestLargePageStealCandidates(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        int *a7)
{
  __int64 v7; // r14
  unsigned __int64 v10; // r10
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  _QWORD *v15; // rdi
  unsigned int v16; // esi
  unsigned __int64 v17; // r8
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned int *v23; // r10
  unsigned __int64 result; // rax
  unsigned int *v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  __int64 v31; // r10
  unsigned __int64 v32; // rcx
  __int64 i; // r9
  int v34; // ebx
  unsigned __int64 v35; // rdx
  int v36; // ebx
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 *v40; // r8
  __int64 v41; // r10
  _DWORD *v42; // r9
  unsigned __int64 v43; // rax
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  __int64 v46; // [rsp+20h] [rbp-D1h]
  int v47; // [rsp+28h] [rbp-C9h]
  unsigned __int64 v48; // [rsp+30h] [rbp-C1h]
  __int64 v49; // [rsp+38h] [rbp-B9h]
  _DWORD v50[2]; // [rsp+40h] [rbp-B1h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-A9h]
  unsigned __int64 v52; // [rsp+50h] [rbp-A1h]
  unsigned int *v53; // [rsp+58h] [rbp-99h]
  unsigned __int64 v54; // [rsp+60h] [rbp-91h]
  unsigned __int64 v55; // [rsp+68h] [rbp-89h]
  unsigned __int64 v56; // [rsp+70h] [rbp-81h]
  _QWORD v57[2]; // [rsp+78h] [rbp-79h]
  __m128i si128; // [rsp+88h] [rbp-69h]
  unsigned __int64 v59; // [rsp+A0h] [rbp-51h] BYREF
  unsigned __int64 v60; // [rsp+A8h] [rbp-49h]
  unsigned __int64 v61; // [rsp+B0h] [rbp-41h]
  unsigned __int64 v62; // [rsp+B8h] [rbp-39h]
  unsigned __int64 v63; // [rsp+C0h] [rbp-31h]
  unsigned __int64 v64; // [rsp+C8h] [rbp-29h]
  unsigned __int64 v65; // [rsp+D0h] [rbp-21h]
  _QWORD v66[10]; // [rsp+E0h] [rbp-11h] BYREF
  int v69; // [rsp+150h] [rbp+5Fh]
  unsigned __int64 v70; // [rsp+160h] [rbp+6Fh]
  int v71; // [rsp+170h] [rbp+7Fh]

  v7 = a3;
  memset_0(&v59, 0, 0x40uLL);
  v10 = MiPageSizes[v7];
  v11 = 0;
  v12 = MiLargePageShifts[v7];
  v13 = 0;
  v47 = 0;
  v14 = 0;
  v52 = 0LL;
  v15 = a7 + 6;
  v16 = *a7;
  v71 = v12;
  v17 = v10 >> 2;
  v69 = 0;
  if ( (_DWORD)v7 != 2 )
    v17 = v10 >> 4;
  v51 = v10;
  v46 = -1LL;
  v54 = 3 * (v10 >> 2);
  v56 = v17;
  v55 = v10 - (v10 >> 4);
  if ( v10 <= 0x200 && *(_BYTE *)(a1 + 16102) )
    v49 = a1 + 16328;
  else
    v49 = 0LL;
  v18 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  if ( (_DWORD)v7 )
  {
    v19 = 0LL;
    v20 = 0LL;
    do
    {
      v50[v19] = MiLargePageShifts[v19] - v71;
      if ( (_DWORD)v7 == 2 )
      {
        v45 = (unsigned __int64)MiPageSizes[v20] >> 3;
        v57[v20] = v45;
        if ( !v18 )
          v57[v20] = v45 >> 1;
      }
      else
      {
        v57[v20] = v10;
      }
      ++v18;
      ++v19;
      ++v20;
    }
    while ( v18 < (unsigned int)v7 );
    v11 = 0;
  }
  if ( a4 < 0x100000 && a5 > 0x100000 && *(_QWORD *)(a1 + 18504) > 0x100000uLL )
    a4 = 0x100000LL;
  v21 = *((_QWORD *)a7 + 2) - 1LL;
  v63 = v10;
  v22 = v10 + v21;
  v65 = v10;
  v64 = v10;
  v23 = a2;
  if ( a5 < v22 )
    v22 = a5;
  v61 = a4;
  v62 = v22;
  result = *a2;
  v25 = &a2[4 * result + 4];
  v53 = v25;
  while ( 1 )
  {
    do
    {
      if ( (_DWORD)result )
      {
        v48 = (unsigned int)(result - 1);
        result = 2 * v48;
        v59 = *(_QWORD *)&v23[4 * v48 + 4];
        v60 = *(_QWORD *)&v23[4 * v48 + 6] + v59;
        if ( v61 < v60 )
          goto LABEL_17;
      }
LABEL_61:
      v36 = 1;
      goto LABEL_62;
LABEL_17:
      if ( a6 < 0 )
        break;
      result = v48;
    }
    while ( v25[2 * v48] != a6 );
    if ( (unsigned int)MiCollapseRunTopDown((__int64)&v59) )
      break;
LABEL_47:
    v11 = v69;
LABEL_48:
    result = v48;
    v25 = v53;
    v23 = a2;
  }
  v26 = v60;
  v27 = v59 >> v71;
  v28 = v60 >> v71;
  v70 = v59 >> v71;
  if ( (_DWORD)v7 )
  {
    v40 = v66;
    v41 = v7;
    v42 = v50;
    do
    {
      v43 = v27 >> *v42++;
      *v40++ = v43;
      --v41;
    }
    while ( v41 );
  }
  v29 = v26 - v51;
  v30 = v28 - 1;
  v31 = v46;
  *((_QWORD *)a7 + 2) = v29;
  do
  {
    v32 = v29 >> 18;
    if ( v49 )
    {
      if ( v32 != v31 )
      {
        v46 = v29 >> 18;
        if ( _bittest64(*(const signed __int64 **)(v49 + 8), v32) )
        {
          v39 = v29 & 0xFFFFFFFFFFFC0000uLL;
          *((_QWORD *)a7 + 2) = v39;
          result = MiFindNextLowerLargePageCandidate(a1, v39);
          v31 = v46;
          v30 = result >> v71;
          *((_QWORD *)a7 + 2) = result;
LABEL_32:
          v11 = v69;
          goto LABEL_33;
        }
      }
    }
    for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
    {
      v34 = v50[i];
      v35 = v30 >> v34;
      if ( si128.m128i_i64[i] != v30 >> v34 )
      {
        v37 = v57[i];
        si128.m128i_i64[i] = v35;
        while ( 1 )
        {
          v38 = (_DWORD)i
              ? *(_WORD *)(*(_QWORD *)(a1 + 0x4000) + 2 * v35) & 0x3FF
              : *(_DWORD *)(*(_QWORD *)(a1 + 16440) + 4 * v35) & 0x7FFFFu;
          if ( v38 >= v37 )
            break;
          v30 = (v35 << v34) - 1;
          result = v30 << v71;
          *((_QWORD *)a7 + 2) = v30 << v71;
          if ( !v35 )
          {
            v11 = v69;
            goto LABEL_61;
          }
          if ( --v35 < v66[i] )
            goto LABEL_47;
        }
      }
    }
    if ( (_DWORD)v7 == 2 )
    {
      result = ((unsigned __int64)*(unsigned __int16 *)(qword_140E3CD38 + 2 * v30) >> 5) & 0x1F;
    }
    else if ( (_DWORD)v7 == 1 )
    {
      result = *(_WORD *)(*(_QWORD *)(a1 + 0x4000) + 2 * v30) & 0x3FF;
    }
    else
    {
      result = *(_DWORD *)(*(_QWORD *)(a1 + 16440) + 4 * v30) & 0x7FFFF;
    }
    if ( result >= v54 )
    {
      if ( result >= v55 )
      {
        v15[v69] = v15[v47];
        v15[v47++] = v30;
      }
      else
      {
        v15[v69] = v30;
      }
      result = v16 - v14;
      if ( v69 == (_DWORD)result )
        --v14;
      else
        ++v13;
      v11 = v69 + 1;
      v69 = v11;
      if ( v11 == v16 )
        goto LABEL_37;
      v27 = v70;
      v31 = v46;
    }
    else
    {
      v27 = v70;
      v31 = v46;
      if ( result < v56 )
        goto LABEL_32;
      v11 = v69;
      if ( v13 < v16 )
      {
        ++v14;
        result = v16 - v14;
        ++v13;
        v15[result] = v30;
      }
    }
LABEL_33:
    if ( !v30 )
      goto LABEL_61;
    --v30;
    v29 = *((_QWORD *)a7 + 2) - v51;
    result = v52 + 1;
    *((_QWORD *)a7 + 2) = v29;
    v52 = result;
    if ( v30 < v27 )
      goto LABEL_48;
  }
  while ( result < 0x20000 );
  ++dword_140EF51C0[v7];
LABEL_37:
  v36 = 0;
LABEL_62:
  if ( v14 )
  {
    v44 = v16 - v14;
    if ( v11 != (_DWORD)v44 )
      result = (unsigned __int64)memmove(&v15[v11], &v15[v44], 8LL * v14);
  }
  if ( v13 )
  {
    result = v13;
    do
    {
      *v15++ <<= v71;
      --result;
    }
    while ( result );
  }
  if ( v36 )
    *((_QWORD *)a7 + 2) = -1LL;
  a7[1] = v13;
  return result;
}
