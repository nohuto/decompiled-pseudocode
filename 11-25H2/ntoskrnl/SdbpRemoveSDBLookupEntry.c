/*
 * XREFs of SdbpRemoveSDBLookupEntry @ 0x14082B458
 * Callers:
 *     SdbpCleanupUserSDBCache @ 0x14082AD5C (SdbpCleanupUserSDBCache.c)
 * Callees:
 *     AslFree @ 0x14082AD34 (AslFree.c)
 */

void __fastcall SdbpRemoveSDBLookupEntry(__int64 a1, __int64 *a2)
{
  if ( (__int64 *)a2[1] == a2 )
  {
    *(_QWORD *)(a1 + 576) = 0LL;
  }
  else
  {
    if ( *(__int64 **)(a1 + 576) == a2 )
      *(_QWORD *)(a1 + 576) = *a2;
    *(_QWORD *)a2[1] = *a2;
    a1 = *a2;
    *(_QWORD *)(*a2 + 8) = a2[1];
  }
  AslFree(a1, a2);
}
