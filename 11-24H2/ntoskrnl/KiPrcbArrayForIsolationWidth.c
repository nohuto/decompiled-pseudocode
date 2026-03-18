/*
 * XREFs of KiPrcbArrayForIsolationWidth @ 0x1403F52C0
 * Callers:
 *     KeApplyWobBamQos @ 0x1402A2218 (KeApplyWobBamQos.c)
 *     KzRefreshWorkloadProperties @ 0x1403B260C (KzRefreshWorkloadProperties.c)
 *     KeUpdateThreadTag @ 0x140472120 (KeUpdateThreadTag.c)
 *     KeSetProcessPpmPolicy @ 0x140479E80 (KeSetProcessPpmPolicy.c)
 *     KiUpdateThreadSchedulingProperties @ 0x14047C4A8 (KiUpdateThreadSchedulingProperties.c)
 *     KeSetThreadSchedulerAssist @ 0x140487FC8 (KeSetThreadSchedulerAssist.c)
 *     KeSetThreadPpmPolicy @ 0x14048BA94 (KeSetThreadPpmPolicy.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14049E5FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiTryUpgradeIsolationUnitLockHandle @ 0x1405B1390 (KiTryUpgradeIsolationUnitLockHandle.c)
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
