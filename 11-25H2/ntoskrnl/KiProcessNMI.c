/*
 * XREFs of KiProcessNMI @ 0x1405B37B0
 * Callers:
 *     KxNmiInterrupt @ 0x1406AB940 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403E07B0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403E0820 (KeInterlockedClearProcessorAffinityEx.c)
 *     KxTryToAcquireSpinLock @ 0x140464068 (KxTryToAcquireSpinLock.c)
 *     HalHandleNMI @ 0x140541310 (HalHandleNMI.c)
 *     KiCheckForFreezeExecution @ 0x1405AF800 (KiCheckForFreezeExecution.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     KiFlushCurrentRsb @ 0x1406B4640 (KiFlushCurrentRsb.c)
 */

char __fastcall KiProcessNMI(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // eax
  unsigned int Number; // esi
  _QWORD *v8; // rbx
  char v9; // di
  char v10; // al

  guard_dispatch_icall_no_overrides(0LL);
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    KiFlushCurrentRsb(v3, v2, v4, v5);
  _mm_lfence();
  LOBYTE(v6) = KiCheckForFreezeExecution(a1);
  if ( !(_BYTE)v6 )
  {
    Number = KeGetCurrentPrcb()->Number;
    v6 = KeInterlockedSetProcessorAffinityEx((__int64)KiNmiInProgress, Number);
    if ( !v6 )
    {
      guard_dispatch_icall_no_overrides(1LL);
      v8 = KiNmiCallbackListHead;
      v9 = 0;
      if ( !KiNmiCallbackListHead )
        goto LABEL_10;
      do
      {
        v10 = guard_dispatch_icall_no_overrides(v8[2]);
        v8 = (_QWORD *)*v8;
        v9 |= v10;
      }
      while ( v8 );
      if ( !v9 )
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
      LOBYTE(v6) = KeInterlockedClearProcessorAffinityEx((__int64)KiNmiInProgress, Number);
    }
  }
  return v6;
}
