/*
 * XREFs of NblContextVerifierBugcheckInternalError @ 0x140096000
 * Callers:
 *     NdisFSendNetBufferLists @ 0x14001FCC0 (NdisFSendNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x140031410 (NdisSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140033A40 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x140091670 (-ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall __noreturn NblContextVerifierBugcheckInternalError(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  ndisBugCheckEx(0x32uLL, 0x82uLL, BugCheckParameter3, BugCheckParameter4);
}
