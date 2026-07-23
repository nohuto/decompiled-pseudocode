/*
 * XREFs of PipEnumerateDevice @ 0x1408B895C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1402F03C8 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PnpDiagnosticTraceObject @ 0x1402F0484 (PnpDiagnosticTraceObject.c)
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140485928 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14048D37C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1408B8B8C (PnpDeviceCompletionRequestCreate.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     PnpQueryDeviceRelations @ 0x1408B8FB8 (PnpQueryDeviceRelations.c)
 *     PnpPoFxActivateDevice @ 0x1408B9170 (PnpPoFxActivateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1409BF9E8 (PnpDeviceCompletionProcessCompletedRequest.c)
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
    || InitSafeBootMode
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
