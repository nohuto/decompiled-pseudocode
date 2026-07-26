/*
 * XREFs of NblContextVerifierBugcheckInternalError @ 0x14008ADA0
 * Callers:
 *     NdisFSendNetBufferLists @ 0x1400192A0 (NdisFSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x140027C10 (NdisSendNetBufferLists.c)
 *     ?ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x140075230 (-ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall __noreturn NblContextVerifierBugcheckInternalError(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  ndisBugCheckEx(0x32uLL, 0x82uLL, BugCheckParameter3, BugCheckParameter4);
}
