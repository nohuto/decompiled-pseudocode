/*
 * XREFs of MiFreeInPageSupportBlock @ 0x140427430
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiAllocateInPageSupport @ 0x140341520 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiFaultGetFileExtents @ 0x140426C40 (MiFaultGetFileExtents.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x14093A89C (MiPfAllocateMdls.c)
 *     MiReleaseVadEventBlocks @ 0x14099A250 (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateVadEvent @ 0x140A77D28 (MiFreeRotateVadEvent.c)
 *     MiGetReadyInPageBlock @ 0x140A9E628 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiInsertInPageBlock @ 0x1404274F0 (MiInsertInPageBlock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
