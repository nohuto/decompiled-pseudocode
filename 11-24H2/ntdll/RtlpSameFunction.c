/*
 * XREFs of RtlpSameFunction @ 0x1800E8AEC
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180043630 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180041B10 (RtlLookupFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1800E8B54 (RtlpLookupPrimaryFunctionEntry.c)
 */

PRUNTIME_FUNCTION __fastcall RtlpSameFunction(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v3; // rdi
  _DWORD *v5; // rsi
  PRUNTIME_FUNCTION result; // rax
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  ImageBase = 0LL;
  v5 = (_DWORD *)RtlpLookupPrimaryFunctionEntry(a1, a2);
  result = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
  if ( result )
  {
    if ( *v5 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(result, ImageBase) )
      return (PRUNTIME_FUNCTION)v5;
    return (PRUNTIME_FUNCTION)v3;
  }
  return result;
}
