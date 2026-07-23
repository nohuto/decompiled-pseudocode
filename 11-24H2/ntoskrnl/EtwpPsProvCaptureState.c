/*
 * XREFs of EtwpPsProvCaptureState @ 0x1407B1A14
 * Callers:
 *     EtwpCrimsonProvEnableCallback @ 0x140A624A0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpTraceLoggingProvEnableCallback @ 0x140A8AD50 (EtwpTraceLoggingProvEnableCallback.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsEnumProcesses @ 0x14085F924 (PsEnumProcesses.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A56950 (EtwpPsProvProcessEnumCallback.c)
 */

BOOLEAN __fastcall EtwpPsProvCaptureState(__int64 *a1, unsigned __int64 a2)
{
  BOOLEAN v2; // bl
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  *(_DWORD *)((char *)&v4 + 9) = a1 == PsProvTraceLoggingGuid;
  v2 = IoSetThreadHardErrorMode(0);
  EtwpPsProvProcessEnumCallback((ULONG_PTR)PsIdleProcess);
  PsEnumProcesses(EtwpPsProvProcessEnumCallback, &v4);
  return IoSetThreadHardErrorMode(v2);
}
