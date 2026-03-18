/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x1402CF16C
 * Callers:
 *     CcNotifyWriteBehindEx @ 0x1402CF21C (CcNotifyWriteBehindEx.c)
 *     CcCoalescingCallBackHelper @ 0x14043C800 (CcCoalescingCallBackHelper.c)
 *     CcScheduleLazyWriteScan @ 0x14043C9B0 (CcScheduleLazyWriteScan.c)
 *     CcChargeDirtyPagesInternal @ 0x14044B950 (CcChargeDirtyPagesInternal.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcNotifyWriteBehindHelper @ 0x14057A470 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x14057CB90 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1402CE9E0 (CcForEachPrivateVolumeCacheMap.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall CcNotifyWriteBehindInternal(__int64 a1, int a2)
{
  char result; // al
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( CcInitializationComplete && *(_BYTE *)(a1 + 1364) )
  {
    if ( CcEnablePerVolumeLazyWriter )
    {
      return CcForEachPrivateVolumeCacheMap(a1, (__int64)CcNotifyWriteBehindAllVolumesHelper, (__int64)&v4);
    }
    else
    {
      if ( (a2 & 1) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 880), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 2) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 904), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 4) != 0 )
      {
        if ( !*(_BYTE *)(a1 + 1048) )
          KeBugCheckEx(0x34u, 0x12B4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        result = KiSetTimerEx((int)a1 + 984, 0, 0, 0, 0LL);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 8) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 0x10) != 0 )
        return KeSetEvent((PRKEVENT)(a1 + 952), 0, 0);
    }
  }
  return result;
}
