/*
 * XREFs of KiReleaseThreadStateLock @ 0x1403B27B0
 * Callers:
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14029726C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeApplyWobBamQos @ 0x1402A2218 (KeApplyWobBamQos.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402A7194 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x1403B4344 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KeQueryValuesThread @ 0x1403E27B0 (KeQueryValuesThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     KeUpdateThreadTag @ 0x140472120 (KeUpdateThreadTag.c)
 *     KeSetProcessPpmPolicy @ 0x140479E80 (KeSetProcessPpmPolicy.c)
 *     KiSetThreadSchedulingGroup @ 0x14047C324 (KiSetThreadSchedulingGroup.c)
 *     KeSetThreadSchedulerAssist @ 0x140487FC8 (KeSetThreadSchedulerAssist.c)
 *     KeSetThreadPpmPolicy @ 0x14048BA94 (KeSetThreadPpmPolicy.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14049E5FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeTryToFreezeThreadStack @ 0x1404AB95C (KeTryToFreezeThreadStack.c)
 *     KiApplyForegroundBoostThread @ 0x1404F6D4C (KiApplyForegroundBoostThread.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405C2378 (KiAdjustCoreIsolationReasonThread.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405C26B0 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C3BDC (KeAbCrossThreadDelete.c)
 * Callees:
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
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
