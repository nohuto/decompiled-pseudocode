/*
 * XREFs of KiRequestSchedulerApcThread @ 0x1405C3044
 * Callers:
 *     KiSlistRollbackDpc @ 0x1405B1370 (KiSlistRollbackDpc.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x140296870 (KiSignalThreadForApc.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiInsertQueueApc @ 0x1403377A0 (KiInsertQueueApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall KiRequestSchedulerApcThread(__int64 a1)
{
  __int64 v2; // rsi
  char result; // al
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v2 = a1 + 648;
  result = KiAcquireThreadLockRaiseToDpc(a1, &v6);
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = v6;
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 && !*(_BYTE *)(v2 + 82) )
  {
    *(_BYTE *)(v2 + 82) = 1;
    KiInsertQueueApc(v2);
    result = KiSignalThreadForApc((__int64)CurrentPrcb, v2, v5, 0);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  __writecr8(v5);
  return result;
}
