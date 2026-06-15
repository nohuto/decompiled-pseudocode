/*
 * XREFs of ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x14003CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x14003CCD8 (-AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiProc(HandleSendReceiveServer *Parameter)
{
  HandleSendReceiveServer::AeServerApiLoop(Parameter);
  return 0LL;
}
