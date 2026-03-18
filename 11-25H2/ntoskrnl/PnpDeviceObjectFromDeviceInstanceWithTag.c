/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70
 * Callers:
 *     NtReplacePartitionUnit @ 0x140696650 (NtReplacePartitionUnit.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14071BA00 (PiDcResetChildDeviceContainerCallback.c)
 *     PiSwIrpCleanup @ 0x140724800 (PiSwIrpCleanup.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PiControlGetPropertyData @ 0x140834060 (PiControlGetPropertyData.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiGetRelatedDevice @ 0x1409349F8 (PiGetRelatedDevice.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096B044 (PnpQueueQueryAndRemoveEvent.c)
 *     PiSwProcessRemove @ 0x1409A35FC (PiSwProcessRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     PiQueryDeviceRelations @ 0x140A3A63C (PiQueryDeviceRelations.c)
 *     PiGetDeviceDepth @ 0x140A46520 (PiGetDeviceDepth.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5BF4C (PnpIsDeviceInstanceEnabled.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     PiSwCloseDevice @ 0x140A8F2A4 (PiSwCloseDevice.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PiQueueDeviceRequest @ 0x140AB40E8 (PiQueueDeviceRequest.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140AB8AB0 (IopDeviceObjectFromSymbolicName.c)
 *     PiSwGetChildPdo @ 0x140AC044C (PiSwGetChildPdo.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140C0F0C4 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 */

_QWORD *__fastcall PnpDeviceObjectFromDeviceInstanceWithTag(__int64 a1, ULONG a2)
{
  _QWORD *v2; // rbx
  _QWORD **v4; // rax
  __int64 v5; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  v2 = 0LL;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v4 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( v4 )
  {
    v2 = *v4;
    if ( *v4 )
    {
      if ( *(_WORD *)v2 == 3 && (v5 = *(_QWORD *)(v2[39] + 40LL)) != 0 && *(_QWORD **)(v5 + 32) == v2 )
        ObfReferenceObjectWithTag(v2, a2);
      else
        v2 = 0LL;
    }
  }
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
