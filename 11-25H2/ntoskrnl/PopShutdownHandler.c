/*
 * XREFs of PopShutdownHandler @ 0x140B4FEE0
 * Callers:
 *     <none>
 * Callees:
 *     InbvAcquireDisplayOwnership @ 0x14058BA20 (InbvAcquireDisplayOwnership.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x14068C9BC (BgDisplaySafeToPowerOffScreen.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn PopShutdownHandler(__int64 a1)
{
  _disable();
  if ( !KeGetCurrentPrcb()->Number )
  {
    InbvAcquireDisplayOwnership(a1);
    BgDisplaySafeToPowerOffScreen();
  }
  while ( 1 )
    guard_dispatch_icall_no_overrides(a1);
}
