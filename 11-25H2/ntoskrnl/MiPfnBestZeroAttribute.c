/*
 * XREFs of MiPfnBestZeroAttribute @ 0x1403F8C70
 * Callers:
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 *     MiZeroAndConvertPage @ 0x1403F8AEC (MiZeroAndConvertPage.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x140416EAC (MiUpdateCacheAttributeListsForPage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnBestZeroAttribute(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v4; // r9d
  ULONG_PTR v5; // r8
  char *v6; // rax
  int i; // ecx
  int v8; // edx

  v2 = a2;
  v4 = dword_140E2D884;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( dword_140E2D880 > (unsigned int)dword_140E2D884
    || (v6 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v5 < *(_QWORD *)v6)
    || dword_140E2D880 != dword_140E2D884 && v5 >= *((_QWORD *)v6 + 2) )
  {
    for ( i = 0; ; i = v8 + 1 )
    {
      while ( 1 )
      {
        if ( v4 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v5, 0LL, 0LL);
        v8 = (i + v4) >> 1;
        v6 = (char *)qword_140E2D8E0 + 16 * v8;
        if ( v5 >= *(_QWORD *)v6 )
          break;
        if ( !v8 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v5, (ULONG_PTR)qword_140E2D8E0, 0LL);
        v4 = v8 - 1;
      }
      if ( v8 == dword_140E2D884 || v5 < *((_QWORD *)v6 + 2) )
        break;
    }
    dword_140E2D880 = (i + v4) >> 1;
  }
  return *(unsigned int *)(qword_140E2D8B8
                         + 384LL * *((unsigned int *)v6 + 2)
                         + 4 * (v2 + 4 * ((unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6))
                         + 120);
}
