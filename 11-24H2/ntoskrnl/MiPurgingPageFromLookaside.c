/*
 * XREFs of MiPurgingPageFromLookaside @ 0x140223400
 * Callers:
 *     MiSynchronizeFastPageInsert @ 0x140301300 (MiSynchronizeFastPageInsert.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiPurgingPageFromLookaside(int a1, ULONG_PTR a2)
{
  __int64 v2; // r8
  int v4; // r10d
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  int v9; // edx
  int v10; // r13d
  int v11; // ecx
  char *v12; // rax
  int i; // edx
  int v14; // r8d
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned __int8 v17; // r14
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // r11
  unsigned __int64 result; // rax
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 j; // r8
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  ULONG_PTR v27; // rcx
  unsigned __int8 v28; // dl
  __int64 v29; // [rsp+30h] [rbp-68h]
  unsigned int v30; // [rsp+48h] [rbp-50h]
  __int128 v31; // [rsp+50h] [rbp-48h]
  __int64 v33; // [rsp+A8h] [rbp+10h]
  __int64 v34; // [rsp+B0h] [rbp+18h]

  v2 = 48 * a2;
  v33 = 48 * a2;
  v4 = a1;
  v31 = 0LL;
  v5 = *(_QWORD *)(48 * a2 - 0x21FFFFFFFFF0LL);
  v6 = -9LL;
  if ( (v5 & 0x400) == 0 )
    v6 = -134217729LL;
  v34 = v5 & v6;
  v7 = v2 - 0x220000000000LL;
  if ( a2 >= qword_140E35C40 && a2 < qword_140E35C40 + 2048 )
  {
    v10 = 9;
  }
  else if ( byte_140E3CC26 )
  {
    v8 = (0xAAAAAAAAAAAAAAABuLL * (v2 >> 4)) >> 9;
    v9 = *(unsigned __int8 *)(qword_140E3D280 + 2 * v8);
    if ( *(_BYTE *)(qword_140E3D280 + 2 * v8) )
      v10 = v9 - 1;
    else
      v10 = v9 + 9;
  }
  else
  {
    v10 = 9;
  }
  v29 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  v11 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v12 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, a2 < *(_QWORD *)v12)
    || dword_140E2DC00 != dword_140E2DC04 && a2 >= *((_QWORD *)v12 + 2) )
  {
    for ( i = 0; ; i = v14 + 1 )
    {
      while ( 1 )
      {
        if ( v11 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, a2, 0LL, 0LL);
        v14 = (i + v11) >> 1;
        v12 = (char *)qword_140E2DC60 + 16 * v14;
        if ( a2 >= *(_QWORD *)v12 )
          break;
        if ( !v14 )
          KeBugCheckEx(0x1Au, 0x5180uLL, a2, (ULONG_PTR)qword_140E2DC60, 0LL);
        v11 = v14 - 1;
      }
      if ( v14 == dword_140E2DC04 || a2 < *((_QWORD *)v12 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v11) >> 1;
    v2 = v33;
  }
  v15 = *(_DWORD *)(v7 + 32);
  v30 = *((_DWORD *)v12 + 2);
  if ( (v15 & 0x8000000) == 0
    || v7 >= 0xFFFFDE0000000000uLL
    && v7 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
    && ((v26 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4), v26 < qword_140E35C40) || v26 >= qword_140E35C40 + 2048)
    && ((BYTE2(v15) & 7) == 6
     || byte_140E3CC26
     && (v27 = v26 >> 9, *(_BYTE *)(qword_140E3D280 + 2 * v27))
     && *(_BYTE *)(qword_140E3D280 + 2 * v27) != 10) )
  {
    v16 = HIBYTE(v15) & 7;
  }
  else
  {
    v16 = 5;
  }
  if ( qword_140E2DC68 )
  {
    v25 = MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v2 >> 4));
    v4 = a1;
    v17 = *(_BYTE *)(v25 + 12);
  }
  else
  {
    v17 = 0;
  }
  v18 = v29;
  v19 = 57216LL * v30;
  if ( v10 < 9 )
  {
    if ( v10 == 8 )
      BYTE8(v31) = *(_BYTE *)(qword_140E3D280
                            + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 + 0x220000000000LL) >> 4)) >> 9)
                            + 1) & 0x7F;
    else
      BYTE8(v31) = 0;
    v20 = v16;
  }
  else
  {
    v20 = v16;
  }
  if ( v4 != 3 )
  {
    for ( result = 0LL; (int)result < 3; result = (unsigned int)(result + 1) )
    {
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == 1 )
        {
          v23 = v18 + (v20 << 9) + 11840;
        }
        else
        {
          v22 = *(_QWORD *)(v29 + 16);
          if ( v10 < 9 )
          {
            v28 = 0;
            if ( v10 == 8 )
              v28 = BYTE8(v31);
            v23 = *(_QWORD *)(v22 + 232LL * v10 + v19 + 15760) + ((v20 + 8LL * v28) << 9);
          }
          else
          {
            v23 = v19 + v22 + ((v20 + 8LL * v17 + 13) << 9);
          }
          v4 = a1;
        }
      }
      else
      {
        v23 = v18 + (v20 << 9) + 7744;
      }
      if ( (_DWORD)result != v4 )
      {
        for ( j = 0LL; (unsigned int)j < 0x40; j = (unsigned int)(j + 1) )
        {
          if ( a2 == *(_QWORD *)(v23 + 8 * j) )
            return result;
        }
        v18 = v29;
      }
    }
  }
  result = 0xFFFFDE0000000010uLL;
  *(_QWORD *)(v33 - 0x21FFFFFFFFF0LL) = v34;
  return result;
}
