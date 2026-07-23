/*
 * XREFs of RtlpxVirtualUnwind @ 0x140259250
 * Callers:
 *     RtlVirtualUnwind2 @ 0x140257B30 (RtlVirtualUnwind2.c)
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x14025CE90 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x140472BC0 (RtlVirtualUnwind.c)
 * Callees:
 *     RtlpUnwindPrologue @ 0x140259E60 (RtlpUnwindPrologue.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x1403F21D0 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1403F25B0 (RtlpUnwindOpSlots.c)
 *     RtlpVirtualPopShadowStack @ 0x1403F2600 (RtlpVirtualPopShadowStack.c)
 *     RtlpSameFunction @ 0x140483548 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpxVirtualUnwind(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        _BYTE *a6,
        _QWORD *a7,
        unsigned __int64 *a8,
        _QWORD *a9,
        __int64 a10)
{
  __int64 v11; // r10
  __int64 v13; // r13
  int v14; // edi
  int v15; // r12d
  __int64 v16; // rbx
  unsigned int v17; // r14d
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r15d
  unsigned __int64 v21; // rcx
  __int64 result; // rax
  unsigned int v23; // edx
  __int16 v24; // dx
  int v25; // r11d
  int v26; // ecx
  unsigned int j; // edx
  __int16 v28; // r14
  int v29; // ecx
  _BYTE *v30; // r10
  int v31; // ecx
  int v32; // eax
  char *i; // r11
  unsigned int v34; // r12d
  char v35; // cl
  char v36; // cl
  char *v37; // rdx
  __int64 v38; // r14
  _BYTE *v39; // r8
  __int64 v40; // r11
  unsigned __int64 v41; // r10
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // r8
  unsigned __int64 v45; // rbx
  char v46; // dl
  unsigned __int64 v47; // rbx
  __int64 v48; // r9
  __int64 v49; // rax
  char v50; // al
  char v51; // al
  int v52; // eax
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD **v56; // rdx
  unsigned __int64 v57; // r8
  _QWORD *v58; // rcx
  unsigned int v59; // r11d
  _DWORD *v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // [rsp+50h] [rbp-68h]
  unsigned int v63; // [rsp+50h] [rbp-68h]
  int v64; // [rsp+58h] [rbp-60h]
  unsigned int v65; // [rsp+60h] [rbp-58h]
  __int64 v66; // [rsp+68h] [rbp-50h]
  __int64 v67; // [rsp+78h] [rbp-40h]
  unsigned int *v69; // [rsp+D8h] [rbp+20h] BYREF

  v69 = a4;
  v11 = a2;
  v13 = a5;
  v67 = a5;
  if ( !a4 )
  {
    v44 = (_QWORD *)(a5 + 152);
    v45 = *(_QWORD *)(a5 + 152);
    if ( a3 <= 0x7FFFFFFEFFFFLL && (v45 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( !*(_QWORD *)a10 || v45 >= **(_QWORD **)a10 && v45 <= **(_QWORD **)(a10 + 8) - 8LL )
    {
      if ( a3 == *(_QWORD *)v45 )
        return 3221225727LL;
      *(_QWORD *)(a5 + 248) = *(_QWORD *)v45;
      *v44 += 8LL;
      RtlpVirtualPopShadowStack(v13, 1LL, 1LL);
      *a8 = v45;
      if ( a6 )
        *a6 = 0;
      *a7 = 0LL;
      if ( !a9 )
        return 0LL;
      *a9 = 0LL;
      return 0LL;
    }
    return 3221225512LL;
  }
  v14 = 0;
  v66 = 0LL;
  v15 = 0;
  v16 = a2 + a4[2];
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v16 & 3) != 0 )
      goto LABEL_4;
    a4 = v69;
  }
  v17 = *(_BYTE *)v16 & 7;
  if ( !a6 || *a6 )
  {
    if ( v17 >= 2 )
      goto LABEL_13;
    v18 = v16;
    v19 = 0;
    while ( !*(_BYTE *)(v18 + 2) )
    {
      if ( (*(_BYTE *)v18 & 0x20) == 0 )
      {
        v15 = 1;
        goto LABEL_12;
      }
      if ( (unsigned int)++v19 > 0x20 )
        RtlRaiseStatus(-1073741569);
      v18 = v11 + *(unsigned int *)(v18 + 12);
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v18 & 3) != 0 )
        goto LABEL_4;
    }
    if ( a1 >= 0 )
    {
LABEL_12:
      a4 = v69;
      goto LABEL_13;
    }
    return 3221225512LL;
  }
  v15 = 1;
LABEL_13:
  v20 = a1 & 0x7FFFFFFF;
  v64 = 0;
  if ( (*(_BYTE *)(v16 + 3) & 0xF) != 0 )
  {
    v23 = a3 - v11 - *a4;
    v62 = v23;
    if ( v23 >= *(unsigned __int8 *)(v16 + 1) || (*(_BYTE *)v16 & 0x20) != 0 )
    {
      v64 = 1;
      goto LABEL_30;
    }
    v59 = 0;
    v65 = 0;
    if ( *(_BYTE *)(v16 + 2) )
    {
      do
      {
        if ( (HIBYTE(*(_WORD *)(v16 + 2LL * v59 + 4)) & 0xF) == 3 )
          break;
        v59 = RtlpUnwindOpSlots() + v65;
        v65 = v59;
      }
      while ( v59 < *(unsigned __int8 *)(v16 + 2) );
      a4 = v69;
      v11 = a2;
      v23 = v62;
    }
    if ( v23 >= *(unsigned __int8 *)(v16 + 2LL * v59 + 4) )
      v64 = 1;
  }
  if ( !v64 )
  {
    v21 = *(_QWORD *)(v13 + 152);
    goto LABEL_16;
  }
LABEL_30:
  v21 = *(_QWORD *)(v13 + 8LL * (*(_BYTE *)(v16 + 3) & 0xF) + 120) - (*(_BYTE *)(v16 + 3) & 0xF0);
LABEL_16:
  *a8 = v21;
  if ( v15 )
    goto LABEL_17;
  if ( v17 < 2 )
  {
    i = (char *)a3;
    v34 = 0;
    v35 = *(_BYTE *)a3;
    if ( *(_BYTE *)a3 != 72 )
      goto LABEL_101;
    if ( *(_BYTE *)(a3 + 1) == 0x83 && *(_BYTE *)(a3 + 2) == 0xC4 )
    {
      i = (char *)(a3 + 4);
      goto LABEL_55;
    }
    if ( *(_BYTE *)(a3 + 1) != 0x81 || *(_BYTE *)(a3 + 2) != 0xC4 )
    {
LABEL_101:
      if ( (v35 & 0xFE) != 0x48 )
        goto LABEL_55;
      if ( *(_BYTE *)(a3 + 1) != 0x8D )
        goto LABEL_55;
      v34 = *(_BYTE *)(a3 + 2) & 7 | (8 * (v35 & 1));
      if ( !v34 || v34 != (*(_BYTE *)(v16 + 3) & 0xF) )
        goto LABEL_55;
      v46 = *(_BYTE *)(a3 + 2) & 0xF8;
      if ( v46 == 96 )
      {
        for ( i = (char *)(a3 + 4); ; i += 2 )
        {
LABEL_55:
          while ( 1 )
          {
            v36 = *i;
            v37 = i + 1;
            if ( (*i & 0xF8) != 0x58 )
              break;
            ++i;
          }
          if ( (v36 & 0xF0) != 0x40 || (*v37 & 0xF8) != 0x58 )
            break;
        }
        if ( v36 == -14 )
        {
          ++i;
          v36 = *v37;
        }
        if ( (unsigned __int8)(v36 + 62) <= 1u || v36 == -13 && i[1] == -61 )
          goto LABEL_71;
        if ( ((v36 + 23) & 0xFD) != 0 )
        {
          if ( v36 == -1 && i[1] == 37 )
          {
LABEL_71:
            v14 = 1;
            goto LABEL_72;
          }
          if ( (v36 & 0xF8) == 0x48 && i[1] == -1 && (i[2] & 0x38) == 0x20 )
            v14 = 1;
        }
        else
        {
          if ( v36 == -21 )
            v52 = i[1] + 2;
          else
            v52 = *(_DWORD *)(i + 1) + 5;
          v53 = (unsigned __int64)&i[v52 - v11];
          v54 = *a4;
          if ( v53 < v54 || v53 >= a4[1] )
          {
            if ( a3 <= 0x7FFFFFFEFFFFLL )
              a4 = v69;
            v60 = (_DWORD *)RtlpSameFunction(a4, v11, &i[v52]);
            if ( !v60 || v53 == *v60 )
              goto LABEL_71;
            LODWORD(a4) = (_DWORD)v69;
          }
          else if ( v53 == v54 && (*(_BYTE *)v16 & 0x20) == 0 )
          {
            v14 = 1;
          }
        }
        if ( !v14 )
        {
          LODWORD(v11) = a2;
          goto LABEL_17;
        }
LABEL_72:
        v38 = v13 + 120;
        v39 = (_BYTE *)a3;
        if ( (*(_BYTE *)a3 & 0xF8) == 0x48 )
        {
          v50 = *(_BYTE *)(a3 + 1);
          switch ( v50 )
          {
            case -125:
              *(_QWORD *)(v13 + 152) += *(char *)(a3 + 3);
              v39 = (_BYTE *)(a3 + 4);
              break;
            case -127:
              *(_QWORD *)(v13 + 152) += ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8) | *(unsigned __int8 *)(a3 + 3);
              v39 = (_BYTE *)(a3 + 7);
              break;
            case -115:
              v51 = *(_BYTE *)(a3 + 2) & 0xF8;
              if ( v51 == 96 )
              {
                v61 = *(_QWORD *)(v38 + 8LL * v34);
                *(_QWORD *)(v13 + 152) = v61;
                *(_QWORD *)(v13 + 152) = v61 + *(char *)(a3 + 3);
                v39 = (_BYTE *)(a3 + 4);
              }
              else if ( v51 == -96 )
              {
                *(_QWORD *)(v13 + 152) = *(_QWORD *)(v38 + 8LL * v34)
                                       + (*(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
                v39 = (_BYTE *)(a3 + 7);
              }
              break;
          }
        }
        v40 = a10;
        while ( 1 )
        {
          while ( (*v39 & 0xF8) == 0x58 )
          {
            v41 = *(_QWORD *)(v13 + 152);
            if ( a3 <= 0x7FFFFFFEFFFFLL && (v41 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( *(_QWORD *)v40 )
            {
              if ( v41 < **(_QWORD **)v40 )
                return 3221225512LL;
              if ( v41 > **(_QWORD **)(v40 + 8) - 8LL )
                return 3221225512LL;
            }
            v42 = *v39 & 7;
            *(_QWORD *)(v38 + 8 * v42) = *(_QWORD *)v41;
            v43 = *(_QWORD *)(v40 + 16);
            if ( v43 )
              *(_QWORD *)(v43 + 8 * v42 + 128) = v41;
            *(_QWORD *)(v13 + 152) += 8LL;
            ++v39;
          }
          if ( (*v39 & 0xF0) != 0x40 || (v39[1] & 0xF8) != 0x58 )
            break;
          v47 = *(_QWORD *)(v13 + 152);
          if ( a3 <= 0x7FFFFFFEFFFFLL && (v47 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( *(_QWORD *)v40 )
          {
            if ( v47 < **(_QWORD **)v40 )
              return 3221225512LL;
            if ( v47 > **(_QWORD **)(v40 + 8) - 8LL )
              return 3221225512LL;
          }
          v48 = v39[1] & 7 | (8LL * (*v39 & 1));
          *(_QWORD *)(v38 + 8 * v48) = *(_QWORD *)v47;
          v49 = *(_QWORD *)(v40 + 16);
          if ( v49 )
            *(_QWORD *)(v49 + 8 * v48 + 128) = v47;
          *(_QWORD *)(v13 + 152) += 8LL;
          v39 += 2;
        }
        if ( a3 <= 0x7FFFFFFEFFFFLL )
        {
          v55 = *(_QWORD *)(v13 + 152);
          if ( (v55 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
        }
        if ( *(_QWORD *)v40 )
        {
          v56 = (_QWORD **)(v13 + 152);
          v57 = *(_QWORD *)(v13 + 152);
          if ( v57 < **(_QWORD **)v40 )
            return 3221225512LL;
          if ( v57 > **(_QWORD **)(v40 + 8) - 8LL )
            return 3221225512LL;
        }
        else
        {
          v56 = (_QWORD **)(v67 + 152);
        }
        v58 = *v56;
        *(_QWORD *)(v13 + 248) = **v56;
        *v56 = v58 + 1;
        RtlpVirtualPopShadowStack(v13, 1LL, 1LL);
        goto LABEL_69;
      }
      if ( v46 != -96 )
        goto LABEL_55;
    }
    i = (char *)(a3 + 7);
    goto LABEL_55;
  }
  if ( *(_BYTE *)(v16 + 2) )
  {
    v24 = *(_WORD *)(v16 + 4);
    if ( (HIBYTE(v24) & 0xF) == 6 )
    {
      v63 = (unsigned __int8)v24;
      v25 = a3 - v11;
      if ( (v24 & 0x1000) != 0 )
      {
        v26 = a4[1] - (unsigned __int8)v24;
        LOBYTE(v14) = v25 - v26 < (unsigned int)(unsigned __int8)v24;
      }
      else
      {
        v26 = 0;
      }
      if ( !v14 )
      {
        for ( j = 1; ; ++j )
        {
          if ( j >= *(unsigned __int8 *)(v16 + 2) )
            goto LABEL_17;
          v28 = *(_WORD *)(v16 + 2LL * j + 4);
          if ( (HIBYTE(v28) & 0xF) != 6 )
            goto LABEL_17;
          v29 = (unsigned __int8)v28 + (HIBYTE(v28) >> 4 << 8);
          if ( !v29 )
            goto LABEL_17;
          v26 = a4[1] - v29;
          if ( v25 - v26 < v63 )
            break;
        }
        v14 = 1;
      }
      RtlpUnwindEpilogue(v11, a3, v25 - v26, (_DWORD)a4, v13, a10);
LABEL_69:
      if ( a6 )
        *a6 = 0;
LABEL_19:
      if ( a9 )
        *a9 = v66;
      if ( v14 )
      {
        if ( v64 )
          *a8 = *(_QWORD *)(v13 + 152) - 8LL;
      }
      return 0LL;
    }
  }
LABEL_17:
  result = RtlpUnwindPrologue(v11, a3, *a8, (_DWORD)a4, v13, (__int64)a6, (__int64)&v69, a10);
  if ( (int)result >= 0 )
  {
    if ( v20 )
    {
      v30 = (_BYTE *)(a2 + v69[2]);
      if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v30 & 3) != 0 )
LABEL_4:
        ExRaiseDatatypeMisalignment();
      if ( (_DWORD)a3 - (_DWORD)a2 - *v69 >= (unsigned __int8)v30[1] && ((*v30 >> 3) & (unsigned __int8)v20) != 0 )
      {
        v31 = (unsigned __int8)v30[2];
        v32 = v31 + 1;
        if ( (v31 & 1) == 0 )
          v32 = (unsigned __int8)v30[2];
        *a7 = &v30[2 * (v32 + 2) + 4];
        v66 = a2 + *(unsigned int *)&v30[2 * v32 + 4];
      }
    }
    goto LABEL_19;
  }
  return result;
}
