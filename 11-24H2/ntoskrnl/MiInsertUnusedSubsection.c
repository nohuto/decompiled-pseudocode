/*
 * XREFs of MiInsertUnusedSubsection @ 0x140371BB0
 * Callers:
 *     MiUnmapViewSubsections @ 0x14020EC50 (MiUnmapViewSubsections.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x14036FF5C (MiDereferenceControlAreaPfnList.c)
 *     MmPurgeSection @ 0x1403704CC (MmPurgeSection.c)
 *     MiFlushRelease @ 0x1403710F0 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140371504 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiRemoveViewsFromSection @ 0x1403717B0 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1403719B0 (MiDecrementSubsections.c)
 *     MiDecrementSubsection @ 0x140371D7C (MiDecrementSubsection.c)
 *     MiAppendSubsectionChain @ 0x140474DD4 (MiAppendSubsectionChain.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F9F3C (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // r15
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = *(unsigned int *)(a1 + 44);
  v4 = 8 * v3;
  v5 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  if ( (unsigned __int64)(8 * v3) > 0xFE0 )
  {
    if ( v4 >= 0x10000 || ((8 * (_WORD)v3) & 0xFFFu) > 0xFC0 )
    {
      v7 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v6 = v4 + 15;
  }
  else
  {
    v6 = v4 + 31;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 1728));
  *(_DWORD *)(a1 + 32) |= 0x80000u;
  *(_QWORD *)(v5 + 2088) += v7;
  _InterlockedAdd64(&qword_140E2CC18, v7);
  v8 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 62LL) & 0xC) == 0 && (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    v8 = *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu);
  }
  v9 = (_QWORD *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 104) )
  {
    v10 = *(_QWORD **)(v5 + 2104);
    if ( *v10 != v5 + 2096 )
      goto LABEL_9;
    *v9 = v5 + 2096;
    *(_QWORD *)(a1 + 96) = v10;
    *v10 = v9;
    *(_QWORD *)(v5 + 2104) = v9;
  }
  else
  {
    v11 = *(_QWORD **)(v5 + 2120);
    if ( *v11 != v5 + 2112 )
LABEL_9:
      __fastfail(3u);
    *v9 = v5 + 2112;
    *(_QWORD *)(a1 + 96) = v11;
    *v11 = v9;
    *(_QWORD *)(v5 + 2120) = v9;
    *(_QWORD *)(v5 + 1808) += v3;
    if ( *(_QWORD *)(v5 + 1808) >= 0x20000uLL )
      v2 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *(_DWORD *)(v5 + 1728) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5 + 1728, retaddr);
  if ( v2 )
    KeSetEvent((PRKEVENT)(v5 + 1760), 0, 0);
  return v8;
}
