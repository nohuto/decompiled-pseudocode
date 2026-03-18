/*
 * XREFs of CcNotifyWriteBehindVolume @ 0x1403A7B2C
 * Callers:
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     CcCoalescingCallBackHelper @ 0x1403A7800 (CcCoalescingCallBackHelper.c)
 *     CcNotifyWriteBehindAllVolumesHelper @ 0x1403A7970 (CcNotifyWriteBehindAllVolumesHelper.c)
 *     CcScheduleLazyWriteScan @ 0x1403A79B0 (CcScheduleLazyWriteScan.c)
 *     CcChargeDirtyPagesInternal @ 0x14044C490 (CcChargeDirtyPagesInternal.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404DF850 (CcAsyncLazywriteWorkerThread.c)
 *     CcNotifyWriteBehindHelper @ 0x140577170 (CcNotifyWriteBehindHelper.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
