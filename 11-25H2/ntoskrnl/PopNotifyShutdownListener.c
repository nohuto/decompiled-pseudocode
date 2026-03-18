/*
 * XREFs of PopNotifyShutdownListener @ 0x140B4FE94
 * Callers:
 *     PopShutdownSystem @ 0x140B4FF14 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PopNotifyShutdownListener()
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PopShutdownNotificationCallbackList; i != &PopShutdownNotificationCallbackList; i = (PVOID *)*i )
    result = guard_dispatch_icall_no_overrides(i[4]);
  return result;
}
