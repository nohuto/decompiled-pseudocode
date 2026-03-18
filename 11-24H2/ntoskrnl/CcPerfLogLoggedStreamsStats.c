/*
 * XREFs of CcPerfLogLoggedStreamsStats @ 0x1404A88EC
 * Callers:
 *     CcLazyWriteScan @ 0x14043BAE8 (CcLazyWriteScan.c)
 *     CcLazyWriteScanVolume @ 0x1404B5560 (CcLazyWriteScanVolume.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1402CE230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1402CE360 (KeRcuReadLock.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x1404A8980 (CcPerfLogVolumeLogHandleInfo.c)
 */

void __fastcall CcPerfLogLoggedStreamsStats(__int64 a1, int a2)
{
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *i; // rbx

  v3 = a1;
  KeRcuReadLock(a1);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    if ( i[3] )
    {
      v5 = i[19];
      if ( v5 )
      {
        CcPerfLogVolumeLogHandleInfo(v5, v3, a2, i[17], i[6], i[9]);
        i[19] = 0LL;
      }
    }
  }
  KeRcuReadUnlock(v5, v4, v6);
}
