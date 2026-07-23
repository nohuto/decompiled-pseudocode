/*
 * XREFs of MiVaToFlushVm @ 0x1402FC5EC
 * Callers:
 *     MiUnlockCodePage @ 0x140203B44 (MiUnlockCodePage.c)
 *     MiReleasePteMappings @ 0x140209350 (MiReleasePteMappings.c)
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStackPages @ 0x14021F734 (MiDeleteKernelStackPages.c)
 *     MiGetPteFromCopyList @ 0x140252D60 (MiGetPteFromCopyList.c)
 *     MiDecommitInitializePacket @ 0x1402995B0 (MiDecommitInitializePacket.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiFlushValidPteFromTb @ 0x14038D900 (MiFlushValidPteFromTb.c)
 *     MiOutSwapKernelStackPage @ 0x1403C6E14 (MiOutSwapKernelStackPage.c)
 *     MiZeroPageWorkMapping @ 0x140421920 (MiZeroPageWorkMapping.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiStackTheftFreezeProcessors @ 0x140676544 (MiStackTheftFreezeProcessors.c)
 *     MiMarkBootGuardPage @ 0x1406810CC (MiMarkBootGuardPage.c)
 *     MiClearSystemAccessBits @ 0x140684AD0 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x140685238 (MiWritePteHighLevel.c)
 *     MmDeleteShadowMapping @ 0x1407F7110 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A87C74 (MmUnmapProtectedKernelPageRange.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 */

void *__fastcall MiVaToFlushVm(unsigned __int64 a1)
{
  unsigned __int64 LeafVa; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int SystemRegionType; // eax
  __int64 v5; // rax
  void *v6; // rcx

  LeafVa = MiGetLeafVa(a1);
  if ( LeafVa >= 0xFFFF800000000000uLL && (LeafVa < qword_140E2F3C0 || LeafVa > qword_140E2F3D0) )
    SystemRegionType = MiGetSystemRegionType(LeafVa, v2, v3);
  else
    SystemRegionType = 1;
  v5 = MiSystemVaTypeToVm(SystemRegionType);
  v6 = &unk_140E38240;
  if ( v5 )
    return (void *)v5;
  return v6;
}
