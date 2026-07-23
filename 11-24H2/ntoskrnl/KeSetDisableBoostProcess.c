/*
 * XREFs of KeSetDisableBoostProcess @ 0x140446DDC
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetDisableBoostThread @ 0x140446F84 (KiSetDisableBoostThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetDisableBoostProcess(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  volatile LONG *v5; // r14
  signed __int8 v6; // cf
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  unsigned int v9; // ebp
  __int64 v10; // rdx
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v5 = (volatile LONG *)(v3 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  if ( a2 )
    v6 = _interlockedbittestandset((volatile signed __int32 *)(v3 + 136), 1u);
  else
    v6 = _interlockedbittestandreset((volatile signed __int32 *)(v3 + 136), 1u);
  v7 = (_QWORD *)(v3 + 48);
  v8 = *(_QWORD **)(v3 + 48);
  v9 = v6;
  while ( v8 != v7 )
  {
    KiSetDisableBoostThread(v8 - 95, a2, &v12);
    v8 = (_QWORD *)*v8;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( v12 )
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v12, CurrentIrql);
  }
  else
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(CurrentIrql);
  }
  return v9;
}
