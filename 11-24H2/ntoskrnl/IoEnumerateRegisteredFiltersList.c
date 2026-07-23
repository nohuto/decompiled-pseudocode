/*
 * XREFs of IoEnumerateRegisteredFiltersList @ 0x140711C10
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IopGetFsRegistrationInProgress @ 0x140593E88 (IopGetFsRegistrationInProgress.c)
 */

NTSTATUS __stdcall IoEnumerateRegisteredFiltersList(
        PDRIVER_OBJECT *DriverObjectList,
        ULONG DriverObjectListSize,
        PULONG ActualNumberDriverObjects)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebx
  NTSTATUS i; // edi
  PVOID *v9; // rax
  ULONG v10; // esi
  bool v11; // cf
  PVOID *v12; // rbx

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      i = -1073741267;
      goto LABEL_12;
    }
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  }
  v9 = (PVOID *)IopFsNotifyChangeQueueHead;
  v10 = DriverObjectListSize >> 3;
  while ( v9 != &IopFsNotifyChangeQueueHead )
  {
    v9 = (PVOID *)*v9;
    ++v7;
  }
  v11 = v10 < v7;
  *ActualNumberDriverObjects = v7;
  v12 = (PVOID *)IopFsNotifyChangeQueueHead;
  for ( i = v11 ? 0xC0000023 : 0; v10; --v10 )
  {
    if ( v12 == &IopFsNotifyChangeQueueHead )
      break;
    PsReferenceSiloContext(v12[2]);
    *DriverObjectList++ = (PDRIVER_OBJECT)v12[2];
    v12 = (PVOID *)*v12;
  }
  ExReleaseResourceLite(&IopDatabaseResource);
LABEL_12:
  KeLeaveCriticalRegion();
  return i;
}
