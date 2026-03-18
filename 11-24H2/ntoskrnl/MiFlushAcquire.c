/*
 * XREFs of MiFlushAcquire @ 0x140489CC0
 * Callers:
 *     MiCommitFileBackedSection @ 0x1408DDC1C (MiCommitFileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiReferenceSubsection @ 0x14020F750 (MiReferenceSubsection.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiFlushAcquire(__int64 a1, __int64 *a2, __int64 *a3)
{
  KIRQL v6; // r14
  unsigned int v7; // ebx

  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( *(_QWORD *)(a1 + 40) == -1LL )
  {
    v7 = 0;
  }
  else
  {
    if ( a2 )
    {
      MiReferenceSubsection(a2, 0);
      MiReferenceSubsection(a3, 0);
    }
    ++*(_QWORD *)(a1 + 40);
    v7 = 1;
  }
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v6);
  return v7;
}
