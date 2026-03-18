/*
 * XREFs of ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x140202D70
 * Callers:
 *     NtDxgkDestroyTrackedWorkload @ 0x140204530 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x140204950 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x140204CA0 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x140204FD0 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1402051D0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x14007991C (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(DXGTRACKEDWORKLOAD **this)
{
  DXGTRACKEDWORKLOAD *v2; // rcx
  DXGTRACKEDWORKLOAD *v3; // rcx

  v2 = *this;
  if ( v2 )
    DXGTRACKEDWORKLOAD::Release(v2);
  v3 = this[1];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v3 + 2), v3);
  }
}
