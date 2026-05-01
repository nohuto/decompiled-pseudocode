/*
 * XREFs of ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18001F300
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800129D0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180012EE4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001F4B0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x180055FD0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180056F70 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?RmpMemoryMonitorCleanup@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18006E0C8 (-RmpMemoryMonitorCleanup@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpPolicyReleaseScratchBuffers@@YAXPEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18006EB5C (-RmpPolicyReleaseScratchBuffers@@YAXPEAU_RM_POLICY_WORK_BUFFER@@@Z.c)
 */

void __fastcall RmpPartitionCleanup(struct _RM_PARTITION *a1)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  RmpMemoryMonitorCleanup((struct _RM_PARTITION *)((char *)a1 + 40));
  RmpPolicyReleaseScratchBuffers((struct _RM_PARTITION *)((char *)a1 + 160));
  if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 9) != 0 && (qword_1800E7290 & 9) == qword_1800E7290 )
  {
    v4 = *((_QWORD *)a1 + 29);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E7278,
      (unsigned int)&unk_1800D7C63,
      v2,
      v3,
      (__int64)&v4);
  }
}
