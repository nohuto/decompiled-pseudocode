/*
 * XREFs of CcScheduleLazyWriteScan @ 0x14043C9B0
 * Callers:
 *     CcWriteBehindPostProcess @ 0x1402A883C (CcWriteBehindPostProcess.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     CcNotifyOfMappedWrite @ 0x14036BCAC (CcNotifyOfMappedWrite.c)
 *     CcCoalescingCallBackHelper @ 0x14043C800 (CcCoalescingCallBackHelper.c)
 *     CcRescheduleLazyWriteScan @ 0x14043CD34 (CcRescheduleLazyWriteScan.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1404B4F00 (CcAddDirtyPagesToExternalCache.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     CcRegisterExternalCacheEx @ 0x14057A990 (CcRegisterExternalCacheEx.c)
 *     CcUpdateExternalCacheInfoEx @ 0x14057AD00 (CcUpdateExternalCacheInfoEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x14057AEF8 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeferWrite @ 0x14057B140 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x14057C948 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1402CF16C (CcNotifyWriteBehindInternal.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindVolume @ 0x14043CB2C (CcNotifyWriteBehindVolume.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall CcScheduleLazyWriteScan(_BYTE *a1, _BYTE *a2, char a3, char a4)
{
  char result; // al
  __int64 v7; // rdx
  _BYTE *v8; // rdi
  int v9; // edx
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
