/*
 * XREFs of PopSstInvokeNotificationHandlers @ 0x140B5BD90
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B5D694 (PopMarkComponentsBootPhase.c)
 *     PopHiberCheckResume @ 0x140B6E970 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopSstInvokeNotificationHandlers(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID *i; // rbx

  for ( i = (PVOID *)PopSstNotificationHandlerList; i != &PopSstNotificationHandlerList; i = (PVOID *)*i )
  {
    guard_dispatch_icall_no_overrides(i[4], a1, a2, a4);
    if ( a1 == 1 )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0x28uLL, 0);
      PoSetHiberRange(0LL, 0x10000u, i[3], 0LL, 0);
    }
  }
}
