/*
 * XREFs of MiGetVadWakeList @ 0x1402A3D60
 * Callers:
 *     MiFinishVadDeletion @ 0x1402A3AE0 (MiFinishVadDeletion.c)
 *     MiFreeRotateView @ 0x1407DDB9C (MiFreeRotateView.c)
 *     MiDeletePartialCloneVads @ 0x1407F052C (MiDeletePartialCloneVads.c)
 *     MiReleaseVadEventBlocks @ 0x140901E30 (MiReleaseVadEventBlocks.c)
 *     MiFreePlaceholderStorage @ 0x140A90928 (MiFreePlaceholderStorage.c)
 *     MiDeleteVadHotPatchState @ 0x140AAD48C (MiDeleteVadHotPatchState.c)
 *     MiFreeVadEventBitmap @ 0x140ABE6F4 (MiFreeVadEventBitmap.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiGetVadWakeList(__int64 a1, int a2)
{
  unsigned __int64 v2; // r15
  _QWORD *v3; // r14
  __int64 v5; // rbx
  _KPROCESS *Process; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned __int64 v11; // rcx
  unsigned int v13; // esi

  v2 = 0LL;
  v3 = 0LL;
  v5 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( MmVadEventBlockFixEnabled )
  {
    CurrentIrql = KeGetCurrentIrql();
    v8 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
      v8 = 2LL;
    }
    v9 = *(_DWORD *)(v5 + 48);
    do
    {
      while ( (v9 & 1) != 0 )
      {
        if ( (v9 & 2) != 0 )
        {
          v13 = 0;
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
            {
              HvlNotifyLongSpinWait(v13);
            }
            else
            {
              _mm_pause();
            }
            v9 = *(_DWORD *)(v5 + 48);
          }
          while ( (v9 & 1) != 0 );
          v8 = 2LL;
        }
        else
        {
          a1 = v9 | 2u;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 48), a1, v9);
        }
      }
      a1 = v9 & 0xFFFFFFFC | 1;
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 48), a1, v9);
    }
    while ( v10 != v9 );
  }
  else
  {
    CurrentIrql = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
  }
  v11 = *(_QWORD *)(v5 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v11 )
  {
    do
    {
      v8 = *(_QWORD *)v11;
      if ( (a2 & *(_DWORD *)(v11 + 80)) != 0 )
      {
        *(_QWORD *)v11 = v2;
        v2 = v11;
        if ( v3 )
          *v3 = v8;
        else
          *(_QWORD *)(v5 + 56) = v8 | *(_QWORD *)(v5 + 56) & 0xFLL;
      }
      else
      {
        v3 = (_QWORD *)v11;
      }
      v11 = v8;
    }
    while ( v8 );
  }
  if ( MmVadEventBlockFixEnabled )
  {
    _InterlockedAnd((volatile signed __int32 *)(v5 + 48), 0x7FFFFFFCu);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v8) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    LOBYTE(v8) = CurrentIrql;
    MiUnlockWorkingSetExclusive(&Process[2].ReadyListHead.Blink, v8);
  }
  return v2;
}
