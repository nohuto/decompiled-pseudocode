/*
 * XREFs of StorpAdapterHealthWorkItemRoutine @ 0x1400AF450
 * Callers:
 *     <none>
 * Callees:
 *     Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline @ 0x1400AABB8 (Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline.c)
 *     StorpTelemetrySendAdapterNvmeHealthInfo @ 0x1400B9438 (StorpTelemetrySendAdapterNvmeHealthInfo.c)
 *     StorpTelemetrySendAdapterUfsHealthInfo @ 0x1400BA1F0 (StorpTelemetrySendAdapterUfsHealthInfo.c)
 */

void __fastcall StorpAdapterHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  unsigned __int8 *DeviceExtension; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  int v5; // ecx
  bool v6; // zf
  __int64 v7; // rax
  unsigned int v8; // r8d

  DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
  IsEnabledDeviceUsageNoInline = Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline();
  v5 = *((_DWORD *)DeviceExtension + 1069);
  if ( IsEnabledDeviceUsageNoInline )
    v6 = ((v5 - 17) & 0xFFFFFFFD) == 0;
  else
    v6 = v5 == 17;
  if ( v6 && *((_DWORD *)DeviceExtension + 22) == 1 && *((_DWORD *)DeviceExtension + 87) == 1 )
  {
    v7 = *((_QWORD *)DeviceExtension + 620);
    if ( !v7 || !*(_DWORD *)(v7 + 16) )
    {
      if ( (unsigned int)Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline()
        && *((_DWORD *)DeviceExtension + 1069) == 19 )
      {
        StorpTelemetrySendAdapterUfsHealthInfo(DeviceExtension);
      }
      else
      {
        StorpTelemetrySendAdapterNvmeHealthInfo(DeviceExtension);
      }
      v8 = g_StorpTraceLoggingDeviceHealthTick + DeviceExtension[5317];
      *((_DWORD *)DeviceExtension + 1336) |= 2u;
      DeviceExtension[5317] = v8 < 0x18 ? v8 : 0;
    }
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 42));
  IoFreeWorkItem(Context);
}
