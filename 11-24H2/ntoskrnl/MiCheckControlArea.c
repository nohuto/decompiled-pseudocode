/*
 * XREFs of MiCheckControlArea @ 0x140338330
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiFlushRelease @ 0x1402594B0 (MiFlushRelease.c)
 *     MiRemoveMappedPtes @ 0x1402915D0 (MiRemoveMappedPtes.c)
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 *     MiUnmapViewSubsections @ 0x140337FB0 (MiUnmapViewSubsections.c)
 *     MmPurgeSection @ 0x1403F06F0 (MmPurgeSection.c)
 *     MiReleaseFaultCharges @ 0x140427624 (MiReleaseFaultCharges.c)
 *     MiDereferenceControlArea @ 0x14042777C (MiDereferenceControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x1404468F8 (MiDereferenceControlAreaBySection.c)
 *     MiRemoveSystemCacheReferences @ 0x1404BF2B0 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MiCleanSection @ 0x140270170 (MiCleanSection.c)
 *     MiClearFilePointer @ 0x140270398 (MiClearFilePointer.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiReturnCrossPartitionCharges @ 0x140338944 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiInsertUnusedSegment @ 0x140432A98 (MiInsertUnusedSegment.c)
 *     MiImageUnused @ 0x140469604 (MiImageUnused.c)
 *     MiShouldTrimUnusedSegments @ 0x14048D3EC (MiShouldTrimUnusedSegments.c)
 *     MiDeleteDebuggerPatches @ 0x1404A8408 (MiDeleteDebuggerPatches.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReturnImageBase @ 0x1409D83E0 (MiReturnImageBase.c)
 *     MiSegmentDelete @ 0x140A0B944 (MiSegmentDelete.c)
 *     MiPurgeImageSection @ 0x140ABDFDC (MiPurgeImageSection.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, KIRQL a2)
{
  __int16 v2; // r8
  __int64 v3; // r12
  __int64 *v4; // r14
  __int64 inserted; // rdi
  unsigned int v6; // ebx
  __int64 v9; // r15
  __int64 **v10; // rcx
  __int64 *v11; // rdx
  __int64 *v12; // r8
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  volatile LONG *v18; // rcx
  _QWORD *i; // rbx
  unsigned int v20; // eax
  bool v21; // zf
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_WORD *)(a1 + 60);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  inserted = 0LL;
  v6 = 0;
  v22 = -1LL;
  v23 = 0LL;
  v9 = *((_QWORD *)qword_140E300C8 + (v2 & 0x3FF));
  if ( !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v13 = *(_DWORD *)(a1 + 56);
    if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    {
      v6 = 2;
      *(_DWORD *)(a1 + 56) = v13 | 1;
      goto LABEL_26;
    }
    if ( !*(_QWORD *)(a1 + 32) )
    {
      v6 = 2;
      *(_DWORD *)(a1 + 56) = v13 | 1;
      MiClearFilePointer(a1);
      goto LABEL_26;
    }
    if ( (v13 & 0x20) == 0 )
      goto LABEL_24;
    MiImageUnused(a1, 1LL, &v22);
    v14 = *(_DWORD *)(a1 + 56);
    v15 = 16LL;
    if ( (v14 & 0x20000) != 0 && (v14 & 0x8000000) == 0 )
      v6 = 16;
    if ( (*(_BYTE *)(a1 + 96) & 1) != 0 )
    {
      v6 = 16;
    }
    else if ( v6 != 16 )
    {
LABEL_17:
      if ( (*(_DWORD *)(a1 + 56) & 0x8020000) == 0x20000 )
      {
        MiReturnImageBase(&v22, v15);
        v22 = -1LL;
        v6 |= 4u;
        v23 = 0LL;
        MiPurgeImageSection(a1);
      }
      if ( (*(_BYTE *)(a1 + 96) & 1) != 0 )
      {
        MiWalkEntireImage(a1, 0LL, 32LL, 0xFFFFFFFFLL);
        MiDeleteDebuggerPatches(a1);
      }
      if ( v6 >= 0x10 )
      {
        v6 &= ~0x10u;
        a2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        v20 = *(_DWORD *)(a1 + 56) & 0xFFFFFFFB;
        v21 = (*(_QWORD *)(a1 + 40))-- == 1LL;
        *(_DWORD *)(a1 + 56) = v20;
        if ( !v21 || *(_QWORD *)(a1 + 24) )
        {
          v6 |= 8u;
        }
        else if ( !*(_QWORD *)(a1 + 32) )
        {
          v6 = 2;
          *(_DWORD *)(a1 + 56) = v20 | 1;
          MiImageUnused(a1, 1LL, &v22);
          MiClearFilePointer(a1);
          goto LABEL_26;
        }
      }
      if ( (v6 & 8) != 0 )
      {
        v6 = v6 & 0xFFFFFFF2 | 4;
      }
      else if ( (v6 & 2) == 0 )
      {
LABEL_24:
        if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 )
          v6 |= 1u;
        else
          inserted = MiInsertUnusedSegment(a1);
      }
LABEL_26:
      v10 = (__int64 **)(a1 + 80);
      goto LABEL_27;
    }
    *(_QWORD *)(a1 + 40) = 1LL;
    *(_DWORD *)(a1 + 56) = v14 | 4;
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), a2);
    goto LABEL_17;
  }
  v10 = (__int64 **)(a1 + 80);
  if ( *v10 )
  {
    v11 = *v10;
    v6 = 4;
    do
    {
LABEL_4:
      v12 = (__int64 *)*v11;
      if ( (v11[1] & 3) != 0 )
      {
        *v11 = (__int64)v4;
        v4 = v11;
        *v10 = v12;
      }
      else
      {
        v10 = (__int64 **)v11;
      }
      v11 = v12;
    }
    while ( v12 );
    goto LABEL_29;
  }
LABEL_27:
  if ( (v6 & 4) == 0 )
    goto LABEL_30;
  v11 = *v10;
  if ( *v10 )
    goto LABEL_4;
LABEL_29:
  v6 &= ~4u;
LABEL_30:
  if ( v6 )
  {
    if ( (v6 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, a2, 0);
    }
    else
    {
      v18 = (volatile LONG *)(a1 + 72);
      if ( a2 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v18);
      else
        ExReleaseSpinLockExclusive(v18, a2);
      MiSegmentDelete(a1);
    }
  }
  else
  {
    if ( a2 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(a1 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 72), retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(a1 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 72), retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      __writecr8(a2);
    }
    MiReleaseControlAreaWaiters(v4);
    if ( qword_140E3D880 >= (unsigned __int64)qword_140E3CF20 )
    {
      if ( (unsigned int)MiShouldTrimUnusedSegments(&MiSystemPartition) )
      {
        for ( i = PsGetNextPartition(0LL); i; i = PsGetNextPartition(i) )
        {
          if ( *(_QWORD *)(*i + 2088LL) )
            KeSetEvent((PRKEVENT)(*i + 1784LL), 0, 0);
        }
      }
    }
  }
  if ( inserted )
  {
    if ( v3 )
      MiReturnCommit(v9, inserted, 0);
    MiReturnResident(v9, inserted);
    MiReturnCrossPartitionCharges(v9, 0LL, v3 != 0, inserted);
  }
  return MiReturnImageBase(&v22, v16);
}
