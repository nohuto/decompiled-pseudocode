/*
 * XREFs of CrmpDxUtilsFreeContext @ 0x18007B2D4
 * Callers:
 *     CrmStateMonitorAttemptNpuContextRefresh @ 0x1800797A8 (CrmStateMonitorAttemptNpuContextRefresh.c)
 *     CrmStateMonitorNpuUsageContextCleanup @ 0x18007A088 (CrmStateMonitorNpuUsageContextCleanup.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CrmpDxUtilsFreeContext(_QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  HampFreeHeap(a1);
}
