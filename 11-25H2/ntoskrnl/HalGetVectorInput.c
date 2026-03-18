/*
 * XREFs of HalGetVectorInput @ 0x14053E110
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x140711E68 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalGetVectorInput(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1);
}
