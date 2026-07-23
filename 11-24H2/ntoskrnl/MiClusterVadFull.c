/*
 * XREFs of MiClusterVadFull @ 0x140449CA4
 * Callers:
 *     MiTrimSharedPage @ 0x14025A33C (MiTrimSharedPage.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiClusterVadFull(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r9
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // r10
  unsigned __int64 i; // rcx
  unsigned __int64 v12; // r10

  v5 = (_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( a3 )
  {
    v12 = *(_QWORD *)(a3 + 8);
    if ( v6 < v12 || v6 >= v12 - 8LL * (*(_DWORD *)(a3 + 52) & 0x3FFFFFFF) + 8LL * *(unsigned int *)(a3 + 44) )
      return 0LL;
    v7 = (__int64)(v6 - v12) >> 3;
  }
  else
  {
    v7 = (v6 >> 3) & 0x1FF;
  }
  if ( (v7 & (a2 - 1)) != ((0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) & (a2 - 1)) )
    return 0LL;
  v8 = v6 + 8 * (a2 - 1);
  v9 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
  for ( i = a1 + 48 * a2 - 48; (unsigned __int64)(v5 - 1) < i; i -= 48LL )
  {
    if ( (v5[4] & 0xFFFFFFFFFFLL) != v9
      || (*(_QWORD *)(i + 40) & 0xFFFFFFFFFFLL) != v9
      || (*v5 | 0x8000000000000000uLL) != v6
      || (*(_QWORD *)(i + 8) | 0x8000000000000000uLL) != v8 )
    {
      return 0LL;
    }
    v5 += 6;
    v6 += 8LL;
    v8 -= 8LL;
  }
  return 1LL;
}
