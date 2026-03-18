/*
 * XREFs of PsChargeProcessWakeCounter @ 0x14088E7A0
 * Callers:
 *     EtwpQueueNotification @ 0x14083A16C (EtwpQueueNotification.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140A14F84 (PopPowerRequestSpecialRequestSet.c)
 *     PspCreateActivityReference @ 0x140A77250 (PspCreateActivityReference.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1404563A0 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x14088FD70 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(__int64 a1)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(a1);
  if ( result )
    return PspChargeProcessWakeCounter(a1, 1, 1, 0LL);
  return result;
}
