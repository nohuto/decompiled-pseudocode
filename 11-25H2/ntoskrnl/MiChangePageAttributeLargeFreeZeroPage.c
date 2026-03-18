/*
 * XREFs of MiChangePageAttributeLargeFreeZeroPage @ 0x1404A8AC8
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x14034FBA4 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     MiSafeLockPageAtDpc @ 0x140220D38 (MiSafeLockPageAtDpc.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiLargePfnPromoteCandidate @ 0x1403506F0 (MiLargePfnPromoteCandidate.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x140442050 (MiUpdatePageMoveInProgressInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 */

__int64 __fastcall MiChangePageAttributeLargeFreeZeroPage(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  unsigned __int64 v4; // r14
  int v5; // r15d
  int v6; // esi
  unsigned __int64 v8; // rdi
  __int64 CurrentIrql; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 v14; // r12
  __int16 v15; // r15
  int v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  if ( a4 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  }
  if ( MiSafeLockPageAtDpc(v8, a2, a3) == 17 )
    goto LABEL_14;
  v11 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  if ( !MiLargePfnPromoteCandidate(v11, a1, v6) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_14:
    v12 = 0;
    goto LABEL_8;
  }
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6 == v5 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = 1;
  }
  else
  {
    v12 = 1;
    v14 = *(_QWORD *)(v11 + 16) + 57216LL * (unsigned int)MiPageToNode(v8);
    MiUpdatePageMoveInProgressInternal(v14, 1u, 1, 0);
    MiUnlinkFreeOrZeroedPage(v8, 0LL, 0);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiChangePageAttribute(a1, v5);
    v15 = ((*(_QWORD *)(a1 + 16) & 0x3E0LL) != 0) + 1;
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
    if ( (*(_QWORD *)(a1 + 40) & 0x20000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPossiblyBadPage(v8);
    }
    else
    {
      MiInsertPageInFreeOrZeroedList(v8, v15);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUpdatePageMoveInProgressInternal(v14, 1u, 0, 0);
  }
LABEL_8:
  if ( (unsigned __int8)v4 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = v4;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(v4);
  }
  return v12;
}
