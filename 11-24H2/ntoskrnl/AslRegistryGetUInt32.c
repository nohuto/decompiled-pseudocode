/*
 * XREFs of AslRegistryGetUInt32 @ 0x140808D98
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x140801804 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsDisabled @ 0x140801DAC (SdbpGetMergeSdbsDisabled.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140807274 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     AslRegistryGetUInt32_UStr @ 0x140808E18 (AslRegistryGetUInt32_UStr.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  inited = RtlInitUnicodeStringEx(&v7, a3);
  if ( inited >= 0 )
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &v7);
  else
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetUInt32", 1072, (unsigned int)"RtlInitUnicodeStringEx failed [%x]");
  return (unsigned int)inited;
}
