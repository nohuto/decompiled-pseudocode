/*
 * XREFs of PipEnumerateDevice @ 0x1408BAFAC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1403D76E4 (PoFxIdleDevice.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x14043B148 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PnpDiagnosticTraceObject @ 0x14043B204 (PnpDiagnosticTraceObject.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x14048AB00 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14049250C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1408BB1DC (PnpDeviceCompletionRequestCreate.c)
 *     PipClearDevNodeFlags @ 0x1408BB57C (PipClearDevNodeFlags.c)
 *     PnpQueryDeviceRelations @ 0x1408BB608 (PnpQueryDeviceRelations.c)
 *     PnpPoFxActivateDevice @ 0x1408BB7C0 (PnpPoFxActivateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140A115D8 (PnpDeviceCompletionProcessCompletedRequest.c)
 */

__int64 __fastcall PipEnumerateDevice(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int DeviceRelations; // ebx
  __int64 v12; // rcx

  if ( a2
    || (PnpAsyncOptions & 2) == 0
    || _bittest((const signed __int32 *)(a1 + 396), 0x17u)
    || (_DWORD)InitSafeBootMode
    || (v5 = PnpDeviceCompletionRequestCreate(a1, 783LL, 0LL)) == 0 )
  {
    if ( a3 && _bittest((const signed __int32 *)(a1 + 396), 0x17u) )
      return (unsigned int)-1073741267;
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Start, (unsigned __int16 *)(a1 + 40));
    PipClearDevNodeFlags(a1, 8LL);
    PnpPoFxActivateDevice(a1, 128LL);
    DeviceRelations = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 0LL, 0LL, a1 + 528);
    PoFxIdleDevice(*(_QWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 704) &= ~0x80u;
    *(_DWORD *)(a1 + 392) = DeviceRelations;
    PipSetDevNodeState(a1, 783);
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop, (unsigned __int16 *)(a1 + 40));
  }
  else
  {
    PipSetDevNodeState(a1, 782);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v6, (_QWORD *)v5);
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Start, (unsigned __int16 *)(a1 + 40));
    PipClearDevNodeFlags(a1, 8LL);
    PnpPoFxActivateDevice(a1, 128LL);
    v7 = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 0LL, PnpDeviceCompletionRoutine, v5);
    v9 = v7;
    if ( v7 == 259 )
    {
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Pend, (unsigned __int16 *)(a1 + 40));
      return v9;
    }
    if ( *(_DWORD *)(v5 + 40) != v7 )
    {
      *(_DWORD *)(v5 + 40) = v7;
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop, (unsigned __int16 *)(a1 + 40));
      PnpDeviceCompletionQueueDispatchedEntryCompleted(v12, (_QWORD *)v5);
    }
    PnpDeviceCompletionQueueRemoveCompletedRequest(v8, (_QWORD *)v5);
    PnpDeviceCompletionProcessCompletedRequest((PVOID)v5);
  }
  return 0;
}
