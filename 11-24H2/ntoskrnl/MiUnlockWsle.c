/*
 * XREFs of MiUnlockWsle @ 0x1402C7B94
 * Callers:
 *     MiTerminateWsle @ 0x1402856F0 (MiTerminateWsle.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiUnlockVa @ 0x1402C7B34 (MiUnlockVa.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402869A0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiUnlockPageTableCharges @ 0x1402C7D50 (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 *v8; // rbx
  __int64 v9; // rdx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r9
  __int64 ContainingPageTable; // rax
  __int64 v15; // rbx
  int v16; // ebp
  int v17; // [rsp+58h] [rbp+20h] BYREF

  if ( *(__int64 *)(a3 + 40) < 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
  {
    v15 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a3 + 40) >> 43) & 0x3FFLL));
    MiReturnCommit(v15, 1LL, 0);
    _InterlockedDecrement64((volatile signed __int64 *)(v15 + 19632));
  }
  v8 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = *v8;
  if ( a4 )
  {
    MiGetWsleContents(a1, a2);
    if ( *(__int64 *)(a3 + 40) >= 0 )
    {
      v17 = 0;
      v16 = 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v17);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      *(_QWORD *)(a3 + 24) |= 0x4000000000000000uLL;
    }
    else
    {
      v16 = 0;
    }
    a4 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(
           (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           CLFS_LSN_NULL_EXT,
           0);
    if ( v16 )
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    LOBYTE(v9) = (v9 & 0x20) == 0;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v9);
    v12 = v11;
    if ( EffectivePagePriorityThread < 5 )
      v12 = 7;
    MiSetVaAgeList(a1, a2, 1u, v12);
  }
  if ( a2 < 0xFFFF800000000000uLL )
  {
    if ( *(__int64 *)(a3 + 40) < 0 )
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    ContainingPageTable = MiGetContainingPageTable(v8);
    MiUnlockPageTableCharges(48 * ContainingPageTable - 0x220000000000LL);
  }
  return a4;
}
