/*
 * XREFs of CcNotifyWriteBehindVolume @ 0x1402650BC
 * Callers:
 *     CcCoalescingCallBackHelper @ 0x140264D90 (CcCoalescingCallBackHelper.c)
 *     CcNotifyWriteBehindAllVolumesHelper @ 0x140264F00 (CcNotifyWriteBehindAllVolumesHelper.c)
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     CcChargeDirtyPagesInternal @ 0x140442A90 (CcChargeDirtyPagesInternal.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404D8960 (CcAsyncLazywriteWorkerThread.c)
 *     CcNotifyWriteBehindHelper @ 0x140577900 (CcNotifyWriteBehindHelper.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
      result = KiSetTimerEx((int)a1 + 920, 0, 0, 0, 0LL);
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
