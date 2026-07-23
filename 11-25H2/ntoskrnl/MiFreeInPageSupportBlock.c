/*
 * XREFs of MiFreeInPageSupportBlock @ 0x14023B4B0
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiAllocateInPageSupport @ 0x14037C3C0 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiFaultGetFileExtents @ 0x14046FAA0 (MiFaultGetFileExtents.c)
 *     MiReleaseVadEventBlocks @ 0x140901E30 (MiReleaseVadEventBlocks.c)
 *     MmPrefetchPagesEx @ 0x1409C8D00 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x1409CA7D8 (MiPfAllocateMdls.c)
 *     MiFreeRotateVadEvent @ 0x140A7A77C (MiFreeRotateVadEvent.c)
 *     MiGetReadyInPageBlock @ 0x140A9EAE8 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInsertInPageBlock @ 0x14023B570 (MiInsertInPageBlock.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *v2; // rcx
  _SLIST_ENTRY *Next; // rcx
  volatile signed __int64 *v4; // rcx
  signed __int64 v5; // rdi
  bool v6; // cc
  signed __int64 v7; // rdi

  v2 = (_SLIST_ENTRY *)*((_QWORD *)&ListEntry[13].Next + 1);
  if ( v2 == ListEntry && *((struct _KTHREAD **)&ListEntry[9].Next + 1) == KeGetCurrentThread() )
    KeAbPostRelease((ULONG_PTR)v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[11], 0xFFFFFFFF) == 1 )
  {
    Next = ListEntry[16].Next;
    if ( Next && Next != &ListEntry[17] )
      ExFreePoolWithTag(Next, 0);
    v4 = (volatile signed __int64 *)*((_QWORD *)&ListEntry[13].Next + 1);
    if ( v4 )
    {
      if ( v4 != (volatile signed __int64 *)ListEntry )
      {
        v5 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
        v6 = v5 <= 1;
        v7 = v5 - 1;
        if ( v6 )
        {
          if ( v7 )
            __fastfail(0xEu);
          ExFreePoolWithTag((PVOID)v4, 0);
        }
      }
    }
    if ( !(unsigned int)MiInsertInPageBlock(ListEntry) )
      ExFreePoolWithTag(ListEntry, 0);
  }
}
