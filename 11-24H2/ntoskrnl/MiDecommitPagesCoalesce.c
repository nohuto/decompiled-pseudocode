/*
 * XREFs of MiDecommitPagesCoalesce @ 0x1404180A0
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404EF800 (MiDecommitFreePagesTail.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecommitPagesCoalesce(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r14d
  __int64 v5; // rbp
  unsigned int v6; // edi
  int v9; // r9d
  ULONG_PTR v10; // r8
  __int64 v11; // r11
  __int64 v13; // rbx
  int v14; // edx
  char *v15; // rax
  int i; // r10d
  int v17; // ecx
  int v18; // eax
  unsigned __int64 v19; // r11

  v3 = -1LL;
  v4 = a3 + 16;
  v5 = -1LL;
  v6 = a3;
  v9 = -1;
  while ( v6 < v4 )
  {
    v10 = (*(_QWORD *)(a2 + 8LL * v6 + 12384) >> 12) & 0xFFFFFFFFFFLL;
    if ( v10 > qword_140E2DD20 )
      return 0LL;
    v11 = 48 * v10;
    if ( (*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 || v10 != v3 && v3 != -1 )
      return 0LL;
    v3 = v10 + 1;
    v13 = v11 - 0x220000000000LL;
    if ( (unsigned __int16)*(_DWORD *)(v11 - 0x220000000000LL + 32) != 1 )
      return 0LL;
    v14 = dword_140E2DC04;
    if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
      || (v15 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v10 < *(_QWORD *)v15)
      || dword_140E2DC00 != dword_140E2DC04 && v10 >= *((_QWORD *)v15 + 2) )
    {
      for ( i = 0; ; i = v17 + 1 )
      {
        while ( 1 )
        {
          if ( v14 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v10, 0LL, 0LL);
          v17 = (i + v14) >> 1;
          v15 = (char *)qword_140E2DC60 + 16 * v17;
          if ( v10 >= *(_QWORD *)v15 )
            break;
          if ( !v17 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v10, (ULONG_PTR)qword_140E2DC60, 0LL);
          v14 = v17 - 1;
        }
        if ( v17 == dword_140E2DC04 || v10 < *((_QWORD *)v15 + 2) )
          break;
      }
      dword_140E2DC00 = (i + v14) >> 1;
    }
    v18 = *((_DWORD *)v15 + 2);
    if ( v9 == -1 )
    {
      v9 = v18;
    }
    else if ( v18 != v9 )
    {
      return 0LL;
    }
    if ( v5 == -1 )
    {
      v5 = *(_QWORD *)(v13 + 40) & 0xFFFFFFFFFFLL;
    }
    else if ( (*(_QWORD *)(v13 + 40) & 0xFFFFFFFFFFLL) != v5 )
    {
      return 0LL;
    }
    if ( *(__int64 *)(v13 + 40) < 0 )
      return 0LL;
    if ( byte_140E3CC26 )
    {
      v19 = (0xAAAAAAAAAAAAAAABuLL * (v11 >> 4)) >> 9;
      if ( *(_BYTE *)(qword_140E3D280 + 2 * v19) )
      {
        if ( *(_BYTE *)(qword_140E3D280 + 2 * v19) != 10 )
          return 0LL;
      }
    }
    if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL)) != a1 )
      return 0LL;
    ++v6;
  }
  return 1LL;
}
