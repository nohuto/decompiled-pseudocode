/*
 * XREFs of RegisterKernelLegacyPcc @ 0x14000DC10
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x14000D764 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
