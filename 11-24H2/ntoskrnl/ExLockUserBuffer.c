/*
 * XREFs of ExLockUserBuffer @ 0x14094F5B8
 * Callers:
 *     ExpGetLookasideInformation @ 0x1404D12E8 (ExpGetLookasideInformation.c)
 *     KdSystemDebugControl @ 0x1407383E0 (KdSystemDebugControl.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407BD3F8 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x1407BE020 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE480 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE730 (NtQueryDriverEntryOrder.c)
 *     MiCopyLargeVad @ 0x140800CE4 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     NtEnumerateBootEntries @ 0x14094DCD0 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x14094E5C0 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14094F250 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094F700 (ExpGetFirmwareEnvironmentVariable.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     NtSystemDebugControl @ 0x140A4F080 (NtSystemDebugControl.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     ExUnlockUserBuffer @ 0x14025FDEC (ExUnlockUserBuffer.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmSizeOfMdl @ 0x14044DA00 (MmSizeOfMdl.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExLockUserBuffer(
        unsigned __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        LOCK_OPERATION a4,
        _QWORD *P,
        struct _MDL **a6)
{
  __int64 v8; // r13
  SIZE_T v10; // rax
  struct _MDL *Pool2; // rax
  struct _MDL *v12; // rbx
  PVOID MappedSystemVa; // rax

  v8 = a2;
  *P = 0LL;
  *a6 = 0LL;
  v10 = MmSizeOfMdl((PVOID)a1, a2);
  Pool2 = (struct _MDL *)ExAllocatePool2(0x41uLL, v10, 0x6F666E49u);
  v12 = Pool2;
  if ( Pool2 )
  {
    Pool2->Next = 0LL;
    Pool2->Size = 8 * ((((a1 & 0xFFF) + v8 + 4095) >> 12) + 6);
    Pool2->MdlFlags = 0;
    Pool2->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    Pool2->ByteOffset = a1 & 0xFFF;
    Pool2->ByteCount = v8;
    MmProbeAndLockPages(Pool2, a3, a4);
    v12->MdlFlags |= 0x2000u;
    if ( (v12->MdlFlags & 5) != 0 )
      MappedSystemVa = v12->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
    *P = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *a6 = v12;
      return 0LL;
    }
    ExUnlockUserBuffer(v12);
  }
  return 3221225626LL;
}
