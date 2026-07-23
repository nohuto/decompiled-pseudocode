/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x1408F01B4
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x1408EFB30 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A56950 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x14047B6D0 (PsGetProcessSectionBaseAddress.c)
 */

__int64 __fastcall EtwpQueryProcessOtherInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  result = PsGetProcessSectionBaseAddress(a1);
  if ( result )
  {
    result = (__int64)RtlImageNtHeader((PVOID)result);
    if ( result )
    {
      *(_DWORD *)a2 = *(_DWORD *)(result + 88);
      result = *(unsigned int *)(result + 8);
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
