/*
 * XREFs of RaidpPortGetAdapter @ 0x1400255D0
 * Callers:
 *     StorpCompleteServiceIrp @ 0x14003D874 (StorpCompleteServiceIrp.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x140042470 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorEtwMiniportLogError @ 0x140042658 (StorEtwMiniportLogError.c)
 *     StorpFreeWorkItem @ 0x140053CE0 (StorpFreeWorkItem.c)
 *     StorpFreeTimer @ 0x1400542FC (StorpFreeTimer.c)
 *     StorExtAcquireMSISpinLock @ 0x140072FF0 (StorExtAcquireMSISpinLock.c)
 *     StorExtCompleteServiceIrp @ 0x1400731B0 (StorExtCompleteServiceIrp.c)
 *     StorExtGetMessageInterruptInformation @ 0x140073580 (StorExtGetMessageInterruptInformation.c)
 *     StorExtReleaseMSISpinLock @ 0x140073650 (StorExtReleaseMSISpinLock.c)
 *     StorPortAllocateRegistryBuffer @ 0x1400736B0 (StorPortAllocateRegistryBuffer.c)
 *     StorPortDeviceReady @ 0x140073920 (StorPortDeviceReady.c)
 *     StorPortFreeRegistryBuffer @ 0x140073AE0 (StorPortFreeRegistryBuffer.c)
 *     StorPortGetBusData @ 0x140073B50 (StorPortGetBusData.c)
 *     StorPortLogError @ 0x140074080 (StorPortLogError.c)
 *     StorPortPause @ 0x140074390 (StorPortPause.c)
 *     StorPortRegistryWrite @ 0x140074820 (StorPortRegistryWrite.c)
 *     StorPortResume @ 0x1400749D0 (StorPortResume.c)
 *     StorPortSetBusDataByOffset @ 0x140074B20 (StorPortSetBusDataByOffset.c)
 *     StorpQueueWorkItemInternal @ 0x140075B64 (StorpQueueWorkItemInternal.c)
 * Callees:
 *     <none>
 */

int *__fastcall RaidpPortGetAdapter(__int64 a1, int **a2, int **a3)
{
  __int64 v3; // rcx
  int *result; // rax
  int v6; // r8d

  v3 = *(_QWORD *)(a1 - 16);
  result = 0LL;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v3 )
  {
    result = *(int **)v3;
    if ( *(_QWORD *)v3 )
    {
      v6 = *result;
      if ( (*(_BYTE *)(v3 + 248) & 1) != 0 )
      {
        if ( v6 == 1314275652 )
          *a3 = result;
      }
      else if ( v6 == 1094997074 )
      {
        *a2 = result;
      }
    }
  }
  return result;
}
