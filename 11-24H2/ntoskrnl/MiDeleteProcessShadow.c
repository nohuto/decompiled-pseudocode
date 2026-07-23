/*
 * XREFs of MiDeleteProcessShadow @ 0x140451008
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140450DBC (MiDeleteFinalPageTables.c)
 *     MmSynchronizeAddressPolicy @ 0x140A84ED8 (MmSynchronizeAddressPolicy.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeFlushProcessTb @ 0x140450FD8 (KeFlushProcessTb.c)
 *     MiDeleteTopLevelPage @ 0x14045128C (MiDeleteTopLevelPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, int a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  volatile signed __int64 *v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rax
  signed __int64 v16; // rbx
  bool v17; // zf
  __int64 v18; // [rsp+60h] [rbp+18h]

  v3 = a1;
  if ( (MiFlags & 0x600000) != 0 && *(_QWORD *)(a1 + 1288) )
  {
    v4 = a1 + 1024;
    v5 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 1198));
    v18 = v5;
    if ( a2 )
    {
      v12 = MiLockWorkingSetExclusive(a1 + 1024);
      CurrentIrql = v12;
      if ( !*(_QWORD *)(v3 + 1288) )
      {
        MiUnlockWorkingSetExclusive(v4, v12);
        return;
      }
      v13 = (volatile signed __int64 *)0xFFFFF6FB7DBED000LL;
      v14 = 256LL;
      do
      {
        v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v13);
        v16 = v15;
        do
        {
          if ( (v15 & 1) == 0 || v16 >= 0 )
            break;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          if ( _bittest64(&MiFlags, 0x24u) && (v16 & 0x21) == 1 && (unsigned __int64)v13 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v13, v16 & 0x7FFFFFFFFFFFFFFFLL, 128LL);
          v15 = _InterlockedCompareExchange64(v13, v16 & 0x7FFFFFFFFFFFFFFFLL, v16);
          v17 = v16 == v15;
          v16 = v15;
        }
        while ( !v17 );
        ++v13;
        --v14;
      }
      while ( v14 );
      v5 = v18;
      v4 = v3 + 1024;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
      }
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
    v7 = (_QWORD *)(((*(_QWORD *)(v3 + 1288) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v7);
    *(_QWORD *)(v3 + 1288) = 0LL;
    v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
    *(_QWORD *)(v3 + 344) = KiFlushPcid != 0;
    if ( a2 )
    {
      MiUnlockWorkingSetExclusive(v4, CurrentIrql);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
      }
      __writecr8(CurrentIrql);
    }
    MiReleasePtes((__int64)&qword_140E376A8, v7, 1u);
    KeFlushProcessTb(v9 << 12);
    if ( (unsigned int)MiDeleteTopLevelPage(v11, v9) != 3 )
      MiReleaseNonPagedResources(v5, 1uLL);
  }
}
