/*
 * XREFs of EtwpPsProvCaptureState @ 0x1407A21F4
 * Callers:
 *     EtwpCrimsonProvEnableCallback @ 0x140A664B0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpTraceLoggingProvEnableCallback @ 0x140A896C0 (EtwpTraceLoggingProvEnableCallback.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14045E010 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsEnumProcesses @ 0x1408DECE4 (PsEnumProcesses.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A5C6C0 (EtwpPsProvProcessEnumCallback.c)
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
