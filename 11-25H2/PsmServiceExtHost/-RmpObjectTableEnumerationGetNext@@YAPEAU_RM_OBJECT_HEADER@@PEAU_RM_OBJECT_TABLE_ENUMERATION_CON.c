/*
 * XREFs of ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180053020
 * Callers:
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180010468 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800896EC (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008A044 (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008B9C0 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008BDEC (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008EA90 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_OBJECT_HEADER *__fastcall RmpObjectTableEnumerationGetNext(struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *a1)
{
  struct _RM_OBJECT_HEADER **v1; // rdx
  struct _RM_OBJECT_HEADER *result; // rax
  struct _RM_OBJECT_HEADER **i; // rdx

  v1 = (struct _RM_OBJECT_HEADER **)*((_QWORD *)a1 + 2);
  if ( !v1 || (result = *v1, ((unsigned __int8)*v1 & 1) != 0) )
  {
    for ( i = (struct _RM_OBJECT_HEADER **)(*((_QWORD *)a1 + 3) + 8LL);
          (unsigned __int64)i < *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL)
                              + 8 * ((unsigned __int64)*(unsigned int *)(*((_QWORD *)a1 + 1) + 4LL) >> 5);
          ++i )
    {
      result = *i;
      if ( ((unsigned __int8)*i & 1) == 0 )
      {
        *((_QWORD *)a1 + 3) = i;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
LABEL_7:
  *((_QWORD *)a1 + 2) = result;
  if ( !result )
    return 0LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)result + 2) <= 1 )
    __fastfail(0xEu);
  return result;
}
