/*
 * XREFs of ?AddTokenToQueueAndSignalTokenEvent@CTokenManager@@UEAAJPEAVCToken@@@Z @ 0x140097EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x14000F2E4 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueueAndSignalTokenEvent(HANDLE *this, struct CToken *a2)
{
  int v3; // ebx
  LONG PreviousState; // [rsp+40h] [rbp+18h] BYREF

  v3 = CTokenManager::AddTokenToQueue((CTokenManager *)this, a2);
  if ( v3 >= 0 )
  {
    PreviousState = 0;
    ZwSetEvent(this[8], &PreviousState);
  }
  return (unsigned int)v3;
}
