/*
 * XREFs of MiCheckControlArea @ 0x14020EFD0
 * Callers:
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     MiUnmapViewSubsections @ 0x14020EC50 (MiUnmapViewSubsections.c)
 *     MiRemoveMappedPtes @ 0x140260FC0 (MiRemoveMappedPtes.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiReleaseFaultCharges @ 0x14037040C (MiReleaseFaultCharges.c)
 *     MmPurgeSection @ 0x1403704CC (MmPurgeSection.c)
 *     MiFlushRelease @ 0x1403710F0 (MiFlushRelease.c)
 *     MiDereferenceControlAreaBySection @ 0x140451548 (MiDereferenceControlAreaBySection.c)
 *     MiRemoveSystemCacheReferences @ 0x1404C3D80 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiInsertUnusedSegment @ 0x14037016C (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     PsGetNextPartition @ 0x1403D42FC (PsGetNextPartition.c)
 *     MiCleanSection @ 0x140417040 (MiCleanSection.c)
 *     MiClearFilePointer @ 0x140417268 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x14046EEF4 (MiImageUnused.c)
 *     MiShouldTrimUnusedSegments @ 0x14049257C (MiShouldTrimUnusedSegments.c)
 *     MiDeleteDebuggerPatches @ 0x1404ADAF4 (MiDeleteDebuggerPatches.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReturnImageBase @ 0x1408F6610 (MiReturnImageBase.c)
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 *     MiPurgeImageSection @ 0x140AC2CF4 (MiPurgeImageSection.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int64 v3; // r12
  __int64 *v4; // r14
  __int64 inserted; // rdi
  unsigned int v6; // ebx
  KIRQL v7; // si
  __int64 v9; // r8
  __int64 v10; // r15
  __int64 **v11; // rcx
  __int64 *v12; // rdx
  __int64 *v13; // r8
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rdx
  volatile LONG *v19; // rcx
  __int64 i; // rbx
  unsigned int v21; // eax
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_WORD *)(a1 + 60);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  inserted = 0LL;
  v6 = 0;
  v25 = -1LL;
  v7 = a2;
  v9 = v2 & 0x3FF;
  v26 = 0LL;
  v10 = *((_QWORD *)qword_140E2FF88 + v9);
  if ( !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v14 = *(_DWORD *)(a1 + 56);
    if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    {
      v6 = 2;
      *(_DWORD *)(a1 + 56) = v14 | 1;
      goto LABEL_26;
    }
    if ( !*(_QWORD *)(a1 + 32) )
    {
      v6 = 2;
      *(_DWORD *)(a1 + 56) = v14 | 1;
      MiClearFilePointer(a1, a2, v9);
      goto LABEL_26;
    }
    if ( (v14 & 0x20) == 0 )
      goto LABEL_24;
    MiImageUnused(a1, 1LL, &v25);
    v15 = *(_DWORD *)(a1 + 56);
    v16 = 16LL;
    if ( (v15 & 0x20000) != 0 && (v15 & 0x8000000) == 0 )
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
        MiReturnImageBase(&v25, v16);
        v25 = -1LL;
        v6 |= 4u;
        v26 = 0LL;
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
        v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        v21 = *(_DWORD *)(a1 + 56) & 0xFFFFFFFB;
        v22 = (*(_QWORD *)(a1 + 40))-- == 1LL;
        *(_DWORD *)(a1 + 56) = v21;
        if ( !v22 || *(_QWORD *)(a1 + 24) )
        {
          v6 |= 8u;
        }
        else if ( !*(_QWORD *)(a1 + 32) )
        {
          v6 = 2;
          *(_DWORD *)(a1 + 56) = v21 | 1;
          MiImageUnused(a1, 1LL, &v25);
          MiClearFilePointer(a1, v23, v24);
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
      v11 = (__int64 **)(a1 + 80);
      goto LABEL_27;
    }
    *(_QWORD *)(a1 + 40) = 1LL;
    *(_DWORD *)(a1 + 56) = v15 | 4;
    MiReleaseSpinLockExclusive(a1 + 72, v7);
    goto LABEL_17;
  }
  v11 = (__int64 **)(a1 + 80);
  if ( *v11 )
  {
    v12 = *v11;
    v6 = 4;
    do
    {
LABEL_4:
      v13 = (__int64 *)*v12;
      if ( (v12[1] & 3) != 0 )
      {
        *v12 = (__int64)v4;
        v4 = v12;
        *v11 = v13;
      }
      else
      {
        v11 = (__int64 **)v12;
      }
      v12 = v13;
    }
    while ( v13 );
    goto LABEL_29;
  }
LABEL_27:
  if ( (v6 & 4) == 0 )
    goto LABEL_30;
  v12 = *v11;
  if ( *v11 )
    goto LABEL_4;
LABEL_29:
  v6 &= ~4u;
LABEL_30:
  if ( v6 )
  {
    if ( (v6 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, v7, 0LL);
    }
    else
    {
      v19 = (volatile LONG *)(a1 + 72);
      if ( v7 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v19);
      else
        ExReleaseSpinLockExclusive(v19, v7);
      MiSegmentDelete(a1);
    }
  }
  else
  {
    if ( v7 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(a1 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(a1 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      __writecr8(v7);
    }
    MiReleaseControlAreaWaiters(v4);
    if ( qword_140E3D740 >= (unsigned __int64)qword_140E3CDE0 )
    {
      if ( (unsigned int)MiShouldTrimUnusedSegments(&MiSystemPartition) )
      {
        for ( i = PsGetNextPartition(0LL); i; i = PsGetNextPartition(i) )
        {
          if ( *(_QWORD *)(*(_QWORD *)i + 2088LL) )
            KeSetEvent((PRKEVENT)(*(_QWORD *)i + 1784LL), 0, 0);
        }
      }
    }
  }
  if ( inserted )
  {
    if ( v3 )
      MiReturnCommit(v10, inserted, 0LL);
    MiReturnResident(v10, inserted);
    MiReturnCrossPartitionCharges(v10, 0LL, v3 != 0, inserted);
  }
  return MiReturnImageBase(&v25, v17);
}
