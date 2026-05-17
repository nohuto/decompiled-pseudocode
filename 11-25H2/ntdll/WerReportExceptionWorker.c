/*
 * XREFs of WerReportExceptionWorker @ 0x180136020
 * Callers:
 *     <none>
 * Callees:
 *     RtlReportExceptionEx @ 0x180135B80 (RtlReportExceptionEx.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x180163C60 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x180163C80 (NtTerminateThread.c)
 */

__int64 __fastcall WerReportExceptionWorker(__int64 a1)
{
  void *v1; // rbx
  void **v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = (void **)a1;
  RtlReportExceptionEx(
    (unsigned int *)(a1 + 16),
    2LL,
    *(_DWORD *)(a1 + 8) & 0x1F,
    (void *)0xFFFFFFFFFFFFFFFFLL,
    *(_QWORD *)a1);
  v1 = *v3;
  ZwFreeVirtualMemory(-1LL, &v3, &v4, 0x8000LL);
  NtSetInformationThread(v1, 46LL, &unk_180192E80);
  ZwResumeThread(v1, 0LL);
  LODWORD(v1) = NtClose(v1);
  NtTerminateThread(-2LL, 0LL);
  return (unsigned int)v1;
}
