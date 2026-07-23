/*
 * XREFs of CcScheduleLazyWriteScan @ 0x140264F40
 * Callers:
 *     CcCoalescingCallBackHelper @ 0x140264D90 (CcCoalescingCallBackHelper.c)
 *     CcRescheduleLazyWriteScan @ 0x1402652C4 (CcRescheduleLazyWriteScan.c)
 *     CcDecrementOpenCount @ 0x140279504 (CcDecrementOpenCount.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     CcNotifyOfMappedWrite @ 0x1402EDA4C (CcNotifyOfMappedWrite.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1404AF700 (CcAddDirtyPagesToExternalCache.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcRegisterExternalCacheEx @ 0x140577E20 (CcRegisterExternalCacheEx.c)
 *     CcUpdateExternalCacheInfoEx @ 0x140578190 (CcUpdateExternalCacheInfoEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140578388 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeferWrite @ 0x1405785D0 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x140579DD8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1402638AC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1402650BC (CcNotifyWriteBehindVolume.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
          result = KiSetTimerEx((int)a2 + 920, CcFirstDelay, 0, 0, 0LL);
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
          result = KiSetTimerEx((int)a1 + 984, CcFirstDelay, 0, 0, 0LL);
        }
      }
      if ( !a1[1292] )
        *v10 = 1;
    }
  }
  return result;
}
