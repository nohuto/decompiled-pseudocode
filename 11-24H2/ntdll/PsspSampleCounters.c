/*
 * XREFs of PsspSampleCounters @ 0x1801118C4
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800C3790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18003A620 (RtlQueryPerformanceCounter.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall PsspSampleCounters(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  RtlQueryPerformanceCounter(a1, (__int64)a2);
  v3 = 0LL;
  result = ZwQueryInformationThread(-2LL, 23LL, &v5, 16LL, 0LL);
  if ( (int)result >= 0 )
    v3 = v5;
  *a2 = v3;
  return result;
}
