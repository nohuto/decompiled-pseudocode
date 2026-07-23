/*
 * XREFs of SdbpRemoveSDBLookupEntry @ 0x140943848
 * Callers:
 *     SdbpCleanupUserSDBCache @ 0x14094480C (SdbpCleanupUserSDBCache.c)
 * Callees:
 *     AslFree @ 0x1409447E4 (AslFree.c)
 */

__int64 __fastcall SdbpRemoveSDBLookupEntry(__int64 a1, _QWORD **a2)
{
  if ( a2[1] == a2 )
  {
    *(_QWORD *)(a1 + 576) = 0LL;
  }
  else
  {
    if ( *(_QWORD ***)(a1 + 576) == a2 )
      *(_QWORD *)(a1 + 576) = *a2;
    *a2[1] = *a2;
    a1 = (__int64)*a2;
    (*a2)[1] = a2[1];
  }
  return AslFree(a1);
}
