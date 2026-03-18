/*
 * XREFs of CcNotifyWriteBehindVolume @ 0x14043CB2C
 * Callers:
 *     CcCoalescingCallBackHelper @ 0x14043C800 (CcCoalescingCallBackHelper.c)
 *     CcNotifyWriteBehindAllVolumesHelper @ 0x14043C970 (CcNotifyWriteBehindAllVolumesHelper.c)
 *     CcScheduleLazyWriteScan @ 0x14043C9B0 (CcScheduleLazyWriteScan.c)
 *     CcChargeDirtyPagesInternal @ 0x14044B950 (CcChargeDirtyPagesInternal.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404DEF40 (CcAsyncLazywriteWorkerThread.c)
 *     CcNotifyWriteBehindHelper @ 0x14057A470 (CcNotifyWriteBehindHelper.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

LONG __fastcall CcNotifyWriteBehindVolume(__int64 a1, char a2)
{
  LONG result; // eax

  if ( *(_BYTE *)(a1 + 1173) && *(_BYTE *)(a1 + 1236) )
  {
    if ( (a2 & 1) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
    if ( (a2 & 2) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
    if ( (a2 & 4) != 0 )
    {
      if ( !*(_BYTE *)(a1 + 984) )
        KeBugCheckEx(0x34u, 0x756uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      result = KiSetTimerEx(a1 + 920, 0LL, 0, 0, 0LL);
    }
    if ( (a2 & 8) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 864), 0, 0);
    if ( (a2 & 0x10) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
    if ( (a2 & 0x20) != 0 )
      return KeSetEvent((PRKEVENT)(a1 + 1576), 0, 0);
  }
  return result;
}
