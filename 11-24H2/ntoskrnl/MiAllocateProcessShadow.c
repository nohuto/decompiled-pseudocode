/*
 * XREFs of MiAllocateProcessShadow @ 0x140A5A1B0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE66AC (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     KeMakeUserDirectoryTableBase @ 0x14049A814 (KeMakeUserDirectoryTableBase.c)
 *     MiInitializeSelfmap @ 0x1404A6DD0 (MiInitializeSelfmap.c)
 *     MiMarkPfnTradable @ 0x1404B3C14 (MiMarkPfnTradable.c)
 *     MiAllocateTopLevelPage @ 0x140A5A2FC (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  ULONG *ProcessPartition; // rbp
  ULONG_PTR v5; // rdi
  __int64 TopLevelPage; // rbx
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v8; // rbx

  if ( (MiFlags & 0x600000) == 0 )
    return 0LL;
  ProcessPartition = (ULONG *)MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0) >= 0 )
  {
    v5 = MiReservePtes((__int64)&qword_140E37568, 1u);
    if ( v5 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, a2);
      MiInitializeSelfmap(TopLevelPage);
      MiMarkPfnTradable((_QWORD *)(48 * TopLevelPage - 0x220000000000LL));
      *(_QWORD *)(a1 + 344) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      ValidPte = MiMakeValidPte(0LL, TopLevelPage, -1610612732);
      v8 = ValidPte;
      if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v5 >= MiGetPteAddress(0xFFFF800000000000uLL) )
        MiCheckLinearProtectedPteAccessedBit(v5, v8, 128);
      *(_QWORD *)v5 = v8;
      *(_QWORD *)(a1 + 1288) = (__int64)(v5 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources((__int64)ProcessPartition, 1uLL);
  }
  return 3221225626LL;
}
