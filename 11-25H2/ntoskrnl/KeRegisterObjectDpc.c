/*
 * XREFs of KeRegisterObjectDpc @ 0x1405ADB64
 * Callers:
 *     ExQueueDpcEventWait @ 0x14064B7C0 (ExQueueDpcEventWait.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiWaitSatisfyOther @ 0x14027FA20 (KiWaitSatisfyOther.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall KeRegisterObjectDpc(
        volatile signed __int32 *SystemArgument1,
        PRKDPC Dpc,
        _WORD *SystemArgument2,
        char a4)
{
  unsigned __int8 CurrentIrql; // si
  char v9; // bp
  PVOID *v10; // rcx

  SystemArgument2[8] = 1028;
  *((_QWORD *)SystemArgument2 + 3) = Dpc;
  *((_QWORD *)SystemArgument2 + 4) = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v9 = 0;
  KiAcquireKobjectLockSafe(SystemArgument1);
  if ( *((int *)SystemArgument1 + 1) <= 0 || (KiWaitSatisfyOther((__int64)SystemArgument1), v9 = 1, a4) )
  {
    v10 = (PVOID *)*((_QWORD *)SystemArgument1 + 2);
    if ( *v10 != SystemArgument1 + 2 )
      __fastfail(3u);
    *(_QWORD *)SystemArgument2 = SystemArgument1 + 2;
    *((_QWORD *)SystemArgument2 + 1) = v10;
    *v10 = SystemArgument2;
    *((_QWORD *)SystemArgument1 + 2) = SystemArgument2;
    _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  else
  {
    *((_BYTE *)SystemArgument2 + 17) = 5;
    KeInsertQueueDpc(Dpc, (PVOID)SystemArgument1, SystemArgument2);
    _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
    KiExitDispatcher(KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
  }
  return v9;
}
