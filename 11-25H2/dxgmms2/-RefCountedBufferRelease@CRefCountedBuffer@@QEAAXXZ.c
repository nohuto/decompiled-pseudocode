/*
 * XREFs of ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140013A18
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x140012DDC (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x140013A64 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1400142E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1400150F0 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedBuffer::RefCountedBufferRelease(PVOID Entry)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Entry + 3, 0xFFFFFFFF) == 1 )
  {
    if ( *(_QWORD *)Entry )
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)Entry, Entry);
    else
      ExFreePoolWithTag(Entry, 0);
  }
}
