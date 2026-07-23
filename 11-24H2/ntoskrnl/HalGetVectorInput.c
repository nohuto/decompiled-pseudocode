/*
 * XREFs of HalGetVectorInput @ 0x14053E240
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x14071BAF8 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalGetVectorInput(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
