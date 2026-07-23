/*
 * XREFs of KeRegisterObjectDpc @ 0x1405AE464
 * Callers:
 *     ExQueueDpcEventWait @ 0x140655E20 (ExQueueDpcEventWait.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiWaitSatisfyOther @ 0x14032D1A0 (KiWaitSatisfyOther.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiExitDispatcher((unsigned __int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
  }
  return v9;
}
