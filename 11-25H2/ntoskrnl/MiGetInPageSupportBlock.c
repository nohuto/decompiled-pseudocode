/*
 * XREFs of MiGetInPageSupportBlock @ 0x140387260
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x14037C3C0 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiPfAllocateMdls @ 0x1409CA7D8 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x140A65608 (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x140A9EAE8 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializeInPageSupport @ 0x140387488 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

PSLIST_ENTRY __fastcall MiGetInPageSupportBlock(unsigned int a1, volatile signed __int64 *a2)
{
  int v3; // ebp
  __int64 v5; // rbx
  BOOL v6; // r15d
  PSLIST_ENTRY v7; // rdi
  int v8; // ebx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int64 v12; // rdx
  char v13; // cl
  __int64 *v14; // rax
  ULONG_PTR v16; // rdx
  __int64 Pool; // rax
  __int64 v18; // rbx

  v3 = a1 & 1;
  v5 = 16LL * !(a1 & 1);
  v6 = !(a1 & 1);
  v7 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)((char *)&MiState + v5 + 43104));
  if ( v7 || (v7 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)((char *)&MiState + v5 + 43136))) != 0LL )
  {
    v8 = 0;
    memset_0(v7, 0, 0x110uLL);
    HIDWORD(v7[2].Next) = 0;
    *(_WORD *)((char *)&v7[2].Next + 1) = 1536;
    v7[3].Next = (PSLIST_ENTRY)((char *)v7 + 40);
    *((_QWORD *)&v7[2].Next + 1) = (char *)v7 + 40;
    *((_WORD *)&v7[3].Next + 4) = 0;
    *((_DWORD *)&v7[3].Next + 3) = 0;
    *((_BYTE *)&v7[3].Next + 10) = 6;
    *((_QWORD *)&v7[4].Next + 1) = v7 + 4;
    v7[4].Next = v7 + 4;
    LODWORD(v7[11].Next) = 1;
    if ( v3 )
      v8 = 256;
    *((_QWORD *)&v7[1].Next + 1) = v7 + 1;
    v7[1].Next = v7 + 1;
    CurrentThread = KeGetCurrentThread();
    *((_QWORD *)&v7[9].Next + 1) = CurrentThread;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, 1LL, v9);
    if ( EffectivePagePriorityThread > 5 )
    {
      LOBYTE(EffectivePagePriorityThread) = 5;
    }
    else
    {
      v8 |= 0x100000u;
      if ( EffectivePagePriorityThread )
      {
        v13 = EffectivePagePriorityThread - 1;
LABEL_8:
        LODWORD(v7[12].Next) = v8 | ((EffectivePagePriorityThread & 7 | (8 * (v13 & 7))) << 11);
        if ( (a1 & 2) != 0 )
        {
          v14 = KeAbPreAcquire((__int64)v7, 0LL);
          if ( v14 )
          {
            *((_BYTE *)v14 + 10) = 1;
            a2 = (volatile signed __int64 *)v7;
          }
        }
        else if ( a2 && _InterlockedExchangeAdd64(a2, v12) + 1 <= 1 )
        {
          __fastfail(0xEu);
        }
        *((_QWORD *)&v7[13].Next + 1) = a2;
        return v7;
      }
    }
    v13 = EffectivePagePriorityThread;
    goto LABEL_8;
  }
  if ( (a1 & 4) != 0 )
    return 0LL;
  v16 = 2368LL;
  if ( v6 )
    v16 = 448LL;
  Pool = MiAllocatePool(0x40uLL, v16, 1850305869);
  v18 = Pool;
  if ( Pool )
    MiInitializeInPageSupport(Pool, a1, a2);
  return (PSLIST_ENTRY)v18;
}
