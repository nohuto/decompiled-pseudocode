/*
 * XREFs of KiPrcbArrayForIsolationWidth @ 0x1403EB700
 * Callers:
 *     KeApplyWobBamQos @ 0x1402D1948 (KeApplyWobBamQos.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1402D6DAC (KiUpdateThreadSchedulingProperties.c)
 *     KzRefreshWorkloadProperties @ 0x1403A0E1C (KzRefreshWorkloadProperties.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 *     KeSetProcessPpmPolicy @ 0x140475710 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 *     KeSetThreadPpmPolicy @ 0x140486864 (KeSetThreadPpmPolicy.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiTryUpgradeIsolationUnitLockHandle @ 0x1405AE300 (KiTryUpgradeIsolationUnitLockHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiPrcbArrayForIsolationWidth(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int8 *v4; // rcx
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = *(unsigned __int8 **)(*(_QWORD *)a1 + 36440LL);
      *a3 = v4 + 8;
      result = *v4;
      *a4 = result;
    }
  }
  else
  {
    *a3 = a1;
    *a4 = 1;
  }
  return result;
}
