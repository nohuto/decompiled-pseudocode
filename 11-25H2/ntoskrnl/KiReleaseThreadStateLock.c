/*
 * XREFs of KiReleaseThreadStateLock @ 0x140201E60
 * Callers:
 *     KeSetThreadPpmPolicy @ 0x1402005B4 (KeSetThreadPpmPolicy.c)
 *     KeSetProcessPpmPolicy @ 0x140200830 (KeSetProcessPpmPolicy.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140201B78 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140330CFC (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetThreadSchedulingGroup @ 0x1403A9BE8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1403AB9B4 (KiRemoveThreadFromSchedulingGroup.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     KeQueryValuesThread @ 0x1403DE8C0 (KeQueryValuesThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403E8170 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeTryToFreezeThreadStack @ 0x1404AA4CC (KeTryToFreezeThreadStack.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BE298 (KiAdjustCoreIsolationReasonThread.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BE5D0 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405BFAFC (KeAbCrossThreadDelete.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
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
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = a1;
  v5 = a5;
  if ( a2 )
  {
    v6 = *a3;
    v7 = *a3 & 0xFFFFFFFFFFFFFFFEuLL;
    v13 = v7;
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
      v10 = &v13;
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
      v11 = KxWaitForLockChainValid(v5);
    }
    *v5 = 0LL;
    v12 = (__int64)v5[1];
    if ( (((unsigned __int8)v12 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), v12)) & 4) != 0 )
      KeWakeAddressAll();
  }
  else
  {
    _InterlockedAnd64(a4, 0LL);
  }
}
