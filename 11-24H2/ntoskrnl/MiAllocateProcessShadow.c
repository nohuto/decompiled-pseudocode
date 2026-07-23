/*
 * XREFs of MiAllocateProcessShadow @ 0x140A51A70
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE7F8C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiInitializeSelfmap @ 0x1402EF544 (MiInitializeSelfmap.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     KeMakeUserDirectoryTableBase @ 0x1404951F8 (KeMakeUserDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x1404AE4B0 (MiMarkPfnTradable.c)
 *     MiAllocateTopLevelPage @ 0x140A51BBC (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  ULONG *ProcessPartition; // rbp
  ULONG_PTR v5; // rdi
  __int64 TopLevelPage; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v11; // rbx

  if ( (MiFlags & 0x600000) == 0 )
    return 0LL;
  ProcessPartition = (ULONG *)MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0LL) >= 0 )
  {
    v5 = MiReservePtes((__int64)&qword_140E376A8, 1u);
    if ( v5 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, a2);
      MiInitializeSelfmap(TopLevelPage);
      MiMarkPfnTradable((_QWORD *)(48 * TopLevelPage - 0x220000000000LL), v7, v8, v9);
      *(_QWORD *)(a1 + 344) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      ValidPte = MiMakeValidPte(0LL, TopLevelPage, -1610612732);
      v11 = ValidPte;
      if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v5 >= MiGetPteAddress(0xFFFF800000000000uLL) )
        MiCheckLinearProtectedPteAccessedBit(v5, v11, 128LL);
      *(_QWORD *)v5 = v11;
      *(_QWORD *)(a1 + 1288) = (__int64)(v5 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources((__int64)ProcessPartition, 1uLL);
  }
  return 3221225626LL;
}
