/*
 * XREFs of MiUnlockFlushMdl @ 0x1402F1680
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockMdlWritePages @ 0x1402F1FF0 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x1402F323C (MiRetardMdl.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  KIRQL v6; // al
  __int64 v7; // r8
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdx

  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    MiRetardMdl(MemoryDescriptorList);
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(MemoryDescriptorList, a3);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  --*(_DWORD *)(a2 + 76);
  v8 = 0LL;
  v9 = v6;
  v10 = (_QWORD *)(a2 + 80);
  v11 = *(_QWORD *)(a2 + 80);
  if ( v11 )
  {
    do
    {
      v7 = *(_QWORD *)v11;
      if ( (*(_DWORD *)(v11 + 8) & 8) != 0 )
      {
        *(_QWORD *)v11 = v8;
        v8 = (_QWORD *)v11;
        *v10 = v7;
      }
      else
      {
        v10 = (_QWORD *)v11;
      }
      v11 = v7;
    }
    while ( v7 );
  }
  if ( (_BYTE)v9 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = v9;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(v9);
  }
  if ( v8 )
    MiReleaseControlAreaWaiters(v8, v11, v7);
}
