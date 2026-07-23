/*
 * XREFs of MiUnlockFlushMdl @ 0x1402571C0
 * Callers:
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 * Callees:
 *     MiUnlockMdlWritePages @ 0x140257B30 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x140258D7C (MiRetardMdl.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  KIRQL v6; // al
  __int64 *v7; // rbx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rdx
  __int64 *v12; // r8

  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    MiRetardMdl(MemoryDescriptorList);
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(MemoryDescriptorList, a3);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  --*(_DWORD *)(a2 + 76);
  v7 = 0LL;
  v8 = v6;
  v9 = (_QWORD *)(a2 + 80);
  v10 = *(__int64 **)(a2 + 80);
  if ( v10 )
  {
    do
    {
      v12 = (__int64 *)*v10;
      if ( (v10[1] & 8) != 0 )
      {
        *v10 = (__int64)v7;
        v7 = v10;
        *v9 = v12;
      }
      else
      {
        v9 = v10;
      }
      v10 = v12;
    }
    while ( v12 );
  }
  if ( (_BYTE)v8 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = v8;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(v8);
  }
  if ( v7 )
    MiReleaseControlAreaWaiters(v7);
}
