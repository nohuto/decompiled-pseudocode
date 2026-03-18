/*
 * XREFs of PopShutdownHandler @ 0x140B60010
 * Callers:
 *     <none>
 * Callees:
 *     InbvAcquireDisplayOwnership @ 0x14058F200 (InbvAcquireDisplayOwnership.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x140697D0C (BgDisplaySafeToPowerOffScreen.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn PopShutdownHandler(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _disable();
  if ( !KeGetCurrentPrcb()->Number )
  {
    InbvAcquireDisplayOwnership(a1, a2, a3, a4);
    BgDisplaySafeToPowerOffScreen();
  }
  while ( 1 )
    guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
