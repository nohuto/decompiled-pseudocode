/*
 * XREFs of MiWriteStandbyLookasideEntry @ 0x140223D70
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x1403E73E0 (MiRebuildStandbyLookasideList.c)
 *     MiClearEntireStandbyLookasideList @ 0x1403E7914 (MiClearEntireStandbyLookasideList.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MiWriteStandbyLookasideEntry(ULONG_PTR *a1, int a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  int v10; // r9d
  int v11; // ecx
  char *v12; // rax
  int i; // edx
  int v14; // r8d
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned __int8 v17; // r15
  __int64 v18; // r10
  __int64 v19; // r13
  __int64 v20; // r11
  int j; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 k; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  ULONG_PTR v28; // rcx
  ULONG_PTR v29; // rcx
  unsigned __int8 v30; // dl
  __int64 v31; // [rsp+30h] [rbp-68h]
  unsigned int v32; // [rsp+48h] [rbp-50h]
  __int128 v33; // [rsp+50h] [rbp-48h]
  __int64 v35; // [rsp+B0h] [rbp+18h]
  int v36; // [rsp+B8h] [rbp+20h]

  v3 = *a1;
  *a1 = a3;
  if ( v3 != -1LL && (v3 < qword_140E35C40 || v3 >= qword_140E35C40 + 2048) )
  {
    v5 = 48 * v3;
    v33 = 0LL;
    v6 = *(_QWORD *)(48 * v3 - 0x21FFFFFFFFF0LL);
    v7 = -9LL;
    if ( (v6 & 0x400) == 0 )
      v7 = -134217729LL;
    v35 = v6 & v7;
    v8 = v5 - 0x220000000000LL;
    if ( v3 >= qword_140E35C40 && v3 < qword_140E35C40 + 2048 )
    {
      v10 = 9;
    }
    else if ( byte_140E3CC26 )
    {
      v9 = (0xAAAAAAAAAAAAAAABuLL * (v5 >> 4)) >> 9;
      if ( *(_BYTE *)(qword_140E3D280 + 2 * v9) )
        v10 = *(unsigned __int8 *)(qword_140E3D280 + 2 * v9) - 1;
      else
        v10 = 9;
    }
    else
    {
      v10 = 9;
    }
    v36 = v10;
    v31 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
    v11 = dword_140E2DC04;
    if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
      || (v12 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v3 < *(_QWORD *)v12)
      || dword_140E2DC00 != dword_140E2DC04 && v3 >= *((_QWORD *)v12 + 2) )
    {
      for ( i = 0; ; i = v14 + 1 )
      {
        while ( 1 )
        {
          if ( v11 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v3, 0LL, 0LL);
          v14 = (i + v11) >> 1;
          v12 = (char *)qword_140E2DC60 + 16 * v14;
          if ( v3 >= *(_QWORD *)v12 )
            break;
          if ( !v14 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v3, (ULONG_PTR)qword_140E2DC60, 0LL);
          v11 = v14 - 1;
        }
        if ( v14 == dword_140E2DC04 || v3 < *((_QWORD *)v12 + 2) )
          break;
      }
      dword_140E2DC00 = (i + v11) >> 1;
      v5 = 48 * v3;
    }
    v15 = *(_DWORD *)(v8 + 32);
    v32 = *((_DWORD *)v12 + 2);
    if ( (v15 & 0x8000000) == 0
      || v8 >= 0xFFFFDE0000000000uLL
      && v8 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
      && ((v28 = 0xAAAAAAAAAAAAAAABuLL * (v5 >> 4), v28 < qword_140E35C40) || v28 >= qword_140E35C40 + 2048)
      && ((BYTE2(v15) & 7) == 6
       || byte_140E3CC26
       && (v29 = v28 >> 9, *(_BYTE *)(qword_140E3D280 + 2 * v29))
       && *(_BYTE *)(qword_140E3D280 + 2 * v29) != 10) )
    {
      v16 = HIBYTE(v15) & 7;
    }
    else
    {
      v16 = 5;
    }
    if ( qword_140E2DC68 )
    {
      v27 = MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v5 >> 4));
      v10 = v36;
      v17 = *(_BYTE *)(v27 + 12);
    }
    else
    {
      v17 = 0;
    }
    v18 = v31;
    v19 = 57216LL * v32;
    if ( v10 < 9 )
    {
      if ( v10 == 8 )
        BYTE8(v33) = *(_BYTE *)(qword_140E3D280
                              + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4)) >> 9)
                              + 1) & 0x7F;
      else
        BYTE8(v33) = 0;
      v20 = v16;
    }
    else
    {
      v20 = v16;
    }
    if ( a2 != 3 )
    {
      for ( j = 0; j < 3; ++j )
      {
        if ( j )
        {
          if ( j == 1 )
          {
            v23 = v18 + (v20 << 9) + 11840;
          }
          else
          {
            v22 = *(_QWORD *)(v31 + 16);
            if ( v10 < 9 )
            {
              v30 = 0;
              if ( v10 == 8 )
                v30 = BYTE8(v33);
              v23 = *(_QWORD *)(v22 + 232LL * v36 + v19 + 15760) + ((v20 + 8LL * v30) << 9);
            }
            else
            {
              v23 = v19 + v22 + ((v20 + 8LL * v17 + 13) << 9);
            }
          }
        }
        else
        {
          v23 = v18 + (v20 << 9) + 7744;
        }
        if ( j != a2 )
        {
          for ( k = 0LL; (unsigned int)k < 0x40; k = (unsigned int)(k + 1) )
          {
            if ( v3 == *(_QWORD *)(v23 + 8 * k) )
              goto LABEL_43;
          }
          v18 = v31;
        }
        v10 = v36;
      }
    }
    *(_QWORD *)(48 * v3 - 0x21FFFFFFFFF0LL) = v35;
  }
LABEL_43:
  if ( a3 != -1LL && (a3 < qword_140E35C40 || a3 >= qword_140E35C40 + 2048) )
  {
    v25 = *(_QWORD *)(48 * a3 - 0x21FFFFFFFFF0LL);
    v26 = 8LL;
    if ( (v25 & 0x400) == 0 )
      v26 = 0x8000000LL;
    *(_QWORD *)(48 * a3 - 0x21FFFFFFFFF0LL) = v25 | v26;
  }
}
