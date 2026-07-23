/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x14057BAB4
 * Callers:
 *     DbgkpLkmdEnumApcOrDpcDataCallback @ 0x14057BA60 (DbgkpLkmdEnumApcOrDpcDataCallback.c)
 *     DbgkpLkmdSnapData @ 0x14057BA90 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapGlobals @ 0x14057BAEC (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapKernelStack @ 0x14057BBB8 (DbgkpLkmdSnapKernelStack.c)
 *     DbgkpLkmdSnapKernelStackSegmentCallback @ 0x14057BD10 (DbgkpLkmdSnapKernelStackSegmentCallback.c)
 *     DbgkpLkmdSnapObject @ 0x14057BD74 (DbgkpLkmdSnapObject.c)
 *     KeEnumerateProcessorDpcs @ 0x1405BA42C (KeEnumerateProcessorDpcs.c)
 *     DbgkCaptureLiveDump @ 0x1407055FC (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x140705FFC (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1 + 0x4000, a2);
}
