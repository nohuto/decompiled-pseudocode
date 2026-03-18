/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x14057E624
 * Callers:
 *     DbgkpLkmdEnumApcOrDpcDataCallback @ 0x14057E5D0 (DbgkpLkmdEnumApcOrDpcDataCallback.c)
 *     DbgkpLkmdSnapData @ 0x14057E600 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapGlobals @ 0x14057E65C (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapKernelStack @ 0x14057E728 (DbgkpLkmdSnapKernelStack.c)
 *     DbgkpLkmdSnapKernelStackSegmentCallback @ 0x14057E880 (DbgkpLkmdSnapKernelStackSegmentCallback.c)
 *     DbgkpLkmdSnapObject @ 0x14057E8E4 (DbgkpLkmdSnapObject.c)
 *     KeEnumerateProcessorDpcs @ 0x1405BCDFC (KeEnumerateProcessorDpcs.c)
 *     DbgkCaptureLiveDump @ 0x140707A3C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14070843C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(a1 + 0x4000, a2, a3, a4);
}
