/*
 * XREFs of ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x14003C9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x14003C9D8 (-AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiProc(HandleSendReceiveServer *Parameter)
{
  HandleSendReceiveServer::AeServerApiLoop(Parameter);
  return 0LL;
}
