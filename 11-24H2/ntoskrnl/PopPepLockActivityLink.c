/*
 * XREFs of PopPepLockActivityLink @ 0x1403A76F0
 * Callers:
 *     PopPepSurprisePowerOn @ 0x1403A60EC (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1404C8510 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x1405D87D4 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D88D0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall PopPepLockActivityLink(__int64 a1, volatile LONG *a2, unsigned int a3, unsigned int a4, KIRQL *a5)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v8; // esi
  int i; // eax
  char result; // al
  KIRQL v11; // al
  bool v12; // zf

  if ( !a2 || *(_DWORD *)(a1 + 180) == 1 )
    goto LABEL_3;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
      goto LABEL_3;
  }
  else if ( a3 <= 5 && LOBYTE(ActivityAttributes[17 * (int)a3]) == 1 )
  {
    goto LABEL_3;
  }
  if ( a4 > 5 || LOBYTE(ActivityAttributes[17 * (int)a4]) != 1 )
  {
    v11 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
    v12 = *(_BYTE *)(a1 + 125) == 1;
    *a5 = v11;
    if ( !v12 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(a2);
      return 0;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v11);
  }
LABEL_3:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 64), 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a1 + 64), CurrentIrql);
    for ( i = *(_DWORD *)(a1 + 64); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a1 + 64) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 64), 0x40000000u);
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(a1 + 64), CurrentIrql);
  }
  *a5 = CurrentIrql;
  result = 1;
  *(_BYTE *)(a1 + 125) = 1;
  return result;
}
