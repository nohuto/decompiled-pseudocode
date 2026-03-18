/*
 * XREFs of PopPowerRequestStatsSetActive @ 0x140A667D4
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x14046C280 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x14044DC00 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14044DCA0 (SleepstudyHelperBlockerActiveReference.c)
 */

__int64 __fastcall PopPowerRequestStatsSetActive(__int64 a1, int a2, char a3)
{
  KSPIN_LOCK *v3; // rcx
  __int64 result; // rax

  v3 = *(KSPIN_LOCK **)(a1 + 160);
  if ( v3 )
  {
    result = (unsigned int)(a2 - 1);
    if ( (result & 0xFFFFFFFD) == 0 )
    {
      if ( a3 )
        return SleepstudyHelperBlockerActiveReference(v3);
      else
        return SleepstudyHelperBlockerActiveDereference(v3);
    }
  }
  return result;
}
