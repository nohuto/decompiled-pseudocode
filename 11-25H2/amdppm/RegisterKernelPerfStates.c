/*
 * XREFs of RegisterKernelPerfStates @ 0x140035DE0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x140033B84 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
