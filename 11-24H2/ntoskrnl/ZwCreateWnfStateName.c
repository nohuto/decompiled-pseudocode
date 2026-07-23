/*
 * XREFs of ZwCreateWnfStateName @ 0x1406A8E30
 * Callers:
 *     ExpTrackTableInsertLimit @ 0x140653A30 (ExpTrackTableInsertLimit.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085835C (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140912870 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1409A07D8 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
