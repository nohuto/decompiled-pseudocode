/*
 * XREFs of ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180043E5C
 * Callers:
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180089088 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008EEF0 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18004425C (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostEnumerateResourceSetGetNext(
        struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *a1)
{
  __int64 v1; // rbx
  __int64 First; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx

  v1 = *(_QWORD *)a1;
  First = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v5 = *(_QWORD *)(v1 + 1296);
    v6 = *(int *)(v1 + 1328);
    v7 = *(_QWORD *)(v1 + 1320);
    if ( v5 != v7 + 8 * (v6 + 2 * (v6 + 71)) )
      First = v5 - 1296;
    if ( !First )
      First = RmpActivityHostEnumerateResourceSetGetFirst(v7, *((unsigned int *)a1 + 2), (unsigned int)(v6 + 1));
  }
  *(_QWORD *)a1 = First;
  return (struct ExecutionModel::ResourceSet *)v1;
}
