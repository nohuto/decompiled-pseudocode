/*
 * XREFs of PsspSampleCounters @ 0x18010CCD4
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800BB350 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18001A8A0 (RtlQueryPerformanceCounter.c)
 *     ZwQueryInformationThread @ 0x1801604F0 (ZwQueryInformationThread.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PsspSampleCounters(LARGE_INTEGER *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  NTSTATUS result; // eax
  __int128 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  ThreadInformation = 0LL;
  RtlQueryPerformanceCounter(a1);
  v3 = 0LL;
  result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCycleTime, &ThreadInformation, 0x10u, 0LL);
  if ( result >= 0 )
    v3 = ThreadInformation;
  *a2 = v3;
  return result;
}
