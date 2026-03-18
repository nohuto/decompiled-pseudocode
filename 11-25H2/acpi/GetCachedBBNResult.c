/*
 * XREFs of GetCachedBBNResult @ 0x140015FE8
 * Callers:
 *     GetPciAddressWorker @ 0x1400150D0 (GetPciAddressWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCachedBBNResult(_QWORD *a1, _DWORD *a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  unsigned int v6; // edi
  _QWORD *v7; // rcx
  bool v8; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
  v5 = gBBNResultCacheListHead;
  v6 = -1073741275;
  while ( (__int64 *)v5 != &gBBNResultCacheListHead )
  {
    v7 = *(_QWORD **)(v5 + 16);
    if ( v7 )
    {
      if ( !a1 )
        goto LABEL_10;
      v8 = *v7 == *a1;
    }
    else
    {
      v8 = a1 == 0LL;
    }
    if ( v8 )
    {
      v6 = 0x40000000;
      *a2 = *(_DWORD *)(v5 + 24);
      break;
    }
LABEL_10:
    v5 = *(_QWORD *)v5;
  }
  KeReleaseSpinLock(&gBBNResultCacheLock, v4);
  return v6;
}
