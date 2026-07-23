/*
 * XREFs of ZwDeleteWnfStateName @ 0x1406A8FD0
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     PopFreeRegistration @ 0x14074F664 (PopFreeRegistration.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1408581CC (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140912870 (PspAllocateAndQueryProcessNotificationChannel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
