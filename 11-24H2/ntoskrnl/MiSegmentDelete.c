/*
 * XREFs of MiSegmentDelete @ 0x140A131E4
 * Callers:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiDeleteEmptyControlAreas @ 0x1403F7618 (MiDeleteEmptyControlAreas.c)
 *     MiDestroySection @ 0x140417200 (MiDestroySection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     IoDiskIoAttributionDereference @ 0x140245180 (IoDiskIoAttributionDereference.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiDereferenceControlAreaProbe @ 0x14036F6B4 (MiDereferenceControlAreaProbe.c)
 *     MiReleaseControlAreaCharges @ 0x14037024C (MiReleaseControlAreaCharges.c)
 *     MiDeleteSegmentPages @ 0x1403707BC (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x140416EDC (MiPrepareSegmentForDeletion.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     PnpFreeGenericTableEntryNonPaged @ 0x1404711C0 (PnpFreeGenericTableEntryNonPaged.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404A4024 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     MiLogSectionCreate @ 0x1407EC15C (MiLogSectionCreate.c)
 *     MiDeletePageFileSectionNodes @ 0x140A13384 (MiDeletePageFileSectionNodes.c)
 */

void __fastcall MiSegmentDelete(__int64 a1)
{
  __int64 v1; // r15
  int v2; // ebx
  int v4; // edi
  BOOL v5; // r12d
  __int64 v6; // rdx
  __int64 *v7; // rbp
  __int64 v8; // r8
  unsigned __int64 v9; // rbp
  __int64 v10; // rcx
  volatile signed __int64 *v11; // rdi
  int v12; // ecx
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 ControlAreaPartition; // rax

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  v5 = *(_QWORD *)(a1 + 64) != 0LL;
  v7 = MiPrepareSegmentForDeletion(a1);
  if ( (v2 & 0x80) != 0 )
  {
    if ( (v4 & 0x800) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v1 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v7, v6, v8);
  }
  else if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 )
  {
    MiLogSectionCreate((__int64 *)a1, 0);
  }
  MiDeleteSegmentPages(a1);
  v9 = MiReleaseControlAreaCharges(a1, 0);
  if ( (v2 & 0x80) != 0 )
  {
    v10 = _InterlockedExchange64((volatile __int64 *)(a1 + 64), 0LL);
    v11 = (volatile signed __int64 *)(v10 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (v10 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v12 = v10 & 0xF;
      if ( v12 )
        _InterlockedAdd64(v11 - 6, -v12);
    }
    if ( (v2 & 0x20) != 0 )
    {
      MiUpdateSystemProtoPtesTree(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL, 0);
      PnpFreeGenericTableEntryNonPaged(v14, *(void **)(v1 + 64));
    }
  }
  else
  {
    MiDeletePageFileSectionNodes(a1);
    v11 = 0LL;
  }
  if ( v9 )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v5, v9);
  }
  if ( (v2 & 0xA0) == 0x80 )
    v13 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8uLL;
  else
    v13 = 0LL;
  MiDereferenceControlAreaProbe((volatile signed __int64 *)a1, 0);
  if ( v11 )
    ObfDereferenceObjectWithTag((PVOID)v11, 0x43536D4Du);
  if ( v13 )
    IoDiskIoAttributionDereference(v13);
}
