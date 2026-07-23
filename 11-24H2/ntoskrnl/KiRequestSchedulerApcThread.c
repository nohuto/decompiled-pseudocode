/*
 * XREFs of KiRequestSchedulerApcThread @ 0x1405C0614
 * Callers:
 *     KiSlistRollbackDpc @ 0x1405AE2E0 (KiSlistRollbackDpc.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402DF8C0 (KiInsertQueueApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall KiRequestSchedulerApcThread(__int64 a1)
{
  __int64 v2; // rsi
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = a1 + 648;
  KiAcquireThreadLockRaiseToDpc(a1, &v5);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = v5;
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 && !*(_BYTE *)(v2 + 82) )
  {
    *(_BYTE *)(v2 + 82) = 1;
    KiInsertQueueApc(v2);
    KiSignalThreadForApc((__int64)CurrentPrcb, v2, v4, 0);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  __writecr8(v4);
}
