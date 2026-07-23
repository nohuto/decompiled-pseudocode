/*
 * XREFs of CmpDoesKeyHaveOpenSubkeys @ 0x140964588
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BB3C0 (CmpTryToRundownHive.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpEnumerateKcbCacheBucket @ 0x1409646F8 (CmpEnumerateKcbCacheBucket.c)
 *     CmpCleanUpKCBCacheTable @ 0x14096478C (CmpCleanUpKCBCacheTable.c)
 */

bool __fastcall CmpDoesKeyHaveOpenSubkeys(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  int v4; // eax
  int v5; // ecx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 32);
  v7 = a1;
  v8 = 0LL;
  CmpCleanUpKCBCacheTable(v1);
  if ( *(_QWORD *)a1 != 1LL && ((*(_DWORD *)(a1 + 184) & 0x40000) == 0 || *(_QWORD *)a1 != 2LL) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 1656); i = (unsigned int)(v5 + 1) )
    {
      v4 = CmpEnumerateKcbCacheBucket(a1, *(_QWORD *)(v1 + 1648) + 24 * i, CmpDoesKeyHaveOpenSubkeysWorker, &v7);
      if ( v4 == 1 )
        break;
      v5 = i - 1;
      if ( v4 != 2 )
        v5 = i;
    }
  }
  return (_DWORD)v8 != 0;
}
