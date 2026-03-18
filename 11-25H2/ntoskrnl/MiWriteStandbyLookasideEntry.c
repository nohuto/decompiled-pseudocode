/*
 * XREFs of MiWriteStandbyLookasideEntry @ 0x140215EE0
 * Callers:
 *     MiSynchronizeFastPageInsert @ 0x140217140 (MiSynchronizeFastPageInsert.c)
 *     MiRebuildStandbyLookasideList @ 0x1403ED9D0 (MiRebuildStandbyLookasideList.c)
 *     MiClearEntireStandbyLookasideList @ 0x1403EDF04 (MiClearEntireStandbyLookasideList.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402167C8 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall MiWriteStandbyLookasideEntry(ULONG_PTR *a1, int a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  int v11; // r9d
  int v12; // edx
  char *v13; // rax
  int i; // r8d
  int v15; // ecx
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned __int8 v18; // r15
  __int64 v19; // r10
  __int64 v20; // r11
  int j; // r8d
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 k; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  ULONG_PTR v28; // rcx
  ULONG_PTR v29; // rcx
  unsigned __int8 v30; // cl
  __int64 v31; // [rsp+30h] [rbp-78h]
  __int64 v32; // [rsp+38h] [rbp-70h]
  unsigned int v33; // [rsp+50h] [rbp-58h]
  __int128 v34; // [rsp+58h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp+18h]
  int v36; // [rsp+C8h] [rbp+20h]

  v3 = *a1;
  *a1 = a3;
  if ( v3 != -1LL && (v3 < qword_140E358C0 || v3 >= qword_140E358C0 + 2048) )
  {
    v6 = 48 * v3;
    v34 = 0LL;
    v7 = *(_QWORD *)(48 * v3 - 0x21FFFFFFFFF0LL);
    v8 = -9LL;
    if ( (v7 & 0x400) == 0 )
      v8 = -134217729LL;
    v31 = v7 & v8;
    v9 = v6 - 0x220000000000LL;
    if ( v3 >= qword_140E358C0 && v3 < qword_140E358C0 + 2048 )
    {
      v11 = 9;
    }
    else if ( byte_140E3C8A6 )
    {
      v10 = (0xAAAAAAAAAAAAAAABuLL * (v6 >> 4)) >> 9;
      if ( *(_BYTE *)(qword_140E3CF00 + 2 * v10) )
        v11 = *(unsigned __int8 *)(qword_140E3CF00 + 2 * v10) - 1;
      else
        v11 = 9;
    }
    else
    {
      v11 = 9;
    }
    v36 = v11;
    v32 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
    v12 = dword_140E2D884;
    if ( dword_140E2D880 > (unsigned int)dword_140E2D884
      || (v13 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v3 < *(_QWORD *)v13)
      || dword_140E2D880 != dword_140E2D884 && v3 >= *((_QWORD *)v13 + 2) )
    {
      for ( i = 0; ; i = v15 + 1 )
      {
        while ( 1 )
        {
          if ( v12 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v3, 0LL, 0LL);
          v15 = (i + v12) >> 1;
          v13 = (char *)qword_140E2D8E0 + 16 * v15;
          if ( v3 >= *(_QWORD *)v13 )
            break;
          if ( !v15 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v3, (ULONG_PTR)qword_140E2D8E0, 0LL);
          v12 = v15 - 1;
        }
        if ( v15 == dword_140E2D884 || v3 < *((_QWORD *)v13 + 2) )
          break;
      }
      v6 = 48 * v3;
      dword_140E2D880 = v15;
    }
    v16 = *(_DWORD *)(v9 + 32);
    v33 = *((_DWORD *)v13 + 2);
    if ( (v16 & 0x8000000) == 0
      || v9 >= 0xFFFFDE0000000000uLL
      && v9 < 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
      && ((v28 = 0xAAAAAAAAAAAAAAABuLL * (v6 >> 4), v28 < qword_140E358C0) || v28 >= qword_140E358C0 + 2048)
      && ((BYTE2(v16) & 7) == 6
       || byte_140E3C8A6
       && (v29 = v28 >> 9, *(_BYTE *)(qword_140E3CF00 + 2 * v29))
       && *(_BYTE *)(qword_140E3CF00 + 2 * v29) != 10) )
    {
      v17 = HIBYTE(v16) & 7;
    }
    else
    {
      v17 = 5;
    }
    if ( qword_140E2D8E8 )
    {
      v27 = MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v6 >> 4));
      v11 = v36;
      v18 = *(_BYTE *)(v27 + 12);
    }
    else
    {
      v18 = 0;
    }
    v19 = v32;
    v35 = 57216LL * v33;
    if ( v11 < 9 )
    {
      if ( v11 == 8 )
        BYTE8(v34) = *(_BYTE *)(qword_140E3CF00
                              + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4)) >> 9)
                              + 1) & 0x7F;
      else
        BYTE8(v34) = 0;
      v20 = v17;
    }
    else
    {
      v20 = v17;
    }
    if ( a2 != 3 )
    {
      for ( j = 0; j < 3; ++j )
      {
        if ( j )
        {
          if ( j == 1 )
          {
            v23 = v19 + (v20 << 9) + 11840;
          }
          else
          {
            v22 = *(_QWORD *)(v32 + 16);
            if ( v11 < 9 )
            {
              v30 = 0;
              if ( v11 == 8 )
                v30 = BYTE8(v34);
              v23 = *(_QWORD *)(v22 + 232LL * v36 + v35 + 15760) + ((v20 + 8LL * v30) << 9);
            }
            else
            {
              v23 = v35 + v22 + ((v20 + 8LL * v18 + 13) << 9);
            }
          }
        }
        else
        {
          v23 = v19 + (v20 << 9) + 7744;
        }
        if ( j != a2 )
        {
          for ( k = 0LL; (unsigned int)k < 0x40; k = (unsigned int)(k + 1) )
          {
            if ( v3 == *(_QWORD *)(v23 + 8 * k) )
              goto LABEL_43;
          }
          v19 = v32;
        }
        v11 = v36;
      }
    }
    *(_QWORD *)(48 * v3 - 0x21FFFFFFFFF0LL) = v31;
  }
LABEL_43:
  if ( a3 != -1LL && (a3 < qword_140E358C0 || a3 >= qword_140E358C0 + 2048) )
  {
    v25 = *(_QWORD *)(48 * a3 - 0x21FFFFFFFFF0LL);
    v26 = 8LL;
    if ( (v25 & 0x400) == 0 )
      v26 = 0x8000000LL;
    *(_QWORD *)(48 * a3 - 0x21FFFFFFFFF0LL) = v25 | v26;
  }
}
