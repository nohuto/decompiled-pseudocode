/*
 * XREFs of MiReplaceStandbyLookaside @ 0x140222270
 * Callers:
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiLockStandbyOldestPage @ 0x1403E71A8 (MiLockStandbyOldestPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiFindSuitableLookasideReplacement @ 0x140222B60 (MiFindSuitableLookasideReplacement.c)
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReplaceStandbyLookaside(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3, int a4)
{
  int v4; // r13d
  ULONG_PTR v5; // r15
  signed __int64 v6; // r10
  ULONG_PTR v8; // r9
  ULONG_PTR result; // rax
  __int64 v10; // rcx
  int v11; // ecx
  char *v12; // rax
  int i; // edx
  int v14; // r8d
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int8 v17; // r11
  __int64 v18; // r10
  int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 *v26; // rcx
  ULONG_PTR v27; // r8
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // r13
  unsigned __int64 v31; // r10
  __int64 v32; // r13
  unsigned __int64 v33; // r14
  int v34; // ecx
  ULONG_PTR *v35; // r9
  int j; // eax
  int v37; // edx
  ULONG_PTR *v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  ULONG_PTR v43; // rdx
  ULONG_PTR v44; // rdx
  unsigned __int8 v45; // cl
  ULONG_PTR v46; // [rsp+30h] [rbp-C8h]
  __int64 v47; // [rsp+38h] [rbp-C0h]
  __int64 v48; // [rsp+50h] [rbp-A8h]
  unsigned int v49; // [rsp+68h] [rbp-90h]
  __int128 v50; // [rsp+70h] [rbp-88h]
  unsigned __int8 v51; // [rsp+100h] [rbp+8h]
  char v52; // [rsp+103h] [rbp+Bh]

  v4 = a3;
  v5 = a2;
  v6 = 48 * BugCheckParameter2;
  v50 = 0LL;
  v8 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v46 = v8;
  if ( BugCheckParameter2 < qword_140E35C40 || BugCheckParameter2 >= qword_140E35C40 + 2048 )
  {
    result = 0xFFFFDE0000000010uLL;
    v10 = *(_QWORD *)(v6 - 0x21FFFFFFFFF0LL);
    if ( (v10 & 0x400) != 0 )
    {
      if ( (v10 & 8) == 0 )
        return result;
    }
    else if ( (v10 & 0x8000000) == 0 )
    {
      return result;
    }
  }
  v48 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  v11 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v12 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, BugCheckParameter2 < *(_QWORD *)v12)
    || dword_140E2DC00 != dword_140E2DC04 && BugCheckParameter2 >= *((_QWORD *)v12 + 2) )
  {
    for ( i = 0; ; i = v14 + 1 )
    {
      while ( 1 )
      {
        if ( v11 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v14 = (i + v11) >> 1;
        v12 = (char *)qword_140E2DC60 + 16 * v14;
        if ( BugCheckParameter2 >= *(_QWORD *)v12 )
          break;
        if ( !v14 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2DC60, 0LL);
        v11 = v14 - 1;
      }
      if ( v14 == dword_140E2DC04 || BugCheckParameter2 < *((_QWORD *)v12 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v11) >> 1;
  }
  v49 = *((_DWORD *)v12 + 2);
  v15 = *(_DWORD *)(v8 + 32);
  v52 = HIBYTE(v15);
  if ( (v15 & 0x8000000) != 0
    && (v8 < 0xFFFFDE0000000000uLL
     || v8 >= 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
     || (v44 = 0xAAAAAAAAAAAAAAABuLL * (v6 >> 4), v44 >= qword_140E35C40) && v44 < qword_140E35C40 + 2048
     || (BYTE2(v15) & 7) != 6 && (unsigned int)MiGetPfnSlabType(v8) == 9) )
  {
    v16 = 5;
  }
  else
  {
    v16 = v52 & 7;
  }
  if ( qword_140E2DC68 )
  {
    v42 = MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v6 >> 4));
    v8 = v46;
    v17 = *(_BYTE *)(v42 + 12);
  }
  else
  {
    v17 = 0;
  }
  v51 = v17;
  if ( v4 < 9 )
  {
    if ( v4 == 8 )
      BYTE8(v50) = *(_BYTE *)(qword_140E3D280
                            + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4)) >> 9)
                            + 1) & 0x7F;
    else
      BYTE8(v50) = 0;
    v18 = v16;
  }
  else
  {
    v18 = v16;
  }
  v19 = 0;
  v20 = v48;
  v21 = 57216LL * v49;
  v22 = (__int64 *)(v48 + 16);
  v47 = v18;
  while ( 2 )
  {
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v24 = v20 + (v18 << 9) + 11840;
      }
      else
      {
        v23 = *v22;
        if ( v4 < 9 )
        {
          v45 = 0;
          if ( v4 == 8 )
            v45 = BYTE8(v50);
          v24 = *(_QWORD *)(v21 + 232LL * v4 + v23 + 15760) + ((v18 + 8LL * v45) << 9);
        }
        else
        {
          v24 = v23 + v21 + ((v18 + 8LL * v17 + 13) << 9);
        }
      }
    }
    else
    {
      v24 = v20 + (v18 << 9) + 7744;
    }
    v25 = 0LL;
    v26 = (__int64 *)v24;
    while ( 1 )
    {
      result = *v26;
      if ( *v26 == BugCheckParameter2 )
        break;
      v25 = (unsigned int)(v25 + 1);
      ++v26;
      result = (unsigned int)v25;
      if ( (unsigned int)v25 >= 0x40 )
      {
        if ( (_DWORD)v25 == 64 )
          goto LABEL_29;
        break;
      }
    }
    if ( v5 != -1LL || (result = MiFindSuitableLookasideReplacement(v19, v24, v25, v8, a4), !(_DWORD)result) )
    {
      v27 = *(_QWORD *)(v24 + 8 * v25);
      *(_QWORD *)(v24 + 8 * v25) = v5;
      if ( v27 != -1LL )
      {
        if ( v27 < qword_140E35C40 || (result = qword_140E35C40 + 2048, v27 >= qword_140E35C40 + 2048) )
        {
          v28 = 48 * v27;
          v29 = *(_QWORD *)(48 * v27 - 0x21FFFFFFFFF0LL);
          v30 = -9LL;
          v31 = 0xFFFFDE0000000000uLL;
          if ( (v29 & 0x400) == 0 )
            v30 = -134217729LL;
          v32 = v29 & v30;
          v33 = v28 - 0x220000000000LL;
          v34 = dword_140E2DC04;
          if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
            || (v35 = (ULONG_PTR *)((char *)qword_140E2DC60 + 16 * dword_140E2DC00), v27 < *v35)
            || dword_140E2DC00 != dword_140E2DC04 && v27 >= v35[2] )
          {
            for ( j = 0; ; j = v37 + 1 )
            {
              while ( 1 )
              {
                if ( v34 < j )
                  KeBugCheckEx(0x1Au, 0x5180uLL, v27, 0LL, 0LL);
                v37 = (j + v34) >> 1;
                v38 = (ULONG_PTR *)((char *)qword_140E2DC60 + 16 * v37);
                if ( v27 >= *v38 )
                  break;
                if ( !v37 )
                  KeBugCheckEx(0x1Au, 0x5180uLL, v27, (ULONG_PTR)v38, 0LL);
                v34 = v37 - 1;
              }
              if ( v37 == dword_140E2DC04 || v27 < v38[2] )
                break;
            }
            dword_140E2DC00 = (j + v34) >> 1;
          }
          v39 = *(_DWORD *)(v33 + 32);
          if ( (v39 & 0x8000000) != 0 && v33 >= 0xFFFFDE0000000000uLL && v33 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL )
          {
            v43 = 0xAAAAAAAAAAAAAAABuLL * (v28 >> 4);
            if ( (v43 < qword_140E35C40 || v43 >= qword_140E35C40 + 2048) && (BYTE2(v39) & 7) != 6 )
              MiGetPfnSlabType(v28 - 0x220000000000LL);
          }
          if ( qword_140E2DC68 )
            MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v33 - v31) >> 4));
          result = 0xFFFFDE0000000010uLL;
          *(_QWORD *)(v28 - 0x21FFFFFFFFF0LL) = v32;
          v5 = a2;
          v4 = a3;
        }
      }
      if ( v5 != -1LL )
      {
        if ( v5 < qword_140E35C40 || (result = qword_140E35C40 + 2048, v5 >= qword_140E35C40 + 2048) )
        {
          v40 = *(_QWORD *)(48 * v5 - 0x21FFFFFFFFF0LL);
          v41 = 8LL;
          if ( (v40 & 0x400) == 0 )
            v41 = 0x8000000LL;
          result = 0xFFFFDE0000000010uLL;
          *(_QWORD *)(48 * v5 - 0x21FFFFFFFFF0LL) = v40 | v41;
        }
      }
    }
    v21 = 57216LL * v49;
    v17 = v51;
    v18 = v47;
    LODWORD(v8) = v46;
LABEL_29:
    if ( ++v19 < 3 )
    {
      v20 = v48;
      v22 = (__int64 *)(v48 + 16);
      continue;
    }
    return result;
  }
}
