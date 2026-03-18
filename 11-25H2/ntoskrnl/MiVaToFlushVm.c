/*
 * XREFs of MiVaToFlushVm @ 0x140327844
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiReleasePteMappings @ 0x1402BF490 (MiReleasePteMappings.c)
 *     MiGetPteFromCopyList @ 0x1402C7490 (MiGetPteFromCopyList.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiUnlockCodePage @ 0x14036E5B8 (MiUnlockCodePage.c)
 *     MiDecommitInitializePacket @ 0x14038308C (MiDecommitInitializePacket.c)
 *     MiDeleteKernelStackPages @ 0x1403B3258 (MiDeleteKernelStackPages.c)
 *     MiOutSwapKernelStackPage @ 0x1403D9490 (MiOutSwapKernelStackPage.c)
 *     MiFlushValidPteFromTb @ 0x1403FF67C (MiFlushValidPteFromTb.c)
 *     MiZeroPageWorkMapping @ 0x14043AE70 (MiZeroPageWorkMapping.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiStackTheftFreezeProcessors @ 0x140669914 (MiStackTheftFreezeProcessors.c)
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MiClearSystemAccessBits @ 0x140678120 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x140678880 (MiWritePteHighLevel.c)
 *     MmDeleteShadowMapping @ 0x1407E6B0C (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A86B54 (MmUnmapProtectedKernelPageRange.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x140219640 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 */

struct _LIST_ENTRY **__fastcall MiVaToFlushVm(unsigned __int64 a1)
{
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  struct _LIST_ENTRY **v3; // rax
  void *v4; // rcx

  LeafVa = MiGetLeafVa(a1);
  if ( LeafVa >= 0xFFFF800000000000uLL && (LeafVa < qword_140E2F040 || LeafVa > qword_140E2F050) )
    SystemRegionType = MiGetSystemRegionType(LeafVa);
  else
    SystemRegionType = 1;
  v3 = MiSystemVaTypeToVm(SystemRegionType);
  v4 = &unk_140E37EC0;
  if ( v3 )
    return v3;
  return (struct _LIST_ENTRY **)v4;
}
