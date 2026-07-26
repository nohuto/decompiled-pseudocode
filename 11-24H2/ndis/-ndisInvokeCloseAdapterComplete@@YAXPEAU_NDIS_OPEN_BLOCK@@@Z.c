/*
 * XREFs of ?ndisInvokeCloseAdapterComplete@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140162310
 * Callers:
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x140162170 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeCloseAdapterComplete(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rdi

  ProtocolHandle = a1->ProtocolHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      100,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)ProtocolHandle,
      (char)a1);
  ProtocolHandle->CloseAdapterCompleteHandlerEx(a1->ProtocolBindingContext);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      101,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)ProtocolHandle,
      (char)a1);
}
