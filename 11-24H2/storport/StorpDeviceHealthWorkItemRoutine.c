/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x140038EE0
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x140039030 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1400BACBC (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1400BBFC8 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1400BC668 (StorpTelemetrySendUnitSmartAttributes.c)
 */

void __fastcall StorpDeviceHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  unsigned __int8 *DeviceExtension; // rbx
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned __int64 v7; // r8
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  int v10; // eax

  DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 137) == 1 )
  {
    v4 = *((_QWORD *)DeviceExtension + 234);
    if ( !v4 || !*(_DWORD *)(v4 + 16) )
    {
      v5 = *((_DWORD *)DeviceExtension + 858);
      if ( v5 == 17 )
      {
        StorpTelemetrySendUnitNvmeHealthInfo(DeviceExtension, 0LL);
      }
      else if ( (((v5 - 2) & 0xFFFFFFF6) != 0 || v5 == 10) && (DeviceExtension[506] & 0x10) == 0 )
      {
        if ( v5 <= 0x13 )
        {
          v10 = 525570;
          if ( _bittest(&v10, v5) )
          {
            if ( !DeviceExtension[2125] )
              StorpTelemetrySendUnitScsiDiagnostics(DeviceExtension, 0LL);
          }
        }
      }
      else if ( !DeviceExtension[2125] )
      {
        StorpTelemetrySendUnitSmartAttributes(DeviceExtension, 0LL);
        StorpTelemetrySendUnitDeviceStatistics(DeviceExtension);
      }
      v6 = g_StorpTraceLoggingDeviceHealthTick + DeviceExtension[2125];
      *((_DWORD *)DeviceExtension + 530) |= 1u;
      DeviceExtension[2125] = v6 < 0x18 ? v6 : 0;
    }
  }
  v7 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v8 = *(_DWORD *)(v7 + *((_QWORD *)DeviceExtension + 5));
  while ( (v8 & 1) == 0 )
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + *((_QWORD *)DeviceExtension + 5)), v8 - 2, v8);
    if ( v9 == v8 )
      goto LABEL_13;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
LABEL_13:
  IoFreeWorkItem(Context);
}
