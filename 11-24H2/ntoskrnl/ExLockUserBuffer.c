/*
 * XREFs of ExLockUserBuffer @ 0x140966B28
 * Callers:
 *     ExpGetLookasideInformation @ 0x1404D7E9C (ExpGetLookasideInformation.c)
 *     KdSystemDebugControl @ 0x14073A4B0 (KdSystemDebugControl.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407BCFA8 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x1407BDBD0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE030 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE2E0 (NtQueryDriverEntryOrder.c)
 *     MiCopyLargeVad @ 0x1408005A4 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 *     NtEnumerateBootEntries @ 0x140965240 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140965B30 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1409667C0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140966C70 (ExpGetFirmwareEnvironmentVariable.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     NtSystemDebugControl @ 0x140A571F0 (NtSystemDebugControl.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmSizeOfMdl @ 0x140458550 (MmSizeOfMdl.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
