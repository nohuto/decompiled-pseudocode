/*
 * XREFs of PopPepReleaseActivityLink @ 0x1402C1CE0
 * Callers:
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x1403A60EC (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1404C8510 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x1405D87D4 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D88D0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall PopPepReleaseActivityLink(__int64 a1, _DWORD *a2, char a3, KIRQL a4)
{
  unsigned __int64 v4; // rdi
  __int64 i; // rax
  _DWORD *v7; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = a4;
  if ( a3 == 1 )
  {
    for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
    {
      v7 = *(_DWORD **)(a1 + 8 * i + 72);
      if ( v7 && *v7 )
      {
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), a4);
        return;
      }
    }
    if ( *(_BYTE *)(a1 + 136) )
      *(_BYTE *)(a1 + 125) = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(a1 + 64) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *a2 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2, retaddr);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 64), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(a1 + 64), retaddr);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v4);
  __writecr8(v4);
}
