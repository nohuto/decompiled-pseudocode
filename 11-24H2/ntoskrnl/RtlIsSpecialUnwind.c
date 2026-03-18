/*
 * XREFs of RtlIsSpecialUnwind @ 0x1405F0978
 * Callers:
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x14073DCD0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     RtlpConvertFunctionEntry @ 0x14040E640 (RtlpConvertFunctionEntry.c)
 *     RtlpUnwindOpSlots @ 0x140442430 (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlIsSpecialUnwind(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 i; // rbx

  v2 = a2 + *(unsigned int *)(RtlpConvertFunctionEntry(a1, a2) + 8);
  for ( i = 0LL;
        (unsigned int)i < *(unsigned __int8 *)(v2 + 2);
        i = (unsigned int)RtlpUnwindOpSlots(*(_WORD *)(v2 + 2 * i + 4)) + (unsigned int)i )
  {
    if ( (*(_BYTE *)(v2 + 2 * i + 5) & 0xF) == 0xA )
      return 1LL;
  }
  return 0LL;
}
