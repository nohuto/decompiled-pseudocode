/*
 * XREFs of RtlWow64GetSharedInfoProcess @ 0x1800F8F40
 * Callers:
 *     RtlpWow64SuspendProcess @ 0x180133EC8 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 */

int __fastcall RtlWow64GetSharedInfoProcess(HANDLE ProcessHandle, _BYTE *a2, void *a3)
{
  int result; // eax
  void *v7; // rdx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  result = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &v8, 8u, 0LL);
  if ( result >= 0 )
  {
    if ( v8 )
    {
      v7 = (void *)(v8 + 1160);
      *a2 = 1;
      return ZwReadVirtualMemory(ProcessHandle, v7, a3, 0x28uLL, 0LL);
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
