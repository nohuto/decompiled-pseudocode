/*
 * XREFs of PopSstInvokeNotificationHandlers @ 0x140B5DE00
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 *     PopHiberCheckResume @ 0x140B709E0 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopSstInvokeNotificationHandlers(unsigned int a1)
{
  PVOID *i; // rbx

  for ( i = (PVOID *)PopSstNotificationHandlerList; i != &PopSstNotificationHandlerList; i = (PVOID *)*i )
  {
    guard_dispatch_icall_no_overrides(i[4], a1);
    if ( a1 == 1 )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0x28uLL, 0);
      PoSetHiberRange(0LL, 0x10000u, i[3], 0LL, 0);
    }
  }
}
