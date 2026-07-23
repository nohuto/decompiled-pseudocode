/*
 * XREFs of MiPfnToStandbyLookaside @ 0x140224320
 * Callers:
 *     MiExclusiveInsertPfnChainInList @ 0x1403E2124 (MiExclusiveInsertPfnChainInList.c)
 *     MiRebuildStandbyLookasideList @ 0x1403E73E0 (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnToStandbyLookaside(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3, __int64 *a4)
{
  signed __int64 v5; // r10
  ULONG_PTR v8; // rdi
  int v9; // esi
  int v10; // edx
  char *v11; // rax
  int i; // r9d
  int v13; // ecx
  unsigned int v14; // edx
  int v15; // edx
  unsigned __int8 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 result; // rax
  unsigned __int64 v22; // rcx
  ULONG_PTR v23; // rcx
  ULONG_PTR v24; // rcx
  unsigned __int8 v25; // cl

  v5 = 48 * BugCheckParameter2;
  v8 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( a2 )
  {
    v9 = *a2;
  }
  else if ( BugCheckParameter2 >= qword_140E35C40 && BugCheckParameter2 < qword_140E35C40 + 2048 )
  {
    v9 = 9;
  }
  else if ( byte_140E3CC26 )
  {
    v22 = (0xAAAAAAAAAAAAAAABuLL * (v5 >> 4)) >> 9;
    if ( *(_BYTE *)(qword_140E3D280 + 2 * v22) )
      v9 = *(unsigned __int8 *)(qword_140E3D280 + 2 * v22) - 1;
    else
      v9 = 9;
  }
  else
  {
    v9 = 9;
  }
  a4[1] = v8;
  *a4 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  v10 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v11 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, BugCheckParameter2 < *(_QWORD *)v11)
    || dword_140E2DC00 != dword_140E2DC04 && BugCheckParameter2 >= *((_QWORD *)v11 + 2) )
  {
    for ( i = 0; ; i = v13 + 1 )
    {
      while ( 1 )
      {
        if ( v10 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v13 = (i + v10) >> 1;
        v11 = (char *)qword_140E2DC60 + 16 * v13;
        if ( BugCheckParameter2 >= *(_QWORD *)v11 )
          break;
        if ( !v13 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2DC60, 0LL);
        v10 = v13 - 1;
      }
      if ( v13 == dword_140E2DC04 || BugCheckParameter2 < *((_QWORD *)v11 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v10) >> 1;
  }
  *((_DWORD *)a4 + 6) = *((_DWORD *)v11 + 2);
  if ( a3 )
  {
    v15 = 5;
  }
  else
  {
    v14 = *(_DWORD *)(v8 + 32);
    if ( (v14 & 0x8000000) == 0
      || v8 >= 0xFFFFDE0000000000uLL
      && v8 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
      && ((v23 = 0xAAAAAAAAAAAAAAABuLL * (v5 >> 4), v23 < qword_140E35C40) || v23 >= qword_140E35C40 + 2048)
      && ((BYTE2(v14) & 7) == 6
       || byte_140E3CC26
       && (v24 = v23 >> 9, *(_BYTE *)(qword_140E3D280 + 2 * v24))
       && *(_BYTE *)(qword_140E3D280 + 2 * v24) != 10) )
    {
      v15 = HIBYTE(v14) & 7;
    }
    else
    {
      v15 = 5;
    }
  }
  *((_DWORD *)a4 + 7) = v15;
  if ( qword_140E2DC68 )
    v16 = *(_BYTE *)(MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v5 >> 4)) + 12);
  else
    v16 = 0;
  v17 = *((unsigned int *)a4 + 7);
  v18 = 57216LL * *((unsigned int *)a4 + 6);
  v19 = *a4;
  *((_BYTE *)a4 + 32) = v16;
  *((_DWORD *)a4 + 9) = v9;
  v20 = *(_QWORD *)(v19 + 16) + v18;
  if ( v9 < 9 )
  {
    if ( v9 == 8 )
      v25 = *(_BYTE *)(qword_140E3D280 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4)) >> 9) + 1) & 0x7F;
    else
      v25 = 0;
    *((_BYTE *)a4 + 40) = v25;
    result = v9;
    a4[2] = *(_QWORD *)(232LL * v9 + v20 + 15768) + 88 * (v17 + 8LL * v25);
  }
  else
  {
    result = v20 + 88 * (v17 + 8LL * v16 + 59);
    a4[2] = result;
  }
  return result;
}
