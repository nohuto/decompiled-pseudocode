/*
 * XREFs of ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180010300
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C710 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180010760 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800190E4 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029F90 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesInternal(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 165);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v1 + 16)) <= 1 )
    __fastfail(0xEu);
  if ( *((_DWORD *)this + 320) )
  {
    ExecutionModel::ResourceSet::PerformReleaseResources(this);
    if ( *((_BYTE *)this + 12) )
    {
      RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v1);
      ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        *((ExecutionModel::ResourceManager **)this + 3),
        (struct _RM_ACTIVITY_HOST *)v1);
    }
    RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)v1);
  }
  RmpObjectRelease((PVOID)v1);
  return 0LL;
}
