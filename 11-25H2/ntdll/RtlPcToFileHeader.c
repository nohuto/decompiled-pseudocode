/*
 * XREFs of RtlPcToFileHeader @ 0x180076C20
 * Callers:
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     RtlQueryInformationActivationContext @ 0x1800484F0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax

  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_1801E9430 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_1801E9430 + 1)
                                  + (unsigned __int64)(unsigned int)qword_1801E9440 )
  {
    RtlpxLookupFunctionTable(PcValue);
    result = 0LL;
    *BaseOfImage = 0LL;
  }
  else
  {
    result = (PVOID)_mm_srli_si128((__m128i)xmmword_1801E9430, 8).m128i_u64[0];
    *BaseOfImage = result;
  }
  return result;
}
