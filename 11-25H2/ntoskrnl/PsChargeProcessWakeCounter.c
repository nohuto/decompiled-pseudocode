/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1408B0B30
 * Callers:
 *     PopPowerRequestSpecialRequestSet @ 0x140862C10 (PopPowerRequestSpecialRequestSet.c)
 *     EtwpQueueNotification @ 0x14089AC70 (EtwpQueueNotification.c)
 *     PspCreateActivityReference @ 0x140A74EC0 (PspCreateActivityReference.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x140456260 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1408B2120 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(PVOID Object)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId((__int64)Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, 1, 1, 0LL);
  return result;
}
