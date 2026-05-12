/*
 * XREFs of StorpNvmeAdapterHealthWorkItemRoutine @ 0x1400B1D90
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400BA758 (StorpTelemetrySendNvmeControllerHealthInfo.c)
 */

void __fastcall StorpNvmeAdapterHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  char *DeviceExtension; // rbx
  __int64 v4; // rcx
  char *i; // rdi

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 21) == 1 )
  {
    v4 = *((_QWORD *)DeviceExtension + 142);
    if ( v4 )
    {
      StorpTelemetrySendNvmeControllerHealthInfo(v4);
    }
    else if ( (DeviceExtension[416] & 0x40) != 0 )
    {
      for ( i = (char *)*((_QWORD *)DeviceExtension + 161); i != DeviceExtension + 1288; i = *(char **)i )
        StorpTelemetrySendNvmeControllerHealthInfo(i - 112);
    }
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 19));
  IoFreeWorkItem(Context);
}
