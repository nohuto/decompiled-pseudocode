/*
 * XREFs of MiUnlockWsle @ 0x1402CC3B4
 * Callers:
 *     MiTerminateWsle @ 0x140231080 (MiTerminateWsle.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiUnlockVa @ 0x1402CC790 (MiUnlockVa.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 * Callees:
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140247E00 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableCharges @ 0x1402CBD20 (MiUnlockPageTableCharges.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
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
  __int64 v16; // r9
  int v17; // ebp
  int v18; // [rsp+58h] [rbp+20h] BYREF

  if ( *(__int64 *)(a3 + 40) < 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
  {
    v15 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a3 + 40) >> 43) & 0x3FFLL));
    MiReturnCommit(v15, 1LL, 0LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v15 + 19632));
  }
  v8 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = *v8;
  if ( a4 )
  {
    MiGetWsleContents(a1, a2);
    if ( *(__int64 *)(a3 + 40) >= 0 )
    {
      v18 = 0;
      v17 = 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      *(_QWORD *)(a3 + 24) |= 0x4000000000000000uLL;
    }
    else
    {
      v17 = 0;
    }
    a4 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(
           (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           CLFS_LSN_NULL_EXT,
           0LL,
           v16);
    if ( v17 )
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    LOBYTE(v9) = (v9 & 0x20) == 0;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v9, a3);
    v12 = v11;
    if ( EffectivePagePriorityThread < 5 )
      v12 = 7;
    MiSetVaAgeList(a1, a2, 1u, v12);
  }
  if ( a2 < 0xFFFF800000000000uLL )
  {
    if ( *(__int64 *)(a3 + 40) < 0 )
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v8);
    MiUnlockPageTableCharges(48 * ContainingPageTable - 0x220000000000LL, 2);
  }
  return a4;
}
