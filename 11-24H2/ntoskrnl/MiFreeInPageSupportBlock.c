/*
 * XREFs of MiFreeInPageSupportBlock @ 0x1402EEC40
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiFaultGetFileExtents @ 0x14036F4C8 (MiFaultGetFileExtents.c)
 *     MiAllocateInPageSupport @ 0x140444CE0 (MiAllocateInPageSupport.c)
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x140956EEC (MiPfAllocateMdls.c)
 *     MiReleaseVadEventBlocks @ 0x1409B0550 (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateVadEvent @ 0x140A7DA28 (MiFreeRotateVadEvent.c)
 *     MiGetReadyInPageBlock @ 0x140AA3298 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     MiInsertInPageBlock @ 0x1402EED00 (MiInsertInPageBlock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *v2; // rcx
  struct _SLIST_ENTRY *Next; // rcx
  volatile signed __int64 *v4; // rcx
  signed __int64 v5; // rdi
  bool v6; // cc
  signed __int64 v7; // rdi

  v2 = (struct _SLIST_ENTRY *)*((_QWORD *)&ListEntry[13].Next + 1);
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
