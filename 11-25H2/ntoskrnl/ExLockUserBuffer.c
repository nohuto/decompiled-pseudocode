/*
 * XREFs of ExLockUserBuffer @ 0x140823168
 * Callers:
 *     ExpGetLookasideInformation @ 0x1402D1FA8 (ExpGetLookasideInformation.c)
 *     KdSystemDebugControl @ 0x14072E220 (KdSystemDebugControl.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407ADB28 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x1407AE400 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407AE860 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407AEB10 (NtQueryDriverEntryOrder.c)
 *     MiCopyLargeVad @ 0x1407F06EC (MiCopyLargeVad.c)
 *     NtEnumerateBootEntries @ 0x140820970 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140821260 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140821EF0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140822258 (ExpGetFirmwareEnvironmentVariable.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     NtSystemDebugControl @ 0x140A53910 (NtSystemDebugControl.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MmSizeOfMdl @ 0x140457EF0 (MmSizeOfMdl.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  struct _MDL *Pool2; // rax
  struct _MDL *v11; // rbx
  PVOID MappedSystemVa; // rax

  v8 = a2;
  *P = 0LL;
  *a6 = 0LL;
  MmSizeOfMdl((PVOID)a1, a2);
  Pool2 = (struct _MDL *)ExAllocatePool2(0x41uLL);
  v11 = Pool2;
  if ( Pool2 )
  {
    Pool2->Next = 0LL;
    Pool2->Size = 8 * ((((a1 & 0xFFF) + v8 + 4095) >> 12) + 6);
    Pool2->MdlFlags = 0;
    Pool2->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    Pool2->ByteOffset = a1 & 0xFFF;
    Pool2->ByteCount = v8;
    MmProbeAndLockPages(Pool2, a3, a4);
    v11->MdlFlags |= 0x2000u;
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = v11->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000020u);
    *P = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *a6 = v11;
      return 0LL;
    }
    ExUnlockUserBuffer(v11);
  }
  return 3221225626LL;
}
