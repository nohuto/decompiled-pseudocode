/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x1402638AC
 * Callers:
 *     CcNotifyWriteBehindEx @ 0x140262B14 (CcNotifyWriteBehindEx.c)
 *     CcCoalescingCallBackHelper @ 0x140264D90 (CcCoalescingCallBackHelper.c)
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     CcChargeDirtyPagesInternal @ 0x140442A90 (CcChargeDirtyPagesInternal.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcNotifyWriteBehindHelper @ 0x140577900 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x14057A020 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x140263914 (CcForEachPrivateVolumeCacheMap.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

LONG __fastcall CcNotifyWriteBehindInternal(__int64 a1, int a2)
{
  LONG result; // eax
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( CcInitializationComplete && *(_BYTE *)(a1 + 1364) )
  {
    if ( CcEnablePerVolumeLazyWriter )
    {
      return CcForEachPrivateVolumeCacheMap(a1, CcNotifyWriteBehindAllVolumesHelper, &v4);
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
