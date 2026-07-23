/*
 * XREFs of UcpLogEventGenerateDump @ 0x140695B7C
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x14069573C (UcOnUnexpectedCodePath.c)
 *     UcpApcNormalRoutine @ 0x140800F80 (UcpApcNormalRoutine.c)
 * Callees:
 *     UcpGenerateLiveKernelDump @ 0x140695B2C (UcpGenerateLiveKernelDump.c)
 *     UcpLogUnexpectedCodePathEvent @ 0x140695C10 (UcpLogUnexpectedCodePathEvent.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x140695D0C (UcpRetrieveCurrentConfigSettings.c)
 */

char __fastcall UcpLogEventGenerateDump(_DWORD *a1, __int64 a2)
{
  char result; // al
  char v3; // di
  char v6; // [rsp+40h] [rbp+18h] BYREF
  char v7; // [rsp+48h] [rbp+20h] BYREF

  result = 0;
  v3 = 0;
  v6 = 0;
  v7 = 0;
  if ( a1 && UcIsWNFInfraInitialized )
  {
    UcpRetrieveCurrentConfigSettings(a1, &v6, &v7);
    result = v6;
    v3 = v7;
  }
  if ( UcIsTraceLoggingInitialized == 1 && !result )
  {
    result = UcpLogUnexpectedCodePathEvent(a1, *(unsigned int *)(a2 + 16));
    *(_DWORD *)(a2 + 16) = 0;
  }
  if ( UcIsSystemReadyForLiveDump == 1 && v3 == 1 )
    return UcpGenerateLiveKernelDump(a1);
  return result;
}
