/*
 * XREFs of PopPowerRequestStatsSetActive @ 0x140A5F5B8
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x140464F00 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140444B00 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140444BA0 (SleepstudyHelperBlockerActiveReference.c)
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
