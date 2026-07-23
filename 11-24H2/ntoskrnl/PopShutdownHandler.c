/*
 * XREFs of PopShutdownHandler @ 0x140B620D0
 * Callers:
 *     <none>
 * Callees:
 *     InbvAcquireDisplayOwnership @ 0x14058C220 (InbvAcquireDisplayOwnership.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x140698D8C (BgDisplaySafeToPowerOffScreen.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn PopShutdownHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  _disable();
  if ( !KeGetCurrentPrcb()->Number )
  {
    InbvAcquireDisplayOwnership(a1, a2);
    BgDisplaySafeToPowerOffScreen(v3, v2, v4, v5);
  }
  while ( 1 )
    guard_dispatch_icall_no_overrides(a1, a2);
}
