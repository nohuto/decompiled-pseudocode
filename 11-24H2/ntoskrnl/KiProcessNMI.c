/*
 * XREFs of KiProcessNMI @ 0x1405B4C40
 * Callers:
 *     KxNmiInterrupt @ 0x1406B7B40 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403D7B30 (KeInterlockedClearProcessorAffinityEx.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 *     HalHandleNMI @ 0x140541490 (HalHandleNMI.c)
 *     KiCheckForFreezeExecution @ 0x1405B0100 (KiCheckForFreezeExecution.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KiFlushCurrentRsb @ 0x1406C0840 (KiFlushCurrentRsb.c)
 */

char __fastcall KiProcessNMI(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // eax
  unsigned int Number; // esi
  __int64 v9; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  char v12; // di
  char v13; // al

  guard_dispatch_icall_no_overrides(0LL, a2);
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    KiFlushCurrentRsb(v4, v3, v5, v6);
  _mm_lfence();
  LOBYTE(v7) = KiCheckForFreezeExecution(a1);
  if ( !(_BYTE)v7 )
  {
    Number = KeGetCurrentPrcb()->Number;
    v7 = KeInterlockedSetProcessorAffinityEx((__int64)KiNmiInProgress, Number);
    if ( !v7 )
    {
      guard_dispatch_icall_no_overrides(1LL, v9);
      v11 = KiNmiCallbackListHead;
      v12 = 0;
      if ( !KiNmiCallbackListHead )
        goto LABEL_10;
      do
      {
        LOBYTE(v10) = v12;
        v13 = guard_dispatch_icall_no_overrides(v11[2], v10);
        v11 = (_QWORD *)*v11;
        v12 |= v13;
      }
      while ( v11 );
      if ( !v12 )
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
      LOBYTE(v7) = KeInterlockedClearProcessorAffinityEx((__int64)KiNmiInProgress, Number);
    }
  }
  return v7;
}
