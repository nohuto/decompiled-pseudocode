/*
 * XREFs of XilUsbDevice_WriteDoorbell @ 0x140005820
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x140006F00 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x140004518 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x140006AB0 (McTemplateK0uqq_EtwWriteTransfer.c)
 */

int *__fastcall XilUsbDevice_WriteDoorbell(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // ebx
  int *result; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 160) )
  {
    v5 = ((_DWORD)a3 << 16) | (unsigned __int8)a2;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0uqq_EtwWriteTransfer(a1, a2, a3, *(unsigned __int8 *)(a1 + 135), a2, a3);
    result = *(int **)(a1 + 160);
    *result = v5;
    _InterlockedOr(v7, 0);
  }
  else if ( a4 )
  {
    return (int *)XilUsbDevice_SendRequestToRingDoorbell((__int64 *)(a1 + 608), a2, a3);
  }
  return result;
}
