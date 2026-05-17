/*
 * XREFs of WerReportExceptionWorker @ 0x180134770
 * Callers:
 *     <none>
 * Callees:
 *     RtlReportExceptionEx @ 0x1801342D0 (RtlReportExceptionEx.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x1801626D0 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x1801626F0 (NtTerminateThread.c)
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
  NtSetInformationThread(v1, 46LL, &unk_180190D98);
  ZwResumeThread(v1, 0LL);
  LODWORD(v1) = NtClose(v1);
  NtTerminateThread(-2LL, 0LL);
  return (unsigned int)v1;
}
