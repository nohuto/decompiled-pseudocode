/*
 * XREFs of MiSetSubsectionBase @ 0x140491CC8
 * Callers:
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x1402624F0 (MiIncrementSubsectionViewCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiSetSubsectionBase(__int64 *BugCheckParameter2, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONG_PTR v9; // rbp
  KIRQL v10; // r12
  int v11; // eax
  unsigned int v13; // eax

  v4 = *BugCheckParameter2;
  v9 = 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  if ( (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    v9 = (ULONG_PTR)BugCheckParameter2;
    MiIncrementSubsectionViewCount(BugCheckParameter2, 0);
    BugCheckParameter2[14] = a4;
  }
  *((_DWORD *)BugCheckParameter2 + 8) |= 1u;
  v11 = BugCheckParameter2[6] & 0x3FFFFFFF;
  BugCheckParameter2[1] = a2;
  *((_DWORD *)BugCheckParameter2 + 12) = v11;
  if ( v9 && a3 <= 1 )
  {
    if ( a3 == 1 )
      v13 = v11 | 0x40000000;
    else
      v13 = v11 | 0x80000000;
    *((_DWORD *)BugCheckParameter2 + 12) = v13;
  }
  return MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), v10);
}
