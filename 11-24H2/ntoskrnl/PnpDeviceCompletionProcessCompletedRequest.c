/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x140A115D8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1408BAFAC (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x140A10740 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140A11544 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1403D76E4 (PoFxIdleDevice.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x14043B1B4 (PnpDeviceCompletionRequestDestroy.c)
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     PipUpdatePostStartCharacteristics @ 0x1404A18C8 (PipUpdatePostStartCharacteristics.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PiSwProcessParentStartIrp @ 0x140A11698 (PiSwProcessParentStartIrp.c)
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
