/*
 * XREFs of RtlLookupPrimaryFunctionEntry @ 0x1405F09D0
 * Callers:
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x14073DCD0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     RtlpLookupPrimaryFunctionEntry @ 0x140483AB0 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  return RtlpLookupPrimaryFunctionEntry(a1, a2, a2 + *(unsigned int *)a1);
}
