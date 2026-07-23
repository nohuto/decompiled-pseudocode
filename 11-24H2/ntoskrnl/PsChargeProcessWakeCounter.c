/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1408983D0
 * Callers:
 *     EtwpQueueNotification @ 0x140834C40 (EtwpQueueNotification.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140A0DD9C (PopPowerRequestSpecialRequestSet.c)
 *     PspCreateActivityReference @ 0x140A71370 (PspCreateActivityReference.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x14044B370 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(PVOID Object)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId((__int64)Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, 1, 1, 0LL);
  return result;
}
