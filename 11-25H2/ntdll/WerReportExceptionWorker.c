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
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  RegionSize = 0LL;
  BaseAddress = (PVOID)a1;
  RtlReportExceptionEx(
    (PEXCEPTION_RECORD)(a1 + 16),
    (PCONTEXT)2,
    *(_DWORD *)(a1 + 8) & 0x1F,
    (PLARGE_INTEGER)0xFFFFFFFFFFFFFFFFLL);
  v1 = *(void **)BaseAddress;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  NtSetInformationThread(v1, ThreadDbgkWerReportActive, &unk_180192E80, 4u);
  ZwResumeThread(v1, 0LL);
  LODWORD(v1) = NtClose(v1);
  NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, 0);
  return (unsigned int)v1;
}
