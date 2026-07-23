/*
 * XREFs of MiInsertUnusedSubsection @ 0x140259F70
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiDereferenceControlAreaPfnList @ 0x14021DC9C (MiDereferenceControlAreaPfnList.c)
 *     MiFlushRelease @ 0x1402594B0 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402598C4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiRemoveViewsFromSection @ 0x140259B70 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x140259D70 (MiDecrementSubsections.c)
 *     MiDecrementSubsection @ 0x14025A644 (MiDecrementSubsection.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiUnmapViewSubsections @ 0x140337FB0 (MiUnmapViewSubsections.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 *     MmPurgeSection @ 0x1403F06F0 (MmPurgeSection.c)
 *     MiAppendSubsectionChain @ 0x140470BE4 (MiAppendSubsectionChain.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
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
  v5 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
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
  _InterlockedAdd64(&qword_140E2CD58, v7);
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
