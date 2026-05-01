/*
 * XREFs of ?RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180055E64
 * Callers:
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x180055D30 (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x180055F50 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 */

__int64 __fastcall RmpOfferLazyDecommitCheckQueueWork(struct _RM_SERVICE_GLOBALS *a1)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  bool v3; // zf
  unsigned __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (_QWORD *)((char *)a1 + 216);
  v3 = (*((_BYTE *)a1 + 240) & 1) == 0;
  v8 = 0LL;
  if ( v3 )
  {
    RtlQueryUnbiasedInterruptTime(&v8);
    v5 = v8 - v2[4];
    if ( v5 <= 10000 * (unsigned __int64)*((unsigned int *)v2 + 10) )
    {
      return (unsigned int)-1073741199;
    }
    else if ( (*((_BYTE *)a1 + 3528) & 1) != 0 )
    {
      return (unsigned int)-1073741058;
    }
    else
    {
      RmpPartitionTableActOnActivePartitions(
        (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
        v5,
        (int (*)(struct _RM_PARTITION *, void *))RmpOfferLazyDecommitQueuePartitionHosts,
        v2);
      if ( (_QWORD *)v2[1] == v2 + 1 )
      {
        return (unsigned int)-1073740704;
      }
      else
      {
        if ( (unsigned int)dword_1800E8278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E8278, 9LL) )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            v7,
            byte_1800DA938);
        TpPostWork(*v2);
        *((_DWORD *)v2 + 6) |= 1u;
      }
    }
  }
  else
  {
    return (unsigned int)-1073740682;
  }
  return v1;
}
