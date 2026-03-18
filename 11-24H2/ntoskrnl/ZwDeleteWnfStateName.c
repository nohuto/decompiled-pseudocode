/*
 * XREFs of ZwDeleteWnfStateName @ 0x1406A8030
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PopFreeRegistration @ 0x140751344 (PopFreeRegistration.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14085C45C (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1409B2350 (PspAllocateAndQueryProcessNotificationChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
