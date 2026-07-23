/*
 * XREFs of MiPurgeZeroListHead @ 0x1404BFBD4
 * Callers:
 *     MiPurgeZeroListHeads @ 0x1404BFB80 (MiPurgeZeroListHeads.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiSafeLockPageAtDpc @ 0x140311180 (MiSafeLockPageAtDpc.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x14042CA30 (MiUpdatePageMoveInProgressInternal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPurgeZeroListHead(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  ULONG_PTR v3; // rsi
  unsigned int v4; // ebp
  __int64 result; // rax
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // r8d

  v2 = 0LL;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_WORD *)(a2 + 10) & 3;
  result = 0x3FFFFFFFFFLL;
  v6 = a2;
  CurrentIrql = 17;
  if ( v3 != 0x3FFFFFFFFFLL )
  {
    v9 = 2LL;
    do
    {
      if ( CurrentIrql == 17 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          LOBYTE(v9) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v9, a2);
        }
        MiUpdatePageMoveInProgressInternal(a1, v4, 1, 0);
      }
      v10 = 48 * v3 - 0x220000000000LL;
      if ( MiSafeLockPageAtDpc(v3) != 17 )
      {
        if ( (*(_BYTE *)(v10 + 34) & 7) == 0
          && (unsigned int)MiGetPfnPageSizeIndex(48 * v3 - 0x220000000000LL) == v4
          && (a2 = *(_QWORD *)(a1 + 14984),
              *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) == a2) )
        {
          MiUnlinkFreeOrZeroedPage(v3, 0LL, 0);
          MiInsertPageInFreeOrZeroedList(v3, 2LL);
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v2 & 0x3F) == 0 && KeShouldYieldProcessor() )
          {
            MiUpdatePageMoveInProgressInternal(a1, v4, 0, 0);
            if ( KiIrqlFlags != v11 )
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
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      v3 = *(_QWORD *)(v6 + 16);
      result = 0x3FFFFFFFFFLL;
      v9 = 2LL;
    }
    while ( v3 != 0x3FFFFFFFFFLL );
    if ( CurrentIrql != 17 )
    {
      MiUpdatePageMoveInProgressInternal(a1, v4, 0, 0);
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
