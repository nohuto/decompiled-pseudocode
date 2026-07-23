/*
 * XREFs of PopPepComponentSetLatency @ 0x1402BF568
 * Callers:
 *     PoFxSetComponentLatency @ 0x1402BF520 (PoFxSetComponentLatency.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1402BF940 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepRequestWork @ 0x1402BFC80 (PopPepRequestWork.c)
 *     PopPepTriggerActivity @ 0x1402C1E00 (PopPepTriggerActivity.c)
 *     PopPepPromoteActivities @ 0x1402C2120 (PopPepPromoteActivities.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall PopPepComponentSetLatency(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  unsigned int v6; // ebp
  unsigned __int64 *v7; // rdx
  char v8; // r15
  KIRQL v9; // si
  unsigned int v10; // ebp
  int ComponentPreferedIdleState; // eax
  __int64 i; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rdx
  KIRQL v15; // al

  v5 = 208LL * a2 + a1 + 192;
  v6 = *(_DWORD *)(v5 + 188) - 1;
  if ( *(_DWORD *)(v5 + 188) != 1 )
  {
    v7 = (unsigned __int64 *)(*(_QWORD *)(v5 + 200) + 24LL * v6);
    do
    {
      if ( *v7 <= a3 )
        break;
      v7 -= 3;
      --v6;
    }
    while ( v6 );
  }
  v8 = 0;
  if ( *(_DWORD *)(a1 + 180) == 1 )
    goto LABEL_6;
  v15 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v9 = v15;
  if ( *(_BYTE *)(a1 + 125) == 1 )
  {
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v15);
LABEL_6:
    v8 = 1;
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
    *(_BYTE *)(a1 + 125) = 1;
    goto LABEL_7;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v5);
LABEL_7:
  *(_QWORD *)(v5 + 112) = a3;
  if ( *(_DWORD *)(v5 + 156) != v6 )
  {
    *(_DWORD *)(v5 + 156) = v6;
    v10 = *(_DWORD *)(v5 + 104) + *(_DWORD *)(a1 + 120);
    ComponentPreferedIdleState = PopPepGetComponentPreferedIdleState(v5);
    if ( ComponentPreferedIdleState != *(_DWORD *)(v5 + 176) )
      PopPepTriggerActivity(a1, v5, 1LL, ComponentPreferedIdleState | 0x80000000);
    PopPepPromoteActivities(a1, v5, 2LL);
    PopPepRequestWork(a1, v10, (unsigned int)(*(_DWORD *)(v5 + 104) + *(_DWORD *)(a1 + 120)));
  }
  if ( v8 == 1 )
  {
    for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
    {
      v13 = *(_DWORD **)(a1 + 8 * i + 72);
      if ( v13 && *v13 )
      {
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), v9);
        return;
      }
    }
    if ( *(_BYTE *)(a1 + 136) )
      *(_BYTE *)(a1 + 125) = 0;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v14) = v9;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
  }
  __writecr8(v9);
}
