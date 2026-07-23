/*
 * XREFs of RtlpxVirtualUnwind @ 0x1402345C0
 * Callers:
 *     RtlDispatchException @ 0x140231750 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     RtlVirtualUnwind2 @ 0x140233750 (RtlVirtualUnwind2.c)
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x14046B960 (RtlVirtualUnwind.c)
 * Callees:
 *     RtlpUnwindPrologue @ 0x140235620 (RtlpUnwindPrologue.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     RtlLocateExtendedFeature @ 0x140237160 (RtlLocateExtendedFeature.c)
 *     RtlpVirtualPopShadowStack @ 0x1402375E0 (RtlpVirtualPopShadowStack.c)
 *     RtlpUnwindEpilogue @ 0x140438C20 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x140439000 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x14047EF18 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpxVirtualUnwind(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
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
  int v15; // r15d
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 result; // rax
  unsigned int v20; // r14d
  __int64 v21; // rcx
  int v22; // edx
  int v23; // r12d
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  __int16 v26; // dx
  int v27; // r11d
  int v28; // ecx
  unsigned int j; // edx
  __int16 v30; // r14
  int v31; // ecx
  _BYTE *v32; // r10
  int v33; // ecx
  int v34; // eax
  char *i; // r8
  unsigned int v36; // r15d
  char v37; // cl
  char v38; // cl
  char *v39; // rdx
  __int64 v40; // rbx
  _BYTE *v41; // rdx
  __int64 v42; // r10
  __int64 v43; // r8
  __int64 v44; // rax
  char v45; // dl
  unsigned __int64 v46; // r11
  __int64 v47; // r8
  __int64 v48; // rax
  char v49; // al
  char v50; // al
  int v51; // eax
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rcx
  _QWORD **v54; // rdx
  unsigned __int64 v55; // r8
  _QWORD *v56; // rcx
  _QWORD *ExtendedFeature; // rax
  unsigned int v58; // r8d
  _DWORD *v59; // rax
  __int64 v60; // rcx
  unsigned int v61; // [rsp+50h] [rbp-68h]
  unsigned int v62; // [rsp+50h] [rbp-68h]
  int v63; // [rsp+58h] [rbp-60h]
  unsigned int v64; // [rsp+60h] [rbp-58h]
  __int64 v65; // [rsp+68h] [rbp-50h]
  __int64 v66; // [rsp+78h] [rbp-40h]
  _DWORD *v68; // [rsp+D8h] [rbp+20h] BYREF

  v68 = (_DWORD *)a4;
  v11 = a2;
  v13 = a5;
  v66 = a5;
  if ( !a4 )
  {
    v17 = (_QWORD *)(a5 + 152);
    v18 = *(_QWORD *)(a5 + 152);
    if ( a3 <= 0x7FFFFFFEFFFFLL && (v18 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( !*(_QWORD *)a10 || v18 >= **(_QWORD **)a10 && v18 <= **(_QWORD **)(a10 + 8) - 8LL )
    {
      if ( a3 != *(_QWORD *)v18 )
      {
        *(_QWORD *)(a5 + 248) = *(_QWORD *)v18;
        *v17 += 8LL;
        if ( (*(_DWORD *)(v13 + 48) & 0x100040) == 0x100040 )
        {
          ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(v13 + 1232), 0xBu, 0LL);
          if ( ExtendedFeature )
          {
            if ( (*(_BYTE *)ExtendedFeature & 1) != 0 )
              ExtendedFeature[1] += 8LL;
          }
        }
        if ( (*(_DWORD *)(v13 + 48) & 0x100080) == 0x100080 )
          *(_QWORD *)(*(int *)(v13 + 1256) + v13 + 1232) += 8LL;
        *a8 = v18;
        if ( a6 )
          *a6 = 0;
        *a7 = 0LL;
        if ( a9 )
        {
          *a9 = 0LL;
          return 0LL;
        }
        return 0LL;
      }
      return 3221225727LL;
    }
    return 3221225512LL;
  }
  v14 = 0;
  v65 = 0LL;
  v15 = 0;
  v16 = a2 + *(unsigned int *)(a4 + 8);
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v16 & 3) != 0 )
      goto LABEL_4;
    a4 = (unsigned __int64)v68;
  }
  v20 = *(_BYTE *)v16 & 7;
  if ( !a6 || *a6 )
  {
    if ( v20 >= 2 )
      goto LABEL_24;
    v21 = v16;
    v22 = 0;
    while ( !*(_BYTE *)(v21 + 2) )
    {
      if ( (*(_BYTE *)v21 & 0x20) == 0 )
      {
        v15 = 1;
        goto LABEL_23;
      }
      if ( (unsigned int)++v22 > 0x20 )
        RtlRaiseStatus(-1073741569);
      v21 = v11 + *(unsigned int *)(v21 + 12);
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v21 & 3) != 0 )
        goto LABEL_4;
    }
    if ( a1 >= 0 )
    {
LABEL_23:
      a4 = (unsigned __int64)v68;
      goto LABEL_24;
    }
    return 3221225512LL;
  }
  v15 = 1;
LABEL_24:
  v23 = a1 & 0x7FFFFFFF;
  v63 = 0;
  if ( (*(_BYTE *)(v16 + 3) & 0xF) != 0 )
  {
    v25 = a3 - v11 - *(_DWORD *)a4;
    v61 = v25;
    if ( v25 >= *(unsigned __int8 *)(v16 + 1) || (*(_BYTE *)v16 & 0x20) != 0 )
    {
      v63 = 1;
      goto LABEL_41;
    }
    v58 = 0;
    v64 = 0;
    if ( *(_BYTE *)(v16 + 2) )
    {
      do
      {
        if ( (HIBYTE(*(_WORD *)(v16 + 2LL * v58 + 4)) & 0xF) == 3 )
          break;
        v58 = RtlpUnwindOpSlots() + v64;
        v64 = v58;
      }
      while ( v58 < *(unsigned __int8 *)(v16 + 2) );
      a4 = (unsigned __int64)v68;
      v11 = a2;
      v25 = v61;
    }
    if ( v25 >= *(unsigned __int8 *)(v16 + 2LL * v58 + 4) )
      v63 = 1;
  }
  if ( !v63 )
  {
    v24 = *(_QWORD *)(v13 + 152);
    goto LABEL_27;
  }
LABEL_41:
  v24 = *(_QWORD *)(v13 + 8LL * (*(_BYTE *)(v16 + 3) & 0xF) + 120) - (*(_BYTE *)(v16 + 3) & 0xF0);
LABEL_27:
  *a8 = v24;
  if ( v15 )
    goto LABEL_28;
  if ( v20 < 2 )
  {
    i = (char *)a3;
    v36 = 0;
    v37 = *(_BYTE *)a3;
    if ( *(_BYTE *)a3 != 72 )
      goto LABEL_100;
    if ( *(_BYTE *)(a3 + 1) == 0x83 && *(_BYTE *)(a3 + 2) == 0xC4 )
    {
      i = (char *)(a3 + 4);
      goto LABEL_66;
    }
    if ( *(_BYTE *)(a3 + 1) != 0x81 || *(_BYTE *)(a3 + 2) != 0xC4 )
    {
LABEL_100:
      if ( (v37 & 0xFE) != 0x48 )
        goto LABEL_66;
      if ( *(_BYTE *)(a3 + 1) != 0x8D )
        goto LABEL_66;
      v36 = *(_BYTE *)(a3 + 2) & 7 | (8 * (v37 & 1));
      if ( !v36 || v36 != (*(_BYTE *)(v16 + 3) & 0xF) )
        goto LABEL_66;
      v45 = *(_BYTE *)(a3 + 2) & 0xF8;
      if ( v45 == 96 )
      {
        for ( i = (char *)(a3 + 4); ; i += 2 )
        {
LABEL_66:
          while ( 1 )
          {
            v38 = *i;
            v39 = i + 1;
            if ( (*i & 0xF8) != 0x58 )
              break;
            ++i;
          }
          if ( (v38 & 0xF0) != 0x40 || (*v39 & 0xF8) != 0x58 )
            break;
        }
        if ( v38 == -14 )
        {
          ++i;
          v38 = *v39;
        }
        if ( (unsigned __int8)(v38 + 62) <= 1u || v38 == -13 && i[1] == -61 )
          goto LABEL_82;
        if ( ((v38 + 23) & 0xFD) != 0 )
        {
          if ( v38 == -1 && i[1] == 37 )
          {
LABEL_82:
            v14 = 1;
            goto LABEL_83;
          }
          if ( (v38 & 0xF8) == 0x48 && i[1] == -1 && (i[2] & 0x38) == 0x20 )
            v14 = 1;
        }
        else
        {
          if ( v38 == -21 )
            v51 = i[1] + 2;
          else
            v51 = *(_DWORD *)(i + 1) + 5;
          v52 = (unsigned __int64)&i[v51 - v11];
          v53 = *(unsigned int *)a4;
          if ( v52 < v53 || v52 >= *(unsigned int *)(a4 + 4) )
          {
            if ( a3 <= 0x7FFFFFFEFFFFLL )
              a4 = (unsigned __int64)v68;
            v59 = (_DWORD *)RtlpSameFunction(a4, v11, &i[v51]);
            if ( !v59 || v52 == *v59 )
              goto LABEL_82;
            a4 = (unsigned __int64)v68;
          }
          else if ( v52 == v53 && (*(_BYTE *)v16 & 0x20) == 0 )
          {
            v14 = 1;
          }
        }
        if ( !v14 )
        {
          LODWORD(v11) = a2;
          goto LABEL_28;
        }
LABEL_83:
        v40 = v13 + 120;
        v41 = (_BYTE *)a3;
        if ( (*(_BYTE *)a3 & 0xF8) == 0x48 )
        {
          v49 = *(_BYTE *)(a3 + 1);
          switch ( v49 )
          {
            case -125:
              *(_QWORD *)(v13 + 152) += *(char *)(a3 + 3);
              v41 = (_BYTE *)(a3 + 4);
              break;
            case -127:
              *(_QWORD *)(v13 + 152) += ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8) | *(unsigned __int8 *)(a3 + 3);
              v41 = (_BYTE *)(a3 + 7);
              break;
            case -115:
              v50 = *(_BYTE *)(a3 + 2) & 0xF8;
              if ( v50 == 96 )
              {
                v60 = *(_QWORD *)(v40 + 8LL * v36);
                *(_QWORD *)(v13 + 152) = v60;
                *(_QWORD *)(v13 + 152) = v60 + *(char *)(a3 + 3);
                v41 = (_BYTE *)(a3 + 4);
              }
              else if ( v50 == -96 )
              {
                *(_QWORD *)(v13 + 152) = *(_QWORD *)(v40 + 8LL * v36)
                                       + (*(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
                v41 = (_BYTE *)(a3 + 7);
              }
              break;
          }
        }
        v42 = a10;
        while ( 1 )
        {
          while ( (*v41 & 0xF8) == 0x58 )
          {
            a4 = *(_QWORD *)(v13 + 152);
            if ( a3 <= 0x7FFFFFFEFFFFLL && (a4 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( *(_QWORD *)v42 )
            {
              if ( a4 < **(_QWORD **)v42 )
                return 3221225512LL;
              if ( a4 > **(_QWORD **)(v42 + 8) - 8LL )
                return 3221225512LL;
            }
            v43 = *v41 & 7;
            *(_QWORD *)(v40 + 8 * v43) = *(_QWORD *)a4;
            v44 = *(_QWORD *)(v42 + 16);
            if ( v44 )
              *(_QWORD *)(v44 + 8 * v43 + 128) = a4;
            *(_QWORD *)(v13 + 152) += 8LL;
            ++v41;
          }
          if ( (*v41 & 0xF0) != 0x40 )
            break;
          a4 = (unsigned __int8)v41[1];
          if ( (a4 & 0xF8) != 0x58 )
            break;
          v46 = *(_QWORD *)(v13 + 152);
          if ( a3 <= 0x7FFFFFFEFFFFLL && (v46 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( *(_QWORD *)v42 )
          {
            if ( v46 < **(_QWORD **)v42 )
              return 3221225512LL;
            if ( v46 > **(_QWORD **)(v42 + 8) - 8LL )
              return 3221225512LL;
          }
          a4 &= 7u;
          v47 = a4 | (8LL * (*v41 & 1));
          *(_QWORD *)(v40 + 8 * v47) = *(_QWORD *)v46;
          v48 = *(_QWORD *)(v42 + 16);
          if ( v48 )
            *(_QWORD *)(v48 + 8 * v47 + 128) = v46;
          *(_QWORD *)(v13 + 152) += 8LL;
          v41 += 2;
        }
        if ( a3 <= 0x7FFFFFFEFFFFLL && (*(_QWORD *)(v13 + 152) & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( *(_QWORD *)v42 )
        {
          v54 = (_QWORD **)(v13 + 152);
          v55 = *(_QWORD *)(v13 + 152);
          if ( v55 < **(_QWORD **)v42 )
            return 3221225512LL;
          if ( v55 > **(_QWORD **)(v42 + 8) - 8LL )
            return 3221225512LL;
        }
        else
        {
          v54 = (_QWORD **)(v66 + 152);
        }
        v56 = *v54;
        *(_QWORD *)(v13 + 248) = **v54;
        *v54 = v56 + 1;
        RtlpVirtualPopShadowStack(v13, 1LL, 1LL, a4);
        goto LABEL_80;
      }
      if ( v45 != -96 )
        goto LABEL_66;
    }
    i = (char *)(a3 + 7);
    goto LABEL_66;
  }
  if ( *(_BYTE *)(v16 + 2) )
  {
    v26 = *(_WORD *)(v16 + 4);
    if ( (HIBYTE(v26) & 0xF) == 6 )
    {
      v62 = (unsigned __int8)v26;
      v27 = a3 - v11;
      if ( (v26 & 0x1000) != 0 )
      {
        v28 = *(_DWORD *)(a4 + 4) - (unsigned __int8)v26;
        LOBYTE(v14) = v27 - v28 < (unsigned int)(unsigned __int8)v26;
      }
      else
      {
        v28 = 0;
      }
      if ( !v14 )
      {
        for ( j = 1; ; ++j )
        {
          if ( j >= *(unsigned __int8 *)(v16 + 2) )
            goto LABEL_28;
          v30 = *(_WORD *)(v16 + 2LL * j + 4);
          if ( (HIBYTE(v30) & 0xF) != 6 )
            goto LABEL_28;
          v31 = (unsigned __int8)v30 + (HIBYTE(v30) >> 4 << 8);
          if ( !v31 )
            goto LABEL_28;
          v28 = *(_DWORD *)(a4 + 4) - v31;
          if ( v27 - v28 < v62 )
            break;
        }
        v14 = 1;
      }
      RtlpUnwindEpilogue(v11, a3, v27 - v28, a4, v13, a10);
LABEL_80:
      if ( a6 )
        *a6 = 0;
LABEL_30:
      if ( a9 )
        *a9 = v65;
      if ( v14 )
      {
        if ( v63 )
          *a8 = *(_QWORD *)(v13 + 152) - 8LL;
      }
      return 0LL;
    }
  }
LABEL_28:
  result = RtlpUnwindPrologue(v11, a3, *a8, a4, v13, (__int64)a6, (__int64)&v68, a10);
  if ( (int)result >= 0 )
  {
    if ( v23 )
    {
      v32 = (_BYTE *)(a2 + (unsigned int)v68[2]);
      if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v32 & 3) != 0 )
LABEL_4:
        ExRaiseDatatypeMisalignment();
      if ( (int)a3 - (int)a2 - *v68 >= (unsigned int)(unsigned __int8)v32[1]
        && ((*v32 >> 3) & (unsigned __int8)v23) != 0 )
      {
        v33 = (unsigned __int8)v32[2];
        v34 = v33 + 1;
        if ( (v33 & 1) == 0 )
          v34 = (unsigned __int8)v32[2];
        *a7 = &v32[2 * (v34 + 2) + 4];
        v65 = a2 + *(unsigned int *)&v32[2 * v34 + 4];
      }
    }
    goto LABEL_30;
  }
  return result;
}
