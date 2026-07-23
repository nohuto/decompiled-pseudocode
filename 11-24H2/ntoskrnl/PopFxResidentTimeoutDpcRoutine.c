/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140314FB0
 * Callers:
 *     KiProcessExpiredTimerList @ 0x140315CC0 (KiProcessExpiredTimerList.c)
 * Callees:
 *     ExQueueWorkItemEx @ 0x1402D6B60 (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x14047E3D0 (PopFxArmResidentTimer.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF);
  if ( !(_BYTE)result )
  {
    LOBYTE(v1) = 1;
    return PopFxArmResidentTimer(v1);
  }
  return result;
}
