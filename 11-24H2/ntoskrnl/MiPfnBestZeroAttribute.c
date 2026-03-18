/*
 * XREFs of MiPfnBestZeroAttribute @ 0x140400880
 * Callers:
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiZeroAndReleasePages @ 0x1403A0C10 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403A7BB8 (MiAllocateLargeZeroPages.c)
 *     MiZeroAndConvertPage @ 0x140400700 (MiZeroAndConvertPage.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x140414640 (MiUpdateCacheAttributeListsForPage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnBestZeroAttribute(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v4; // r9d
  ULONG_PTR v5; // r8
  char *v6; // rax
  int i; // edx
  int v8; // ecx

  v2 = a2;
  v4 = dword_140E2DAC4;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v6 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v5 < *(_QWORD *)v6)
    || dword_140E2DAC0 != dword_140E2DAC4 && v5 >= *((_QWORD *)v6 + 2) )
  {
    for ( i = 0; ; i = v8 + 1 )
    {
      while ( 1 )
      {
        if ( v4 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v5, 0LL, 0LL);
        v8 = (i + v4) >> 1;
        v6 = (char *)qword_140E2DB20 + 16 * v8;
        if ( v5 >= *(_QWORD *)v6 )
          break;
        if ( !v8 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v5, (ULONG_PTR)qword_140E2DB20, 0LL);
        v4 = v8 - 1;
      }
      if ( v8 == dword_140E2DAC4 || v5 < *((_QWORD *)v6 + 2) )
        break;
    }
    dword_140E2DAC0 = (i + v4) >> 1;
  }
  return *(unsigned int *)(qword_140E2DAF8
                         + 384LL * *((unsigned int *)v6 + 2)
                         + 4 * (v2 + 4 * ((unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6))
                         + 120);
}
