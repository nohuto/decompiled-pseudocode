/*
 * XREFs of MiUnlockWsle @ 0x1403DB664
 * Callers:
 *     MiTerminateWsle @ 0x140201850 (MiTerminateWsle.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiUnlockVa @ 0x1403DB604 (MiUnlockVa.c)
 * Callees:
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140201590 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableCharges @ 0x1403DB820 (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v9; // dl
  __int64 v10; // r9
  __int64 ContainingPageTable; // rax
  __int64 v13; // rbx
  int v14; // ebp
  int v15; // [rsp+58h] [rbp+20h] BYREF

  if ( *(__int64 *)(a3 + 40) < 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
  {
    v13 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a3 + 40) >> 43) & 0x3FFLL));
    MiReturnCommit(v13, 1LL, 0);
    _InterlockedDecrement64((volatile signed __int64 *)(v13 + 19632));
  }
  if ( a4 )
  {
    MiGetWsleContents(a1, a2);
    if ( *(__int64 *)(a3 + 40) >= 0 )
    {
      v15 = 0;
      v14 = 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      *(_QWORD *)(a3 + 24) |= 0x4000000000000000uLL;
    }
    else
    {
      v14 = 0;
    }
    a4 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(
           (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           CLFS_LSN_NULL_EXT,
           0);
    if ( v14 )
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
    v10 = v9;
    if ( EffectivePagePriorityThread < 5 )
      v10 = 7LL;
    MiSetVaAgeList(a1, a2, 1LL, v10);
  }
  if ( a2 < 0xFFFF800000000000uLL )
  {
    if ( *(__int64 *)(a3 + 40) < 0 )
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    ContainingPageTable = MiGetContainingPageTable(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiUnlockPageTableCharges(48 * ContainingPageTable - 0x220000000000LL);
  }
  return a4;
}
