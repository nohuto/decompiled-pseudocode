/*
 * XREFs of MiSegmentDelete @ 0x140A0B944
 * Callers:
 *     MiDestroySection @ 0x140270330 (MiDestroySection.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiDeleteEmptyControlAreas @ 0x1403EE1FC (MiDeleteEmptyControlAreas.c)
 * Callees:
 *     MiDeleteSegmentPages @ 0x140203D4C (MiDeleteSegmentPages.c)
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     MiPrepareSegmentForDeletion @ 0x1402703FC (MiPrepareSegmentForDeletion.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiGetControlAreaPartition @ 0x14042A350 (MiGetControlAreaPartition.c)
 *     MiReleaseControlAreaCharges @ 0x140432B78 (MiReleaseControlAreaCharges.c)
 *     MiDereferenceControlAreaProbe @ 0x14043F320 (MiDereferenceControlAreaProbe.c)
 *     PnpFreeGenericTableEntryNonPaged @ 0x14046B940 (PnpFreeGenericTableEntryNonPaged.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14049EDB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiLogSectionCreate @ 0x1407EC72C (MiLogSectionCreate.c)
 *     MiDeletePageFileSectionNodes @ 0x140A0BAE4 (MiDeletePageFileSectionNodes.c)
 */

void __fastcall MiSegmentDelete(__int64 a1)
{
  __int64 v1; // r15
  int v2; // ebx
  int v4; // edi
  BOOL v5; // r12d
  __int64 *v6; // rbp
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  volatile signed __int64 *v9; // rdi
  int v10; // ecx
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 ControlAreaPartition; // rax

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  v5 = *(_QWORD *)(a1 + 64) != 0LL;
  v6 = MiPrepareSegmentForDeletion(a1);
  if ( (v2 & 0x80) != 0 )
  {
    if ( (v4 & 0x800) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v1 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v6);
  }
  else if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 )
  {
    MiLogSectionCreate((__int64 *)a1, 0);
  }
  MiDeleteSegmentPages(a1);
  v7 = MiReleaseControlAreaCharges(a1, 0);
  if ( (v2 & 0x80) != 0 )
  {
    v8 = _InterlockedExchange64((volatile __int64 *)(a1 + 64), 0LL);
    v9 = (volatile signed __int64 *)(v8 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (v8 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v10 = v8 & 0xF;
      if ( v10 )
        _InterlockedAdd64(v9 - 6, -v10);
    }
    if ( (v2 & 0x20) != 0 )
    {
      MiUpdateSystemProtoPtesTree(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL, 0);
      PnpFreeGenericTableEntryNonPaged(v12, *(void **)(v1 + 64));
    }
  }
  else
  {
    MiDeletePageFileSectionNodes(a1);
    v9 = 0LL;
  }
  if ( v7 )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v5, v7);
  }
  if ( (v2 & 0xA0) == 0x80 )
    v11 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8uLL;
  else
    v11 = 0LL;
  MiDereferenceControlAreaProbe((volatile signed __int64 *)a1, 0);
  if ( v9 )
    ObfDereferenceObjectWithTag((PVOID)v9, 0x43536D4Du);
  if ( v11 )
    IoDiskIoAttributionDereference(v11);
}
