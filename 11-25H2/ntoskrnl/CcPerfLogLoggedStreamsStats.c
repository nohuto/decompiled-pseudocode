/*
 * XREFs of CcPerfLogLoggedStreamsStats @ 0x1404A7D80
 * Callers:
 *     CcLazyWriteScanVolume @ 0x1404B5AC0 (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404BE770 (CcLazyWriteScan.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1403A5890 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1403A59C0 (KeRcuReadLock.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x1404A7E14 (CcPerfLogVolumeLogHandleInfo.c)
 */

void __fastcall CcPerfLogLoggedStreamsStats(int a1, int a2)
{
  __int64 *i; // rbx
  __int64 v5; // rcx

  KeRcuReadLock();
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    if ( i[3] )
    {
      v5 = i[19];
      if ( v5 )
      {
        CcPerfLogVolumeLogHandleInfo(v5, a1, a2, i[17], i[6], i[9]);
        i[19] = 0LL;
      }
    }
  }
  KeRcuReadUnlock();
}
