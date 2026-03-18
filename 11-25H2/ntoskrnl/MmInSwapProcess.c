/*
 * XREFs of MmInSwapProcess @ 0x1402F1540
 * Callers:
 *     KiInSwapProcesses @ 0x1402F1450 (KiInSwapProcesses.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x14027FC50 (MiReturnWsToExpansionList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiCopyTopLevelMappings @ 0x1403FDDF4 (MiCopyTopLevelMappings.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiSetPageTablePfnBuddy @ 0x14049D0B8 (MiSetPageTablePfnBuddy.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceInswapProcess @ 0x140641974 (EtwTraceInswapProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14065E768 (MiReAcquireOutSwappedProcessCommit.c)
 */

char __fastcall MmInSwapProcess(volatile signed __int32 *Object)
{
  char result; // al
  __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rdx
  int v10; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_DWORD *)Object + 125) & 0x80u) != 0 )
  {
    v4 = ((unsigned __int64)MiMakeOutswappedPageResident(Object, 0xFFFFF6FB7DBEDF68uLL, -1LL) >> 12) & 0xFFFFFFFFFFLL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v3);
    }
    v6 = 48 * v4 - 0x220000000000LL;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    *(_QWORD *)(v6 + 24) = (*(_QWORD *)(v6 + 24) + 1LL) ^ (*(_QWORD *)(v6 + 24) ^ (*(_QWORD *)(v6 + 24) + 1LL)) & 0xC000000000000000uLL;
    MiSetPfnContainingFrame(48 * v4 - 0x220000000000LL, v4);
    MiSetPageTablePfnBuddy(48 * v4 - 0x220000000000LL, Object, 1LL);
    *(_QWORD *)(v6 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_QWORD *)v6 & 1) == 0 )
      *(_QWORD *)v6 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = v4 << 12;
    v8 = KiFlushPcid == 0;
    *((_QWORD *)Object + 146) = 1LL;
    *((_QWORD *)Object + 147) = 1LL;
    if ( !v8 )
      v7 |= 2uLL;
    *((_QWORD *)Object + 5) = v7;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
    if ( (Object[125] & 0x800000) != 0 )
    {
      _InterlockedAnd(Object + 125, 0xFF7FFFFF);
      MiCopyTopLevelMappings(Object, *((_QWORD *)Object + 5) >> 12);
    }
    MiReturnWsToExpansionList((__int64)(Object + 256), 0);
    _InterlockedAnd(Object + 125, 0xFFFFFF7F);
    LOBYTE(v9) = CurrentIrql;
    MiReleaseSpinLockExclusive(&dword_140E37180, v9);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(Object);
  }
  _InterlockedAnd(Object + 125, 0xFFFFFFBF);
  result = HIBYTE(*((_DWORD *)Object + 302)) & 0x30;
  if ( result == 32 )
    return MiReAcquireOutSwappedProcessCommit((PVOID)Object);
  return result;
}
