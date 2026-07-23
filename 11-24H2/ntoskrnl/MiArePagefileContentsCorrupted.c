/*
 * XREFs of MiArePagefileContentsCorrupted @ 0x140341C34
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140341950 (MiValidatePagefilePageHash.c)
 *     MiIsStandbyPageCorrupted @ 0x140423260 (MiIsStandbyPageCorrupted.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiObtainPagefileHashes @ 0x140341E3C (MiObtainPagefileHashes.c)
 *     MiComputePageHash @ 0x140426970 (MiComputePageHash.c)
 *     MiLateWritePageHash @ 0x1404C3280 (MiLateWritePageHash.c)
 *     MiPageHashBugCheck @ 0x140692388 (MiPageHashBugCheck.c)
 */

__int64 __fastcall MiArePagefileContentsCorrupted(__int64 a1, __int128 *a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  unsigned int PagingFileOffset; // eax
  unsigned int v8; // edi
  __int64 v9; // rbx
  unsigned int v10; // r14d
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v4 = 48 * a1 - 0x220000000000LL;
  v5 = *(_QWORD *)(v4 + 16);
  v6 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL))
                 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v4 + 16)) >> 4)
                 + 18528);
  PagingFileOffset = MiGetPagingFileOffset(v5);
  v8 = 0;
  v9 = (v5 >> 5) & 0x1F;
  v10 = PagingFileOffset;
  if ( !a2 )
  {
    MiObtainPagefileHashes(v6, PagingFileOffset, 1LL, &v17);
    a2 = &v17;
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 2) <= 1 )
    return 0LL;
  if ( !*(_DWORD *)a2 && (dword_140FC5200 & 1) == 0 && (_DWORD)v9 != 31 )
  {
    if ( (unsigned int)v9 >> 3 == 3 )
    {
      if ( (v9 & 7) != 0 )
        return 0LL;
    }
    else if ( (unsigned int)v9 >> 3 == 1 )
    {
      return 0LL;
    }
  }
  v11 = 0;
  v12 = MiGetPagingFileOffset(*(_QWORD *)(v4 + 16));
  MiComputePageHash(&v16, a1, v13, v12);
  if ( *(_DWORD *)a2 != 1 )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( dword_140E373D0 )
      {
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)&v16 + 1) )
        {
          if ( *((_DWORD *)a2 + 1) != DWORD1(v16) )
            v11 = 56;
        }
        else
        {
          v11 = 59;
        }
      }
    }
    else
    {
      v11 = MiLateWritePageHash(v6, v10, a2, &v16);
      if ( !v11 )
        return 0LL;
    }
  }
  v14 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    v11 = 60;
    goto LABEL_29;
  }
  if ( v14 != (_DWORD)v16 && (unsigned int)(v14 - 2) > 1 )
  {
    v11 = v11 != 0 ? 57 : 63;
    goto LABEL_29;
  }
  if ( !v11 )
    return 0LL;
LABEL_29:
  ++dword_140E30298;
  qword_140E302A8 = a1;
  if ( !dword_140E30294 )
    MiPageHashBugCheck(v11, v10, (int)&v16);
  if ( dword_140E30294 == 1 )
    return 1;
  return v8;
}
