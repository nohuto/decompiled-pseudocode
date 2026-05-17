/*
 * XREFs of RtlpGetModifiedProcessCookie @ 0x1800FBBD4
 * Callers:
 *     RtlInitializeHeapManager @ 0x18011941C (RtlInitializeHeapManager.c)
 *     RtlpReportHeapFailure @ 0x18011F4EC (RtlpReportHeapFailure.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 */

unsigned __int64 RtlpGetModifiedProcessCookie()
{
  unsigned int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF

  ProcessInformation = 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL) < 0 )
    return 0LL;
  else
    return (2147483629 * (unsigned __int64)ProcessInformation + 2147483587) % 0x7FFFFFFF;
}
