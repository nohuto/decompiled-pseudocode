/*
 * XREFs of RegisterKernelPerfStates @ 0x140038A40
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
