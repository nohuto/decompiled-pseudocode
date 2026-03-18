/*
 * XREFs of RtlLookupPrimaryFunctionEntry @ 0x1405E467C
 * Callers:
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140731CB0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     RtlpLookupPrimaryFunctionEntry @ 0x140483600 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  return RtlpLookupPrimaryFunctionEntry(a1, a2, a2 + *(unsigned int *)a1);
}
