/*
 * XREFs of MiGetInPageSupportBlock @ 0x1402E42D0
 * Callers:
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiAllocateInPageSupport @ 0x140444CE0 (MiAllocateInPageSupport.c)
 *     MiPfAllocateMdls @ 0x140956EEC (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x140A680A8 (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x140AA3298 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializeInPageSupport @ 0x1402E44F8 (MiInitializeInPageSupport.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

PSLIST_ENTRY __fastcall MiGetInPageSupportBlock(unsigned int a1, volatile signed __int64 *a2)
{
  int v3; // ebp
  __int64 v5; // rbx
  BOOL v6; // r15d
  PSLIST_ENTRY v7; // rdi
  int v8; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int64 v11; // rdx
  char v12; // cl
  __int64 v13; // rax
  ULONG_PTR v15; // rdx
  __int64 Pool; // rax
  __int64 v17; // rbx

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
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, 1LL);
    if ( EffectivePagePriorityThread > 5 )
    {
      LOBYTE(EffectivePagePriorityThread) = 5;
    }
    else
    {
      v8 |= 0x100000u;
      if ( EffectivePagePriorityThread )
      {
        v12 = EffectivePagePriorityThread - 1;
LABEL_8:
        LODWORD(v7[12].Next) = v8 | ((EffectivePagePriorityThread & 7 | (8 * (v12 & 7))) << 11);
        if ( (a1 & 2) != 0 )
        {
          v13 = KeAbPreAcquire(v7, 0LL, 0LL);
          if ( v13 )
          {
            *(_BYTE *)(v13 + 10) = 1;
            a2 = (volatile signed __int64 *)v7;
          }
        }
        else if ( a2 && _InterlockedExchangeAdd64(a2, v11) + 1 <= 1 )
        {
          __fastfail(0xEu);
        }
        *((_QWORD *)&v7[13].Next + 1) = a2;
        return v7;
      }
    }
    v12 = EffectivePagePriorityThread;
    goto LABEL_8;
  }
  if ( (a1 & 4) != 0 )
    return 0LL;
  v15 = 2368LL;
  if ( v6 )
    v15 = 448LL;
  Pool = MiAllocatePool(0x40uLL, v15, 1850305869);
  v17 = Pool;
  if ( Pool )
    MiInitializeInPageSupport(Pool, a1, a2);
  return (PSLIST_ENTRY)v17;
}
