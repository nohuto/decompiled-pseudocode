/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x14094BC44
 * Callers:
 *     EtwpPsProvProcessEnumCallback @ 0x14093A830 (EtwpPsProvProcessEnumCallback.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x14094B5C0 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x14094C00C (EtwTraceAppStateChange.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x140480C00 (PsGetProcessSectionBaseAddress.c)
 */

unsigned __int64 __fastcall EtwpQueryProcessOtherInfo(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  result = PsGetProcessSectionBaseAddress(a1);
  if ( result )
  {
    result = RtlImageNtHeader(result);
    if ( result )
    {
      *(_DWORD *)a2 = *(_DWORD *)(result + 88);
      result = *(unsigned int *)(result + 8);
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
