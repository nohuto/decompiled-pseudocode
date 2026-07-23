/*
 * XREFs of PopNotifyShutdownListener @ 0x140B6208C
 * Callers:
 *     PopShutdownSystem @ 0x140B62104 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopNotifyShutdownListener(__int64 a1, __int64 a2)
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PopShutdownNotificationCallbackList; i != &PopShutdownNotificationCallbackList; i = (PVOID *)*i )
    result = guard_dispatch_icall_no_overrides(i[4], a2);
  return result;
}
