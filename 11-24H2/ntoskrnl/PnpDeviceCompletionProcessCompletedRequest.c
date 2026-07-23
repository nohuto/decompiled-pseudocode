/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x1409BF9E8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1408B895C (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1409BEB50 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1409BF954 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     PnpDeviceCompletionRequestDestroy @ 0x1402F0434 (PnpDeviceCompletionRequestDestroy.c)
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PipUpdatePostStartCharacteristics @ 0x14049C854 (PipUpdatePostStartCharacteristics.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PiSwProcessParentStartIrp @ 0x1409BFAA8 (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequest(PVOID Context)
{
  ULONG_PTR v2; // rbx
  int v4; // eax

  v2 = *((_QWORD *)Context + 2);
  *(_QWORD *)(v2 + 528) = *((_QWORD *)Context + 6);
  *(_DWORD *)(v2 + 392) = *((_DWORD *)Context + 10);
  PipSetDevNodeState(v2, *((_DWORD *)Context + 8));
  if ( *((int *)Context + 10) >= 0 )
  {
    v4 = *((_DWORD *)Context + 8);
    if ( v4 == 776 || v4 == 781 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(v2 + 32));
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(v2 + 32));
    }
  }
  if ( *((_DWORD *)Context + 8) == 783 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  PnpDeviceCompletionRequestDestroy(Context);
  return *(unsigned int *)(v2 + 392);
}
