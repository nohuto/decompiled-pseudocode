/*
 * XREFs of MmInSwapProcess @ 0x140338A94
 * Callers:
 *     KiInSwapProcesses @ 0x1403389A4 (KiInSwapProcesses.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiCopyTopLevelMappings @ 0x140393D4C (MiCopyTopLevelMappings.c)
 *     MiReturnWsToExpansionList @ 0x1403D9400 (MiReturnWsToExpansionList.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiSetPageTablePfnBuddy @ 0x140498190 (MiSetPageTablePfnBuddy.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceInswapProcess @ 0x14064D940 (EtwTraceInswapProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066A288 (MiReAcquireOutSwappedProcessCommit.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
    if ( (*((_DWORD *)Object + 125) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFF7FFFFF);
      MiCopyTopLevelMappings(Object, *((_QWORD *)Object + 5) >> 12);
    }
    MiReturnWsToExpansionList(Object + 1024, 0LL);
    _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFF7F);
    MiReleaseSpinLockExclusive(&dword_140E373C0, CurrentIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(Object);
  }
  _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFFBF);
  result = HIBYTE(*((_DWORD *)Object + 302)) & 0x30;
  if ( result == 32 )
    return MiReAcquireOutSwappedProcessCommit(Object);
  return result;
}
