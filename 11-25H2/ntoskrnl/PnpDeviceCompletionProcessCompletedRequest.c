/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x140833970
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140832F24 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 * Callees:
 *     PnpDeviceCompletionRequestDestroy @ 0x140463AE4 (PnpDeviceCompletionRequestDestroy.c)
 *     PoFxIdleDevice @ 0x140477718 (PoFxIdleDevice.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PipUpdatePostStartCharacteristics @ 0x1404A1EC0 (PipUpdatePostStartCharacteristics.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PiSwProcessParentStartIrp @ 0x140A7FC24 (PiSwProcessParentStartIrp.c)
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
