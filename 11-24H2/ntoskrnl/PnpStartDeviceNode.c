/*
 * XREFs of PnpStartDeviceNode @ 0x140A10740
 * Callers:
 *     PnpReallocateResources @ 0x1407346D4 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x14073659C (PipProcessRestartPhase1.c)
 *     PipProcessStartPhase1 @ 0x140A0FEF0 (PipProcessStartPhase1.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObject @ 0x14043B204 (PnpDiagnosticTraceObject.c)
 *     PnpTraceStartDevice @ 0x14043B570 (PnpTraceStartDevice.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x14048AB00 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PnpStartDevice @ 0x14048E37C (PnpStartDevice.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14049250C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     PipUpdatePostStartCharacteristics @ 0x1404A18C8 (PipUpdatePostStartCharacteristics.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404A3504 (PpMarkDeviceStackExtensionFlag.c)
 *     _PnpSetObjectProperty @ 0x1408B88E8 (_PnpSetObjectProperty.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1408BB1DC (PnpDeviceCompletionRequestCreate.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140A115D8 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PiSwProcessParentStartIrp @ 0x140A11698 (PiSwProcessParentStartIrp.c)
 *     IopGetSessionIdFromPDO @ 0x140A11704 (IopGetSessionIdFromPDO.c)
 */

__int64 __fastcall PnpStartDeviceNode(__int64 a1, int a2, int a3)
{
  int v6; // ebp
  int started; // ebx
  __int64 v8; // r8
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  int v15; // [rsp+70h] [rbp-18h]
  int v16; // [rsp+74h] [rbp-14h]

  memset(&Event, 0, sizeof(Event));
  v16 = 0;
  v6 = a2 != 0 ? 5 : 0;
  PnpSetObjectProperty(
    *(__int64 *)&PiPnpRtlCtx,
    *(_QWORD *)(a1 + 48),
    1u,
    0LL,
    0LL,
    (__int64)&DEVPKEY_Device_DriverProblemDesc,
    0,
    0LL,
    0,
    0);
  if ( !a2 && (unsigned int)IopGetSessionIdFromPDO(*(_QWORD *)(a1 + 32)) != -1 )
    PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 1024, 1);
  if ( a3
    || (PnpAsyncOptions & 1) == 0
    || (*(_DWORD *)(a1 + 396) & 0x400000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x4000) != 0
    || (_DWORD)InitSafeBootMode
    || (v10 = (_QWORD *)PnpDeviceCompletionRequestCreate(a1, v6 + 776, 0LL)) == 0LL )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    v13 = 0LL;
    v15 = -1073741823;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDiagnosticCompletionRoutine, (__int64)&v13);
    if ( started == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      started = v15;
    }
    if ( started >= 0 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(a1 + 32));
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(a1 + 32));
    }
    v8 = v13;
    *(_DWORD *)(a1 + 392) = started;
    PnpTraceStartDevice(a1, (unsigned int)started, v8);
    PipSetDevNodeState(a1, v6 + 776);
  }
  else
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    PipSetDevNodeState(a1, 775);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v11, v10);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDeviceCompletionRoutine, (__int64)v10);
    if ( started == 259 )
    {
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Pend, (unsigned __int16 *)(a1 + 40));
    }
    else
    {
      PnpDeviceCompletionQueueRemoveCompletedRequest(v12, v10);
      return (unsigned int)PnpDeviceCompletionProcessCompletedRequest(v10);
    }
  }
  return (unsigned int)started;
}
