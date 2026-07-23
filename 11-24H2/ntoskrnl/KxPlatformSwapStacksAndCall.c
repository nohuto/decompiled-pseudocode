/*
 * XREFs of KxPlatformSwapStacksAndCall @ 0x1406B39A0
 * Callers:
 *     KiPlatformSwapStacksAndCall @ 0x1406B3980 (KiPlatformSwapStacksAndCall.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KxPlatformSwapStacksAndCall(__int64 a1, __int64 a2)
{
  guard_dispatch_icall_no_overrides(a1, a2);
  JUMPOUT(0x1406B398FLL);
}
