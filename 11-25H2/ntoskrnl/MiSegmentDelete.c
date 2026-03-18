/*
 * XREFs of MiSegmentDelete @ 0x140A095FC
 * Callers:
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x140419264 (MiDestroySection.c)
 *     MiDeleteEmptyControlAreas @ 0x140459924 (MiDeleteEmptyControlAreas.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402A87DC (MiUpdateSystemProtoPtesTree.c)
 *     IoDiskIoAttributionDereference @ 0x14034EA34 (IoDiskIoAttributionDereference.c)
 *     MiPrepareSegmentForDeletion @ 0x140418F34 (MiPrepareSegmentForDeletion.c)
 *     MiReleaseControlAreaCharges @ 0x14041965C (MiReleaseControlAreaCharges.c)
 *     MiDereferenceControlAreaProbe @ 0x14043A3C4 (MiDereferenceControlAreaProbe.c)
 *     MiGetControlAreaPartition @ 0x14043B7F0 (MiGetControlAreaPartition.c)
 *     MiDeleteSegmentPages @ 0x14044A758 (MiDeleteSegmentPages.c)
 *     MiFreeProtoPool @ 0x140472BA0 (MiFreeProtoPool.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404A53F0 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiLogSectionCreate @ 0x1407DC2BC (MiLogSectionCreate.c)
 *     MiDeletePageFileSectionNodes @ 0x140A09798 (MiDeletePageFileSectionNodes.c)
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
  MiDeleteSegmentPages((_QWORD *)a1);
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
      MiFreeProtoPool(v12, *(void **)(v1 + 64));
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
