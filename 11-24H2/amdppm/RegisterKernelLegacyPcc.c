/*
 * XREFs of RegisterKernelLegacyPcc @ 0x14000B3F0
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x14000AD90 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
