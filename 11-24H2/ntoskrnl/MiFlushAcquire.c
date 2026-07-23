/*
 * XREFs of MiFlushAcquire @ 0x140484FBC
 * Callers:
 *     MiCommitFileBackedSection @ 0x1409147D8 (MiCommitFileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReferenceSubsection @ 0x140338AB0 (MiReferenceSubsection.c)
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
