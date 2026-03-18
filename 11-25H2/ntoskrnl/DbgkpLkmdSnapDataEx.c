/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x14057B304
 * Callers:
 *     DbgkpLkmdEnumApcOrDpcDataCallback @ 0x14057B2B0 (DbgkpLkmdEnumApcOrDpcDataCallback.c)
 *     DbgkpLkmdSnapData @ 0x14057B2E0 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapGlobals @ 0x14057B33C (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapKernelStack @ 0x14057B408 (DbgkpLkmdSnapKernelStack.c)
 *     DbgkpLkmdSnapKernelStackSegmentCallback @ 0x14057B560 (DbgkpLkmdSnapKernelStackSegmentCallback.c)
 *     DbgkpLkmdSnapObject @ 0x14057B5C4 (DbgkpLkmdSnapObject.c)
 *     KeEnumerateProcessorDpcs @ 0x1405B8F5C (KeEnumerateProcessorDpcs.c)
 *     DbgkCaptureLiveDump @ 0x1406FBB5C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x1406FC55C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1 + 0x4000);
}
