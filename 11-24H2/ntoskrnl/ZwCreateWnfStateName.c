/*
 * XREFs of ZwCreateWnfStateName @ 0x1406A7E90
 * Callers:
 *     ExpTrackTableInsertLimit @ 0x140655330 (ExpTrackTableInsertLimit.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085C5EC (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1409B2350 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1409BA188 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
