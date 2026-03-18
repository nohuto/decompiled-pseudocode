/*
 * XREFs of ClientI_WMsgkSendMessage @ 0x140146890
 * Callers:
 *     WmsgpPostMessage @ 0x1402C3D84 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ClientI_WMsgkSendMessage(__int64 a1, __int64 a2, int a3, int a4)
{
  int v7; // [rsp+38h] [rbp-10h]

  v7 = 0;
  return Ndr64AsyncClientCall((MIDL_STUBLESS_PROXY_INFO *)&stru_140250850, 0, 0LL, a1, a2, a3, a4, v7);
}
