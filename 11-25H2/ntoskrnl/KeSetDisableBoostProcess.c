/*
 * XREFs of KeSetDisableBoostProcess @ 0x140268ED0
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     KiSetDisableBoostThread @ 0x140269078 (KiSetDisableBoostThread.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
  __int64 v11; // r8
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
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
    KiSetDisableBoostThread(v8 - 95, a2, &v13);
    v8 = (_QWORD *)*v8;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( v13 )
  {
    LOBYTE(v11) = CurrentIrql;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v13, v11);
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
