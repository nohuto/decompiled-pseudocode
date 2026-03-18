/*
 * XREFs of MiFlushAcquire @ 0x14048A490
 * Callers:
 *     MiCommitFileBackedSection @ 0x140939E1C (MiCommitFileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReferenceSubsection @ 0x14031F460 (MiReferenceSubsection.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiFlushAcquire(__int64 a1, __int64 a2, __int64 a3)
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
