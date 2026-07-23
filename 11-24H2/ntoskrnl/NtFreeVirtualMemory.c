/*
 * XREFs of NtFreeVirtualMemory @ 0x1408D9A10
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x14077F1A8 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 */

NTSTATUS __stdcall NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  char PreviousMode; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  ULONG_PTR v11; // [rsp+38h] [rbp-20h]
  PVOID v12; // [rsp+40h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
      v9 = (__int64)BaseAddress;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    if ( (unsigned __int64)RegionSize < 0x7FFFFFFF0000LL )
      v8 = (__int64)RegionSize;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  v12 = *BaseAddress;
  v11 = *RegionSize;
  result = MmFreeVirtualMemory((ULONG_PTR)ProcessHandle, PreviousMode, 0);
  if ( result >= 0 )
  {
    *RegionSize = v11;
    *BaseAddress = v12;
  }
  return result;
}
