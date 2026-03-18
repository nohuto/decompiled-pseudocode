/*
 * XREFs of MiAllocateProcessShadow @ 0x140A47EB0
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140A47A3C (MmInitializeHandBuiltProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInitializeSelfmap @ 0x14040F5E4 (MiInitializeSelfmap.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     KeMakeUserDirectoryTableBase @ 0x14049B50C (KeMakeUserDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x1404B4A4C (MiMarkPfnTradable.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
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
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0LL) >= 0 )
  {
    v5 = MiReservePtes((__int64)&qword_140E37328, 1u);
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
