/*
 * XREFs of ?ndisVerifierNdisFSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400C6120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisVerifierNdisFSendNetBufferLists(void *a1, struct _NET_BUFFER_LIST *a2)
{
  (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *))ndisVerifierNdisDispatch + 12))(a1, a2);
}
