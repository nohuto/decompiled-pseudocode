/*
 * XREFs of KxPlatformSwapStacksAndCall @ 0x1406B2A00
 * Callers:
 *     KiPlatformSwapStacksAndCall @ 0x1406B29E0 (KiPlatformSwapStacksAndCall.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KxPlatformSwapStacksAndCall(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  JUMPOUT(0x1406B29EFLL);
}
