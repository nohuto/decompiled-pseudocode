/*
 * XREFs of KiInterruptSubDispatchNoLockNoEtw @ 0x1406A1B20
 * Callers:
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406A2340 (KiInterruptDispatchNoLockNoEtw.c)
 * Callees:
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     KiStartInterruptCycleAccumulation @ 0x14028E700 (KiStartInterruptCycleAccumulation.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 */

char __fastcall KiInterruptSubDispatchNoLockNoEtw()
{
  __int64 v0; // rbp
  struct _KINTERRUPT *v1; // rsi
  unsigned __int64 SynchronizeIrql; // rcx
  unsigned __int8 CurrentIrql; // al
  __int64 v4; // r8
  char result; // al

  SynchronizeIrql = v1->SynchronizeIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(SynchronizeIrql);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(SynchronizeIrql);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  KiStartInterruptCycleAccumulation((__int64)KeGetCurrentPrcb(), 1);
  _enable();
  v1->TrapFrame = (_KTRAP_FRAME *)(v0 - 128);
  result = KiCallInterruptServiceRoutine(v1, 0LL, v4);
  _disable();
  return result;
}
