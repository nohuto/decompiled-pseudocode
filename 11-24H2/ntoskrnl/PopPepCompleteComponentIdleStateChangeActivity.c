/*
 * XREFs of PopPepCompleteComponentIdleStateChangeActivity @ 0x140316EF0
 * Callers:
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140311C70 (PopFxUpdateAccountingActiveTime.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140315390 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140316D90 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepTriggerActivity @ 0x140319270 (PopPepTriggerActivity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1405D2040 (PopFxUpdateComponentPerfStateNominalChange.c)
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
      PopPepTriggerActivity(a1, a2, 1LL, ComponentPreferedIdleState);
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
      *(_DWORD *)(*(_QWORD *)(a2 + 200) + 24LL * *(unsigned int *)(a2 + 180) + 16),
      *(_DWORD *)(*(_QWORD *)(a2 + 200) + 24 * v6 + 16),
      0,
      (volatile signed __int32 *)(a2 + 192));
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
