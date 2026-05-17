/*
 * XREFs of RtlPcToFileHeader @ 0x18006EF40
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18001ABD0 (RtlQueryInformationActivationContext.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_1801E7440 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_1801E7440 + 1)
                                  + (unsigned __int64)(unsigned int)qword_1801E7450 )
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (__int64)&v4);
    result = (PVOID)*((_QWORD *)&v4 + 1);
    *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  }
  else
  {
    result = (PVOID)_mm_srli_si128((__m128i)xmmword_1801E7440, 8).m128i_u64[0];
    *BaseOfImage = result;
  }
  return result;
}
