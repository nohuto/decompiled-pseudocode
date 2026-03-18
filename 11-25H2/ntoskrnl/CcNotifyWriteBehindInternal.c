/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x1403A724C
 * Callers:
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     CcNotifyWriteBehindEx @ 0x1403A7590 (CcNotifyWriteBehindEx.c)
 *     CcCoalescingCallBackHelper @ 0x1403A7800 (CcCoalescingCallBackHelper.c)
 *     CcScheduleLazyWriteScan @ 0x1403A79B0 (CcScheduleLazyWriteScan.c)
 *     CcChargeDirtyPagesInternal @ 0x14044C490 (CcChargeDirtyPagesInternal.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcNotifyWriteBehindHelper @ 0x140577170 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x140579880 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403A6590 (CcForEachPrivateVolumeCacheMap.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall CcNotifyWriteBehindInternal(__int64 a1, char a2)
{
  char result; // al
  char v4; // [rsp+48h] [rbp+10h]

  v4 = a2;
  if ( CcInitializationComplete && *(_BYTE *)(a1 + 1364) )
  {
    if ( CcEnablePerVolumeLazyWriter )
    {
      return CcForEachPrivateVolumeCacheMap(a1);
    }
    else
    {
      if ( (a2 & 1) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 880), 0, 0);
        a2 = v4;
      }
      if ( (a2 & 2) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 904), 0, 0);
        a2 = v4;
      }
      if ( (a2 & 4) != 0 )
      {
        if ( !*(_BYTE *)(a1 + 1048) )
          KeBugCheckEx(0x34u, 0x12B4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        result = KiSetTimerEx(a1 + 984, 0LL, 0, 0, 0LL);
        a2 = v4;
      }
      if ( (a2 & 8) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
        a2 = v4;
      }
      if ( (a2 & 0x10) != 0 )
        return KeSetEvent((PRKEVENT)(a1 + 952), 0, 0);
    }
  }
  return result;
}
