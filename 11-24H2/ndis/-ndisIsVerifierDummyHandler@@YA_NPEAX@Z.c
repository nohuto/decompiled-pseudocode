/*
 * XREFs of ?ndisIsVerifierDummyHandler@@YA_NPEAX@Z @ 0x1400A29E4
 * Callers:
 *     ?ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F810 (-ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004FC10 (-ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsVerifierDummyHandler(void *a1)
{
  return a1 == SendNetBufferListsDummyHandler
      || a1 == SendNetBufferListsCompleteDummyHandler
      || a1 == IndicateReceiveNetBufferListsDummyHandler
      || a1 == ReturnNetBufferListsDummyHandler;
}
