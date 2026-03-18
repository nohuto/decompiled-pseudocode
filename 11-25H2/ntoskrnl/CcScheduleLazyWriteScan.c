/*
 * XREFs of CcScheduleLazyWriteScan @ 0x1403A79B0
 * Callers:
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     CcCoalescingCallBackHelper @ 0x1403A7800 (CcCoalescingCallBackHelper.c)
 *     CcRescheduleLazyWriteScan @ 0x1403A7D34 (CcRescheduleLazyWriteScan.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 *     CcNotifyOfMappedWrite @ 0x14040ECD8 (CcNotifyOfMappedWrite.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1404B5460 (CcAddDirtyPagesToExternalCache.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcRegisterExternalCacheEx @ 0x140577690 (CcRegisterExternalCacheEx.c)
 *     CcUpdateExternalCacheInfoEx @ 0x1405779F0 (CcUpdateExternalCacheInfoEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140577BE8 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x140579638 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x1403A724C (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403A7B2C (CcNotifyWriteBehindVolume.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall CcScheduleLazyWriteScan(_BYTE *a1, _BYTE *a2, char a3, char a4)
{
  char result; // al
  __int64 v7; // rdx
  _BYTE *v8; // rdi
  char v9; // dl
  _BYTE *v10; // rbx

  if ( CcEnablePerVolumeLazyWriter )
  {
    result = a2[1172];
    if ( !result || a3 )
    {
      if ( a4 )
      {
        v7 = 8LL;
      }
      else
      {
        result = -result;
        v7 = result != 0 ? 16 : 4;
      }
      if ( a3 )
      {
        result = CcNotifyWriteBehindVolume(a2, v7);
        v8 = a2 + 985;
      }
      else
      {
        v8 = a2 + 985;
        if ( !a2[985] )
        {
          if ( !a2[984] )
            KeBugCheckEx(0x34u, 0x7CBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          result = KiSetTimerEx((__int64)(a2 + 920), CcFirstDelay, 0, 0, 0LL);
        }
      }
      if ( !a2[1172] )
        *v8 = 1;
    }
  }
  else
  {
    result = a1[1292];
    if ( !result || a3 )
    {
      if ( a4 )
      {
        v9 = 8;
      }
      else
      {
        result = -result;
        v9 = result != 0 ? 16 : 4;
      }
      if ( a3 )
      {
        result = CcNotifyWriteBehindInternal((__int64)a1, v9);
        v10 = a1 + 1049;
      }
      else
      {
        v10 = a1 + 1049;
        if ( !a1[1049] )
        {
          if ( !a1[1048] )
            KeBugCheckEx(0x34u, 0x371uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          result = KiSetTimerEx((__int64)(a1 + 984), CcFirstDelay, 0, 0, 0LL);
        }
      }
      if ( !a1[1292] )
        *v10 = 1;
    }
  }
  return result;
}
