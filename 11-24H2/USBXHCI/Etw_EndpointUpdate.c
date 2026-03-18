/*
 * XREFs of Etw_EndpointUpdate @ 0x14001F948
 * Callers:
 *     Endpoint_EvaluateContextCompletion @ 0x14001F770 (Endpoint_EvaluateContextCompletion.c)
 * Callees:
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x14000AD1C (McTemplateK0pppnnn_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_EndpointUpdate(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pppnnn_EtwWriteTransfer(
             (__int64)a2 + 111,
             (__int64)&USBXHCI_ETW_EVENT_ENDPOINT_UPDATE,
             0LL,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
