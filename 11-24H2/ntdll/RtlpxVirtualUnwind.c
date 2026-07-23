/*
 * XREFs of RtlpxVirtualUnwind @ 0x180043630
 * Callers:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlVirtualUnwind2 @ 0x180042920 (RtlVirtualUnwind2.c)
 *     RtlpWalkFrameChain @ 0x180042B00 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x180045620 (RtlVirtualUnwind.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlpUnwindPrologue @ 0x180044040 (RtlpUnwindPrologue.c)
 *     RtlpVirtualPopShadowStack @ 0x1800458B0 (RtlpVirtualPopShadowStack.c)
 *     RtlLocateExtendedFeature @ 0x180045900 (RtlLocateExtendedFeature.c)
 *     RtlpSameFunction @ 0x1800E8AEC (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x1800EC2E4 (RtlpUnwindOpSlots.c)
 *     RtlpUnwindEpilogue @ 0x180112328 (RtlpUnwindEpilogue.c)
 */

__int64 __fastcall RtlpxVirtualUnwind(
        int a1,
        __int64 a2,
        char *a3,
        unsigned int *a4,
        __int64 a5,
        _BYTE *a6,
        _QWORD *a7,
        char ***a8,
        _QWORD *a9,
        __int64 a10,
        int a11)
{
  char *v11; // rbx
  __int64 v14; // r15
  unsigned int v15; // esi
  char *v16; // rdi
  char v17; // cl
  unsigned int v18; // r12d
  int v19; // r14d
  char **v20; // rcx
  __int64 result; // rax
  char *v22; // r8
  char v23; // cl
  char v24; // cl
  char *v25; // rdx
  __int64 v26; // rax
  int v27; // edx
  _BYTE *v28; // r9
  int v29; // ecx
  int v30; // eax
  unsigned int v31; // edx
  int v32; // eax
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rcx
  int v35; // ecx
  char v36; // dl
  __int64 v37; // r9
  char v38; // al
  char v39; // al
  __int64 v40; // r8
  char v41; // dl
  _QWORD **v42; // rdx
  _QWORD *v43; // rcx
  int v44; // edx
  unsigned __int16 v45; // r8
  __int16 v46; // cx
  unsigned int v47; // r11d
  int v48; // r8d
  unsigned int v49; // ecx
  unsigned int i; // r10d
  __int16 v51; // si
  _DWORD *v52; // rax
  _QWORD *ExtendedFeature; // rax
  _QWORD *v54; // r10
  __int64 v55; // rdx
  __int64 v56; // rax
  _QWORD *v57; // rdx
  char **v58; // rdi
  _QWORD *v59; // r10
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned int v63; // r8d
  unsigned __int64 v64; // r9
  int v65; // [rsp+40h] [rbp-68h]
  unsigned int v66; // [rsp+48h] [rbp-60h]
  int v67; // [rsp+50h] [rbp-58h]
  unsigned int v68; // [rsp+58h] [rbp-50h]
  __int64 v69; // [rsp+60h] [rbp-48h]
  __int64 v70; // [rsp+70h] [rbp-38h]
  unsigned int *v71; // [rsp+C8h] [rbp+20h] BYREF

  v71 = a4;
  v11 = a3;
  v14 = a5;
  v70 = a5;
  if ( !a4 )
  {
    v57 = (_QWORD *)(a5 + 152);
    v58 = *(char ***)(a5 + 152);
    if ( !*(_QWORD *)a10
      || (unsigned __int64)v58 >= **(_QWORD **)a10 && (unsigned __int64)v58 <= **(_QWORD **)(a10 + 8) - 8LL )
    {
      if ( a3 == *v58 )
        return 3221225727LL;
      *(_QWORD *)(a5 + 248) = *v58;
      *v57 += 8LL;
      RtlpVirtualPopShadowStack(v14);
      *a8 = v58;
      if ( a6 )
        *a6 = 0;
      *a7 = 0LL;
      if ( a9 )
        *a9 = 0LL;
      return 0LL;
    }
    return 3221225512LL;
  }
  v15 = 0;
  v69 = 0LL;
  v65 = 0;
  a11 = 0;
  v16 = (char *)(a2 + a4[2]);
  v17 = *v16;
  v18 = *v16 & 7;
  if ( !a6 || *a6 )
  {
    if ( v18 < 2 )
    {
      v26 = a2 + a4[2];
      v27 = 0;
      while ( !*(_BYTE *)(v26 + 2) )
      {
        if ( (*(_BYTE *)v26 & 0x20) == 0 )
          goto LABEL_4;
        if ( (unsigned int)++v27 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v26 = a2 + *(unsigned int *)(v26 + 12);
      }
    }
  }
  else
  {
LABEL_4:
    a11 = 1;
  }
  v19 = a1 & 0x7FFFFFFF;
  v67 = 0;
  if ( (v16[3] & 0xF) != 0 )
  {
    v31 = (_DWORD)a3 - a2 - *a4;
    v66 = v31;
    if ( v31 >= (unsigned __int8)v16[1] || (v17 & 0x20) != 0 )
    {
      v67 = 1;
      goto LABEL_43;
    }
    v63 = 0;
    v68 = 0;
    if ( v16[2] )
    {
      do
      {
        if ( (HIBYTE(*(_WORD *)&v16[2 * v63 + 4]) & 0xF) == 3 )
          break;
        v63 = RtlpUnwindOpSlots() + v68;
        v68 = v63;
      }
      while ( v63 < (unsigned __int8)v16[2] );
      a4 = v71;
      v31 = v66;
    }
    if ( v31 >= (unsigned __int8)v16[2 * v63 + 4] )
      v67 = 1;
  }
  if ( !v67 )
  {
    v20 = *(char ***)(v14 + 152);
    goto LABEL_8;
  }
LABEL_43:
  v20 = (char **)(*(_QWORD *)(v14 + 8LL * (v16[3] & 0xF) + 120) - ((unsigned __int8)v16[3] & 0xF0));
LABEL_8:
  *a8 = v20;
  if ( a11 )
  {
LABEL_9:
    result = RtlpUnwindPrologue(a2, (_DWORD)v11, (unsigned int)*a8, (_DWORD)a4, v14, (__int64)a6, (__int64)&v71, a10);
    if ( (int)result < 0 )
      return result;
    if ( v19 )
    {
      v28 = (_BYTE *)(a2 + v71[2]);
      if ( (_DWORD)v11 - (_DWORD)a2 - *v71 >= (unsigned __int8)v28[1] && ((*v28 >> 3) & (unsigned __int8)v19) != 0 )
      {
        v29 = (unsigned __int8)v28[2];
        v30 = v29 + 1;
        if ( (v29 & 1) == 0 )
          v30 = (unsigned __int8)v28[2];
        *a7 = &v28[2 * (v30 + 2) + 4];
        v69 = a2 + *(unsigned int *)&v28[2 * v30 + 4];
      }
    }
    goto LABEL_11;
  }
  if ( v18 < 2 )
  {
    v22 = v11;
    v23 = *v11;
    if ( *v11 == 72 )
    {
      if ( v11[1] == -125 && v11[2] == -60 )
      {
        v22 = v11 + 4;
        goto LABEL_19;
      }
      if ( v11[1] == -127 && v11[2] == -60 )
      {
LABEL_52:
        v22 = v11 + 7;
        goto LABEL_19;
      }
    }
    if ( (v23 & 0xFE) != 0x48 )
      goto LABEL_19;
    if ( v11[1] != -115 )
      goto LABEL_19;
    v35 = v11[2] & 7 | (8 * (v23 & 1));
    v15 = v35;
    if ( !v35 || v35 != (v16[3] & 0xF) )
      goto LABEL_19;
    v36 = v11[2] & 0xF8;
    if ( v36 == 96 )
    {
      v22 = v11 + 4;
    }
    else if ( v36 == -96 )
    {
      goto LABEL_52;
    }
    while ( 1 )
    {
LABEL_19:
      while ( 1 )
      {
        v24 = *v22;
        v25 = v22 + 1;
        if ( (*v22 & 0xF8) != 0x58 )
          break;
        ++v22;
      }
      if ( (v24 & 0xF0) != 0x40 || (*v25 & 0xF8) != 0x58 )
        break;
      v22 += 2;
    }
    if ( v24 == -14 )
    {
      ++v22;
      v24 = *v25;
    }
    if ( (unsigned __int8)(v24 + 62) <= 1u || v24 == -13 && v22[1] == -61 )
      goto LABEL_67;
    if ( ((v24 + 23) & 0xFD) != 0 )
    {
      if ( v24 == -1 && v22[1] == 37 )
      {
LABEL_67:
        v65 = 1;
LABEL_68:
        v37 = v14 + 120;
        if ( (*v11 & 0xF8) == 0x48 )
        {
          v38 = v11[1];
          switch ( v38 )
          {
            case -125:
              *(_QWORD *)(v14 + 152) += v11[3];
              v11 += 4;
              break;
            case -127:
              *(_QWORD *)(v14 + 152) += (((unsigned __int8)v11[4] | (*(unsigned __int16 *)(v11 + 5) << 8)) << 8) | (unsigned __int8)v11[3];
              v11 += 7;
              break;
            case -115:
              v39 = v11[2] & 0xF8;
              if ( v39 == 96 )
              {
                v62 = *(_QWORD *)(v37 + 8LL * v15);
                *(_QWORD *)(v14 + 152) = v62;
                *(_QWORD *)(v14 + 152) = v62 + v11[3];
                v11 += 4;
              }
              else if ( v39 == -96 )
              {
                *(_QWORD *)(v14 + 152) = *(_QWORD *)(v37 + 8LL * v15)
                                       + ((unsigned __int8)v11[3] | (((unsigned __int8)v11[4] | (*(unsigned __int16 *)(v11 + 5) << 8)) << 8));
                v11 += 7;
              }
              break;
          }
        }
        v40 = a10;
        while ( 1 )
        {
          while ( 1 )
          {
            v41 = *v11;
            LOBYTE(a11) = v41;
            if ( (v41 & 0xF8) != 0x58 )
              break;
            v54 = *(_QWORD **)(v14 + 152);
            if ( *(_QWORD *)v40 )
            {
              if ( (unsigned __int64)v54 < **(_QWORD **)v40 )
                return 3221225512LL;
              if ( (unsigned __int64)v54 > **(_QWORD **)(v40 + 8) - 8LL )
                return 3221225512LL;
            }
            v55 = v41 & 7;
            *(_QWORD *)(v37 + 8 * v55) = *v54;
            v56 = *(_QWORD *)(v40 + 16);
            if ( v56 )
              *(_QWORD *)(v56 + 8 * v55 + 128) = v54;
            *(_QWORD *)(v14 + 152) += 8LL;
            ++v11;
          }
          if ( (v41 & 0xF0) != 0x40 || (v11[1] & 0xF8) != 0x58 )
            break;
          v59 = *(_QWORD **)(v14 + 152);
          if ( *(_QWORD *)v40 )
          {
            if ( (unsigned __int64)v59 < **(_QWORD **)v40 )
              return 3221225512LL;
            if ( (unsigned __int64)v59 > **(_QWORD **)(v40 + 8) - 8LL )
              return 3221225512LL;
          }
          v60 = v11[1] & 7 | (8LL * (v41 & 1));
          *(_QWORD *)(v37 + 8 * v60) = *v59;
          v61 = *(_QWORD *)(v40 + 16);
          if ( v61 )
            *(_QWORD *)(v61 + 8 * v60 + 128) = v59;
          *(_QWORD *)(v14 + 152) += 8LL;
          v11 += 2;
        }
        if ( !*(_QWORD *)v40 )
        {
          v42 = (_QWORD **)(v70 + 152);
LABEL_81:
          v43 = *v42;
          *(_QWORD *)(v14 + 248) = **v42;
          *v42 = v43 + 1;
          if ( (*(_DWORD *)(v14 + 48) & 0x100040) == 0x100040 )
          {
            ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(v14 + 1232), 0xBu, 0LL);
            if ( ExtendedFeature )
            {
              if ( (*(_BYTE *)ExtendedFeature & 1) != 0 )
                ExtendedFeature[1] += 8LL;
            }
          }
          goto LABEL_82;
        }
        v42 = (_QWORD **)(v14 + 152);
        v64 = *(_QWORD *)(v14 + 152);
        if ( v64 >= **(_QWORD **)v40 )
        {
          if ( v64 > **(_QWORD **)(v40 + 8) - 8LL )
            return 3221225512LL;
          goto LABEL_81;
        }
        return 3221225512LL;
      }
      if ( (v24 & 0xF8) == 0x48 && v22[1] == -1 && (v22[2] & 0x38) == 0x20 )
        v65 = 1;
    }
    else
    {
      if ( v24 == -21 )
        v32 = v22[1] + 2;
      else
        v32 = *(_DWORD *)(v22 + 1) + 5;
      v33 = (unsigned __int64)&v22[v32 - a2];
      v34 = *a4;
      if ( v33 < v34 || v33 >= a4[1] )
      {
        v52 = (_DWORD *)RtlpSameFunction(a4, a2, &v22[v32]);
        if ( !v52 || v33 == *v52 )
          goto LABEL_67;
        LODWORD(a4) = (_DWORD)v71;
      }
      else if ( v33 == v34 && (*v16 & 0x20) == 0 )
      {
        v65 = 1;
      }
    }
    if ( !v65 )
      goto LABEL_9;
    goto LABEL_68;
  }
  v44 = (unsigned __int8)v16[2];
  if ( !(_BYTE)v44 )
    goto LABEL_9;
  v45 = *((_WORD *)v16 + 2);
  v46 = HIBYTE(v45);
  if ( (HIBYTE(v45) & 0xF) != 6 )
    goto LABEL_9;
  v47 = (unsigned __int8)v45;
  v48 = (_DWORD)v11 - a2;
  if ( (v46 & 0x10) == 0 || (v49 = a4[1] - v47, v48 - v49 >= v47) )
  {
    for ( i = 1; i < (unsigned __int8)v16[2]; ++i )
    {
      v51 = *(_WORD *)&v16[2 * i + 4];
      if ( (HIBYTE(v51) & 0xF) != 6 )
        break;
      v44 = (unsigned __int8)v51 + (HIBYTE(v51) >> 4 << 8);
      if ( !v44 )
        break;
      v49 = a4[1] - v44;
      if ( v48 - v49 < v47 )
        goto LABEL_93;
    }
    goto LABEL_9;
  }
LABEL_93:
  v65 = 1;
  RtlpUnwindEpilogue(a2, v44, v48 - v49, (_DWORD)a4, v14, a10);
LABEL_82:
  if ( a6 )
    *a6 = 0;
LABEL_11:
  if ( a9 )
    *a9 = v69;
  if ( v65 )
  {
    if ( v67 )
      *a8 = (char **)(*(_QWORD *)(v14 + 152) - 8LL);
  }
  return 0LL;
}
