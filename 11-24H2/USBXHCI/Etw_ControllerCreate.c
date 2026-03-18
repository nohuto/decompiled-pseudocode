/*
 * XREFs of Etw_ControllerCreate @ 0x14004E6A8
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140079620 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer @ 0x14004F630 (McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_ControllerCreate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer(
             *(unsigned __int8 *)(a2 + 1000),
             *(unsigned __int16 *)(a2 + 668),
             (int)a2 + 714,
             *(_QWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 644),
             *(_DWORD *)(a2 + 660),
             *(_WORD *)(a2 + 664),
             *(_WORD *)(a2 + 668),
             *(_WORD *)(a2 + 648),
             *(_WORD *)(a2 + 652),
             *(_BYTE *)(a2 + 656),
             a2 + 704,
             a2 + 709,
             a2 + 714,
             *(_QWORD *)(a2 + 728),
             *(_DWORD *)(a2 + 864),
             *(_DWORD *)(a2 + 792),
             *(_DWORD *)(a2 + 176),
             *(_BYTE *)(a2 + 1000));
  return result;
}
