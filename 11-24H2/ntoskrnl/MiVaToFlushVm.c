/*
 * XREFs of MiVaToFlushVm @ 0x1402293EC
 * Callers:
 *     MiGetPteFromCopyList @ 0x1402259B0 (MiGetPteFromCopyList.c)
 *     MiReleasePteMappings @ 0x140241200 (MiReleasePteMappings.c)
 *     MiDeleteKernelStackPages @ 0x14026A1A4 (MiDeleteKernelStackPages.c)
 *     MiDecommitInitializePacket @ 0x1402899B0 (MiDecommitInitializePacket.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiUnlockCodePage @ 0x1402C7618 (MiUnlockCodePage.c)
 *     MiFlushValidPteFromTb @ 0x1403942E4 (MiFlushValidPteFromTb.c)
 *     MiOutSwapKernelStackPage @ 0x14039E778 (MiOutSwapKernelStackPage.c)
 *     MiOutPageSingleKernelStack @ 0x14039F510 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiZeroPageWorkMapping @ 0x14042FE70 (MiZeroPageWorkMapping.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiStackTheftFreezeProcessors @ 0x140675374 (MiStackTheftFreezeProcessors.c)
 *     MiMarkBootGuardPage @ 0x14067FECC (MiMarkBootGuardPage.c)
 *     MiClearSystemAccessBits @ 0x140683974 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x14068410C (MiWritePteHighLevel.c)
 *     MmDeleteShadowMapping @ 0x1407F699C (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A8B784 (MmUnmapProtectedKernelPageRange.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140C575E4 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14022ABF0 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 */

void *__fastcall MiVaToFlushVm(__int64 a1)
{
  unsigned __int64 LeafVa; // rax
  unsigned int SystemRegionType; // eax
  __int64 v3; // rax
  void *v4; // rcx

  LeafVa = MiGetLeafVa(a1);
  if ( LeafVa >= 0xFFFF800000000000uLL && (LeafVa < qword_140E2F280 || LeafVa > qword_140E2F290) )
    SystemRegionType = MiGetSystemRegionType(LeafVa);
  else
    SystemRegionType = 1;
  v3 = MiSystemVaTypeToVm(SystemRegionType);
  v4 = &unk_140E38100;
  if ( v3 )
    return (void *)v3;
  return v4;
}
