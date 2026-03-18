/*
 * XREFs of MiDeleteCachedEntry @ 0x140459A0C
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x140459230 (MiSegmentDereferenceWorker.c)
 *     MiRemoveUnusedSegments @ 0x140459644 (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkUnusedSubsection @ 0x14031F694 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 *     MiDestroySection @ 0x140419264 (MiDestroySection.c)
 *     MiUnlinkUnusedControlArea @ 0x140419C98 (MiUnlinkUnusedControlArea.c)
 *     MiAllUnusedSegmentsAreModNoWrite @ 0x140459B34 (MiAllUnusedSegmentsAreModNoWrite.c)
 */

__int64 __fastcall MiDeleteCachedEntry(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // r12
  _QWORD **v5; // r13
  KIRQL v6; // r14
  _QWORD *i; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  ULONG_PTR v10; // rbp
  int v11; // eax
  unsigned int v12; // ebx

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
      v10 = (ULONG_PTR)(i - 11);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
LABEL_18:
    ;
  }
  v11 = *(_DWORD *)(v8 + 56);
  if ( v10 )
  {
    if ( (v11 & 1) == 0 )
    {
      MiUnlinkUnusedSubsection(v10);
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      v12 = MiDeleteCachedSubsection(v10, v6, a2);
      if ( v12 == -1073741792 )
      {
        if ( (unsigned int)MiAllUnusedSegmentsAreModNoWrite(a1) )
          return (unsigned int)-1073741275;
      }
      return v12;
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
