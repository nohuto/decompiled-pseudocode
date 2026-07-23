/*
 * XREFs of MmInSwapProcess @ 0x1402DFEE4
 * Callers:
 *     KiInSwapProcesses @ 0x1402DE3B8 (KiInSwapProcesses.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiReturnWsToExpansionList @ 0x1402F26D0 (MiReturnWsToExpansionList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiCopyTopLevelMappings @ 0x14038D368 (MiCopyTopLevelMappings.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiSetPageTablePfnBuddy @ 0x140492B70 (MiSetPageTablePfnBuddy.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceInswapProcess @ 0x14064BF50 (EtwTraceInswapProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066B458 (MiReAcquireOutSwappedProcessCommit.c)
 */

char __fastcall MmInSwapProcess(char *Object)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  bool v9; // zf
  int v10; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_DWORD *)Object + 125) & 0x80u) != 0 )
  {
    v5 = ((unsigned __int64)MiMakeOutswappedPageResident(Object, 0xFFFFF6FB7DBEDF68uLL, -1LL) >> 12) & 0xFFFFFFFFFFLL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = 2;
      LOBYTE(v4) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v4, v3);
    }
    v7 = 48 * v5 - 0x220000000000LL;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *(_QWORD *)(v7 + 24) = (*(_QWORD *)(v7 + 24) + 1LL) ^ (*(_QWORD *)(v7 + 24) ^ (*(_QWORD *)(v7 + 24) + 1LL)) & 0xC000000000000000uLL;
    MiSetPfnContainingFrame(48 * v5 - 0x220000000000LL, v5);
    MiSetPageTablePfnBuddy(48 * v5 - 0x220000000000LL, Object, 1LL);
    *(_QWORD *)(v7 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_QWORD *)v7 & 1) == 0 )
      *(_QWORD *)v7 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = v5 << 12;
    v9 = KiFlushPcid == 0;
    *((_QWORD *)Object + 146) = 1LL;
    *((_QWORD *)Object + 147) = 1LL;
    if ( !v9 )
      v8 |= 2uLL;
    *((_QWORD *)Object + 5) = v8;
    ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
    if ( (*((_DWORD *)Object + 125) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFF7FFFFF);
      MiCopyTopLevelMappings(Object, *((_QWORD *)Object + 5) >> 12);
    }
    MiReturnWsToExpansionList(Object + 1024, 0LL);
    _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFF7F);
    MiReleaseSpinLockExclusive(&SpinLock, CurrentIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(Object);
  }
  _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFFBF);
  result = HIBYTE(*((_DWORD *)Object + 302)) & 0x30;
  if ( result == 32 )
    return MiReAcquireOutSwappedProcessCommit(Object);
  return result;
}
