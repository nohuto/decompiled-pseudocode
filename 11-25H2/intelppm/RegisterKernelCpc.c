/*
 * XREFs of RegisterKernelCpc @ 0x140038020
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(__int64 a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
