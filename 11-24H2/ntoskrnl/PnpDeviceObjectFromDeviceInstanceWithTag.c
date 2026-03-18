/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BDDF0
 * Callers:
 *     NtReplacePartitionUnit @ 0x1406A1830 (NtReplacePartitionUnit.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140727980 (PiDcResetChildDeviceContainerCallback.c)
 *     PiSwIrpCleanup @ 0x1407308E0 (PiSwIrpCleanup.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B2EAC (PnpQueueQueryAndRemoveEvent.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PiGetDeviceDepth @ 0x1408BC2DC (PiGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1408BD4B0 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1408BEE58 (PiGetRelatedDevice.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1409FB008 (PiSwProcessRemove.c)
 *     PiQueryDeviceRelations @ 0x140A3E9EC (PiQueryDeviceRelations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5DBC0 (PnpIsDeviceInstanceEnabled.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     PiSwCloseDevice @ 0x140A93D94 (PiSwCloseDevice.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     PiQueueDeviceRequest @ 0x140AB84B0 (PiQueueDeviceRequest.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140ABCB94 (IopDeviceObjectFromSymbolicName.c)
 *     PiSwGetChildPdo @ 0x140AC3B1C (PiSwGetChildPdo.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140C2022C (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FFF00 (RtlLookupElementGenericTableAvl.c)
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
