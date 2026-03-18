/*
 * XREFs of PopPepCompleteComponentIdleStateChangeActivity @ 0x1403576E0
 * Callers:
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopPepTriggerActivity @ 0x1402BEB90 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1402C0D90 (PopPepGetComponentPreferedIdleState.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140356594 (PopFxUpdateAccountingActiveTime.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403578B4 (PopPepUpdateIdleStateRefCount.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1405CD7C0 (PopFxUpdateComponentPerfStateNominalChange.c)
 */

void __fastcall PopPepCompleteComponentIdleStateChangeActivity(__int64 a1, __int64 a2)
{
  unsigned int ComponentPreferedIdleState; // eax
  unsigned int i; // edx
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx

  if ( a2 )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 64) + 12LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a2 + 64) + 16LL) = 0;
    if ( *(_BYTE *)(a2 + 184) )
    {
      if ( *(_BYTE *)(a1 + 124) )
      {
        v10 = *(_QWORD *)(a2 + 24);
        if ( (v10 & 4) != 0 || *(_DWORD *)(a2 + 180) && !*(_DWORD *)(a2 + 176) && (v10 & 2) != 0 )
          PopFxUpdateComponentPerfStateNominalChange(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(a2 + 8),
            0LL,
            *(unsigned int *)(a2 + 176));
      }
    }
    if ( !*(_DWORD *)(a2 + 176) )
      KeSetEvent((PRKEVENT)(a2 + 32), 0, 0);
    ComponentPreferedIdleState = PopPepGetComponentPreferedIdleState((_DWORD *)a2);
    if ( ComponentPreferedIdleState != *(_DWORD *)(a2 + 176) )
      PopPepTriggerActivity(a1, a2, 1, ComponentPreferedIdleState);
    for ( i = 1; i <= 3; ++i )
    {
      if ( **(_DWORD **)(a2 + 8LL * i + 56) )
        goto LABEL_13;
    }
    if ( *(_DWORD *)(a2 + 176) == *(_DWORD *)(a2 + 188) - 1 )
    {
      *(_DWORD *)(a2 + 4) &= ~2u;
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 140));
    }
LABEL_13:
    v6 = *(unsigned int *)(a2 + 176);
    PopPepUpdateIdleStateRefCount(
      *(unsigned int *)(*(_QWORD *)(a2 + 200) + 24LL * *(unsigned int *)(a2 + 180) + 16),
      *(unsigned int *)(*(_QWORD *)(a2 + 200) + 24 * v6 + 16),
      0LL,
      a2 + 192);
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 872LL) + 8LL * *(unsigned int *)(a2 + 8)) + 200LL;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    if ( *(_DWORD *)(v7 + 16) == 2 )
    {
      v11 = *(_DWORD *)(v7 + 12);
      if ( v11 != -1 && (unsigned int)v6 >= v11 )
      {
        PopFxUpdateAccountingActiveTime(v7, MEMORY[0xFFFFF78000000008], 0LL);
        *(_BYTE *)(v7 + 8) = 0;
      }
    }
    KxReleaseSpinLock((volatile signed __int64 *)v7);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = v8;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    }
    __writecr8(v8);
  }
}
