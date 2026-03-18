/*
 * XREFs of Etw_EndpointUpdate @ 0x140001CD8
 * Callers:
 *     Endpoint_EvaluateContextCompletion @ 0x140001B00 (Endpoint_EvaluateContextCompletion.c)
 * Callees:
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x140003138 (McTemplateK0pppnnn_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_EndpointUpdate(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pppnnn_EtwWriteTransfer(
             (int)a2 + 103,
             (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_UPDATE,
             0,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
