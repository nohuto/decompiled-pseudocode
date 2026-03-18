/*
 * XREFs of KiProcessNMI @ 0x1405B7670
 * Callers:
 *     KxNmiInterrupt @ 0x1406B6C40 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403E9E20 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403E9E90 (KeInterlockedClearProcessorAffinityEx.c)
 *     KxTryToAcquireSpinLock @ 0x1404633C8 (KxTryToAcquireSpinLock.c)
 *     HalHandleNMI @ 0x140543B40 (HalHandleNMI.c)
 *     KiCheckForFreezeExecution @ 0x1405B3190 (KiCheckForFreezeExecution.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     KiFlushCurrentRsb @ 0x1406BF940 (KiFlushCurrentRsb.c)
 */

char __fastcall KiProcessNMI(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  unsigned int Number; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rbx
  char v18; // di
  char v19; // al

  guard_dispatch_icall_no_overrides(0LL, a2, a3, a4);
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    KiFlushCurrentRsb(v6, v5, v7, v8);
  _mm_lfence();
  LOBYTE(v9) = KiCheckForFreezeExecution(a1);
  if ( !(_BYTE)v9 )
  {
    Number = KeGetCurrentPrcb()->Number;
    v9 = KeInterlockedSetProcessorAffinityEx((__int64)KiNmiInProgress, Number);
    if ( !v9 )
    {
      guard_dispatch_icall_no_overrides(1LL, v11, v12, v13);
      v17 = KiNmiCallbackListHead;
      v18 = 0;
      if ( !KiNmiCallbackListHead )
        goto LABEL_10;
      do
      {
        LOBYTE(v14) = v18;
        v19 = guard_dispatch_icall_no_overrides(v17[2], v14, v15, v16);
        v17 = (_QWORD *)*v17;
        v18 |= v19;
      }
      while ( v17 );
      if ( !v18 )
      {
LABEL_10:
        while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&KiNMILock) )
        {
          do
            KiCheckForFreezeExecution(a1);
          while ( KiNMILock );
        }
        _InterlockedCompareExchange(&KiBugCheckActive, 1, 0);
        HalHandleNMI(0LL);
        _InterlockedCompareExchange(&KiBugCheckActive, 0, 1);
        KxReleaseSpinLock(&KiNMILock);
      }
      LOBYTE(v9) = KeInterlockedClearProcessorAffinityEx((__int64)KiNmiInProgress, Number);
    }
  }
  return v9;
}
