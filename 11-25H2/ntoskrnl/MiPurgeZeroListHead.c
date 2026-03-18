/*
 * XREFs of MiPurgeZeroListHead @ 0x1404C5F04
 * Callers:
 *     MiPurgeZeroListHeads @ 0x1404C5EB0 (MiPurgeZeroListHeads.c)
 * Callees:
 *     MiSafeLockPageAtDpc @ 0x140220D38 (MiSafeLockPageAtDpc.c)
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x140442050 (MiUpdatePageMoveInProgressInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPurgeZeroListHead(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  ULONG_PTR v4; // rsi
  unsigned int v5; // ebp
  __int64 result; // rax
  __int64 v7; // r15
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // r8d

  v3 = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_WORD *)(a2 + 10) & 3;
  result = 0x3FFFFFFFFFLL;
  v7 = a2;
  CurrentIrql = 17;
  if ( v4 != 0x3FFFFFFFFFLL )
  {
    v10 = 2LL;
    do
    {
      if ( CurrentIrql == 17 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v10) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v10);
        }
        MiUpdatePageMoveInProgressInternal(a1, v5, 1, 0);
      }
      v11 = 48 * v4 - 0x220000000000LL;
      if ( MiSafeLockPageAtDpc(v4, a2, a3) != 17 )
      {
        if ( (*(_BYTE *)(v11 + 34) & 7) == 0
          && (unsigned int)MiGetPfnPageSizeIndex(48 * v4 - 0x220000000000LL) == v5
          && (a2 = *(_QWORD *)(a1 + 14984),
              *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL)) == a2) )
        {
          MiUnlinkFreeOrZeroedPage(v4, 0LL, 0);
          MiInsertPageInFreeOrZeroedList(v4, 2);
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v3 & 0x3F) == 0 && KeShouldYieldProcessor() )
          {
            MiUpdatePageMoveInProgressInternal(a1, v5, 0, 0);
            if ( KiIrqlFlags != (_DWORD)a3 )
            {
              LOBYTE(a2) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
            }
            __writecr8(CurrentIrql);
            CurrentIrql = 17;
          }
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      v4 = *(_QWORD *)(v7 + 16);
      result = 0x3FFFFFFFFFLL;
      v10 = 2LL;
    }
    while ( v4 != 0x3FFFFFFFFFLL );
    if ( CurrentIrql != 17 )
    {
      MiUpdatePageMoveInProgressInternal(a1, v5, 0, 0);
      if ( KiIrqlFlags != v13 )
      {
        LOBYTE(v12) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
