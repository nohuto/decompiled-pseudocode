/*
 * XREFs of KxPlatformSwapStacksAndCall @ 0x1406A7730
 * Callers:
 *     KiPlatformSwapStacksAndCall @ 0x1406A7710 (KiPlatformSwapStacksAndCall.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KxPlatformSwapStacksAndCall(__int64 a1)
{
  guard_dispatch_icall_no_overrides(a1);
  JUMPOUT(0x1406A771FLL);
}
