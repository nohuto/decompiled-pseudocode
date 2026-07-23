/*
 * XREFs of KiReleaseThreadStateLock @ 0x1403A0FC0
 * Callers:
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402A5F4C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KeApplyWobBamQos @ 0x1402D1948 (KeApplyWobBamQos.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402D68C4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetThreadSchedulingGroup @ 0x1402D6FE8 (KiSetThreadSchedulingGroup.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140370B7C (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KeQueryValuesThread @ 0x1403CAE20 (KeQueryValuesThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 *     KeSetProcessPpmPolicy @ 0x140475710 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 *     KeSetThreadPpmPolicy @ 0x140486864 (KeSetThreadPpmPolicy.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeTryToFreezeThreadStack @ 0x1404A5F7C (KeTryToFreezeThreadStack.c)
 *     KeQueryEffectivePriorityThread @ 0x1404DD960 (KeQueryEffectivePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BF948 (KiAdjustCoreIsolationReasonThread.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BFC80 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C11AC (KeAbCrossThreadDelete.c)
 * Callees:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 */

void __fastcall KiReleaseThreadStateLock(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        volatile signed __int64 *a4,
        volatile signed __int64 **a5)
{
  volatile signed __int64 **v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // r11
  _BYTE *v8; // rax
  int v9; // edx
  unsigned __int64 *v10; // r10
  __int64 v11; // rcx
  volatile __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  v5 = a5;
  if ( a2 )
  {
    v6 = *a3;
    v7 = *a3 & 0xFFFFFFFFFFFFFFFEuLL;
    v15 = v7;
    if ( (v6 & 1) != 0 )
    {
      v8 = *(_BYTE **)(v7 + 36440);
      v9 = (unsigned __int8)*v8;
      v10 = (unsigned __int64 *)(v8 + 8);
      if ( !*v8 )
      {
LABEL_7:
        *a3 = 0LL;
        goto LABEL_8;
      }
    }
    else
    {
      v10 = &v15;
      v9 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v10[--v9] + 48), 0LL);
    while ( v9 );
    goto LABEL_7;
  }
LABEL_8:
  if ( !a4 )
    return;
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    _m_prefetchw(v5);
    v11 = (__int64)*v5;
    if ( !*v5 )
    {
      if ( v5 == (volatile signed __int64 **)_InterlockedCompareExchange64(v5[1], 0LL, (signed __int64)v5) )
        return;
      v11 = KxWaitForLockChainValid((__int64 *)v5);
    }
    *v5 = 0LL;
    v12 = (volatile __int64 *)(v11 + 8);
    v13 = (__int64)v5[1];
    v14 = _InterlockedExchange64(v12, v13);
    LOBYTE(v14) = v13 ^ v14;
    if ( (v14 & 4) != 0 )
      KeWakeAddressAll((unsigned __int64)v12, v14);
  }
  else
  {
    _InterlockedAnd64(a4, 0LL);
  }
}
