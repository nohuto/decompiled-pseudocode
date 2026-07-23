/*
 * XREFs of MiDeleteCachedEntry @ 0x1403EE484
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1403EDB20 (MiSegmentDereferenceWorker.c)
 *     MiRemoveUnusedSegments @ 0x1403EDF30 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     MiDestroySection @ 0x140270330 (MiDestroySection.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedSubsection @ 0x140338CE4 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllUnusedSegmentsAreModNoWrite @ 0x1403EE5AC (MiAllUnusedSegmentsAreModNoWrite.c)
 *     MiUnlinkUnusedControlArea @ 0x140432D38 (MiUnlinkUnusedControlArea.c)
 */

__int64 __fastcall MiDeleteCachedEntry(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // r12
  _QWORD **v5; // r13
  KIRQL v6; // r14
  _QWORD *i; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 *v10; // rbp
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ebx

  v2 = (volatile LONG *)(a1 + 1728);
  v5 = (_QWORD **)(a1 + 2096);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  for ( i = *v5; ; i = (_QWORD *)*i )
  {
    if ( i == v5 )
    {
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v6);
      return 3221226021LL;
    }
    v8 = (__int64)(i - 1);
    v9 = *(i - 1);
    if ( v9 >= 0 )
      v8 = *(i - 11);
    v10 = 0LL;
    if ( v9 >= 0 )
      v10 = i - 11;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v8 + 72)) )
      break;
LABEL_18:
    ;
  }
  v11 = *(_DWORD *)(v8 + 56);
  if ( v10 )
  {
    if ( (v11 & 1) == 0 )
    {
      MiUnlinkUnusedSubsection((__int64)v10);
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      LOBYTE(v12) = v6;
      v13 = MiDeleteCachedSubsection(v10, v12, a2);
      if ( v13 == -1073741792 )
      {
        if ( (unsigned int)MiAllUnusedSegmentsAreModNoWrite(a1) )
          return (unsigned int)-1073741275;
      }
      return v13;
    }
    goto LABEL_17;
  }
  if ( (v11 & 0x20) == 0 && *(_QWORD *)(v8 + 32) )
  {
LABEL_17:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
    goto LABEL_18;
  }
  MiUnlinkUnusedControlArea(v8);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
    *(_QWORD *)(a2 + 80) += *(_QWORD *)(v8 + 32);
  MiDestroySection(v8, v6);
  return 0LL;
}
