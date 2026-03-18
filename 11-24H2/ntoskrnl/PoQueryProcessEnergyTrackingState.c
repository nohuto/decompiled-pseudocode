/*
 * XREFs of PoQueryProcessEnergyTrackingState @ 0x140A94AA4
 * Callers:
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     RtlStringCchCopyNW @ 0x14046744C (RtlStringCchCopyNW.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall PoQueryProcessEnergyTrackingState(__int64 a1, __int64 a2)
{
  void *result; // rax
  __int64 v5; // rbx
  __int64 v6; // r8

  result = memset_0((void *)a2, 0, 0x90uLL);
  v5 = *(_QWORD *)(a1 + 1640);
  if ( v5 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)(v5 + 440));
    *(_DWORD *)(a2 + 4) = (unsigned __int16)*(_DWORD *)(v5 + 472);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v5 + 476);
    v6 = *(_QWORD *)(v5 + 464);
    if ( v6 )
      RtlStringCchCopyNW(
        (NTSTRSAFE_PWSTR)(a2 + 16),
        0x40uLL,
        (STRSAFE_PCNZWCH)(v6 + 32),
        (*(_QWORD *)(v6 + 24) >> 17) & 0x1FFFFFFFLL);
    return (void *)PopReleaseRwLock((signed __int64 *)(v5 + 440));
  }
  return result;
}
