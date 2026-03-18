/*
 * XREFs of PopPowerAggregatorNotifyPdcPhaseState @ 0x1406EFEAC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D3DC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406E99E8 (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140964338 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyPdcPhaseState(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 result; // rax

  if ( (_DWORD)a1 == 2 )
  {
    v2 = a2;
    PopAcquirePolicyLock(a1, a2);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
    if ( v2 )
    {
      if ( (_DWORD)xmmword_140F08290 == 1 )
      {
        PoModernStandbyActionInProgress = 1;
        byte_140F083AC = 1;
        if ( dword_140F083B0 == 3 )
          PopPowerAggregatorHandleIntentUnsafe(3LL, 0LL, 0LL, 53LL);
        dword_140F083B0 = 0;
      }
    }
    else
    {
      byte_140F083AC = 0;
    }
    PopPowerAggregatorEvaluateDozeTimers();
    PopReleaseRwLock(&PopPowerAggregatorLock);
    return PopReleasePolicyLock();
  }
  return result;
}
