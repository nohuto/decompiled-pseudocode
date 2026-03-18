/*
 * XREFs of PopNotifyShutdownListener @ 0x140B5FFC0
 * Callers:
 *     PopShutdownSystem @ 0x140B60044 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopNotifyShutdownListener(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PopShutdownNotificationCallbackList; i != &PopShutdownNotificationCallbackList; i = (PVOID *)*i )
    result = guard_dispatch_icall_no_overrides(i[4], a2, a3, a4);
  return result;
}
