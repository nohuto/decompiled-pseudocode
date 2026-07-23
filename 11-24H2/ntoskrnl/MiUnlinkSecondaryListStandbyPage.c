/*
 * XREFs of MiUnlinkSecondaryListStandbyPage @ 0x1402238C0
 * Callers:
 *     MiReplaceSecondaryListStandbyPage @ 0x1402568F0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlinkSecondaryListStandbyPage(__int64 a1, int a2)
{
  __int64 v2; // r14
  ULONG_PTR v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rsi
  int v7; // ecx
  char *v8; // rax
  int i; // edx
  int v10; // r9d
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned __int8 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // r10
  signed __int64 v18; // rdx
  signed __int64 v19; // rax
  __int64 v20; // r9
  int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  signed __int64 v24; // rdx
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  __int64 result; // rax
  signed __int64 v28; // rdx
  ULONG_PTR v29; // rcx
  ULONG_PTR v30; // rcx
  unsigned __int8 v31; // cl
  __int64 v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+40h] [rbp-38h]
  unsigned int v34; // [rsp+48h] [rbp-30h]

  v2 = a2;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v5 = 16 * ((a1 + 0x220000000000LL) >> 4);
  v6 = v5 - 0x220000000000LL;
  v32 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v5 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v7 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v8 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v4 < *(_QWORD *)v8)
    || dword_140E2DC00 != dword_140E2DC04 && v4 >= *((_QWORD *)v8 + 2) )
  {
    for ( i = 0; ; i = v10 + 1 )
    {
      while ( 1 )
      {
        if ( v7 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v4, 0LL, 0LL);
        v10 = (i + v7) >> 1;
        v8 = (char *)qword_140E2DC60 + 16 * v10;
        if ( v4 >= *(_QWORD *)v8 )
          break;
        if ( !v10 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v4, (ULONG_PTR)qword_140E2DC60, 0LL);
        v7 = v10 - 1;
      }
      if ( v10 == dword_140E2DC04 || v4 < *((_QWORD *)v8 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v7) >> 1;
  }
  v34 = *((_DWORD *)v8 + 2);
  v11 = *(_DWORD *)(v6 + 32);
  if ( (v11 & 0x8000000) == 0
    || v6 >= 0xFFFFDE0000000000uLL
    && v6 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
    && ((v29 = 0xAAAAAAAAAAAAAAABuLL * (v5 >> 4), v29 < qword_140E35C40) || v29 >= qword_140E35C40 + 2048)
    && ((BYTE2(v11) & 7) == 6
     || byte_140E3CC26
     && (v30 = v29 >> 9, *(_BYTE *)(qword_140E3D280 + 2 * v30))
     && *(_BYTE *)(qword_140E3D280 + 2 * v30) != 10) )
  {
    v12 = HIBYTE(v11) & 7;
  }
  else
  {
    v12 = 5;
  }
  if ( qword_140E2DC68 )
    v13 = *(_BYTE *)(MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v5 >> 4)) + 12);
  else
    v13 = 0;
  v14 = *(_QWORD *)(v32 + 16) + 57216LL * v34;
  if ( (int)v2 < 9 )
  {
    if ( (_DWORD)v2 == 8 )
      v31 = *(_BYTE *)(qword_140E3D280 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x220000000000LL) >> 4)) >> 9) + 1) & 0x7F;
    else
      v31 = 0;
    v33 = *(_QWORD *)(232 * v2 + v14 + 15768) + 88 * (v12 + 8LL * v31);
  }
  else
  {
    v33 = v14 + 88 * (v12 + 8LL * v13 + 59);
  }
  v15 = (8LL * (*(_DWORD *)(a1 + 36) & 0xFFE00000)) | (((*(_QWORD *)a1 >> 20) | *(_QWORD *)(a1 + 40) & 0xF80000000000000uLL) >> 20);
  v16 = (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(a1 + 36) & 0x1FFFFF) << 19);
  if ( v15 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v33 + 24) = v16;
  }
  else
  {
    v17 = 48 * v15 - 0x220000000000LL;
    v18 = *(_QWORD *)(v17 + 24);
    v19 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v17 + 24),
            (v16 << 40) ^ (v18 ^ (v16 << 40)) & 0xF80000FFFFFFFFFFuLL,
            v18);
    if ( v18 != v19 )
    {
      do
      {
        v28 = v19;
        v19 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v17 + 24),
                (v16 << 40) ^ (v19 ^ (v16 << 40)) & 0xF80000FFFFFFFFFFuLL,
                v19);
      }
      while ( v28 != v19 );
    }
    *(_DWORD *)(v17 + 36) = *(_DWORD *)(v17 + 36) & 0xFFE00000 | (v16 >> 19);
  }
  if ( v16 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v33 + 16) = v15;
  }
  else
  {
    v20 = 48 * v16 - 0x220000000000LL;
    v21 = *(_DWORD *)(v20 + 36);
    *(_QWORD *)v20 = (v15 << 40) | *(_QWORD *)v20 & 0xFFFFFFFFFFLL;
    v22 = v15;
    v23 = v15 << 20;
    *(_DWORD *)(v20 + 36) = v21 & 0x1FFFFF | ((unsigned int)(v22 >> 24) << 21);
    v24 = *(_QWORD *)(v20 + 40);
    v25 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v20 + 40),
            v23 ^ (v23 ^ v24) & 0xF07FFFFFFFFFFFFFuLL,
            v24);
    if ( v24 != v25 )
    {
      do
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v20 + 40),
                v23 ^ (v25 ^ v23) & 0xF07FFFFFFFFFFFFFuLL,
                v25);
      }
      while ( v26 != v25 );
    }
  }
  result = v33;
  _InterlockedDecrement64((volatile signed __int64 *)v33);
  if ( (_DWORD)v2 == 8 )
  {
    result = v32;
    _InterlockedDecrement64((volatile signed __int64 *)(v32 + 18304));
  }
  return result;
}
