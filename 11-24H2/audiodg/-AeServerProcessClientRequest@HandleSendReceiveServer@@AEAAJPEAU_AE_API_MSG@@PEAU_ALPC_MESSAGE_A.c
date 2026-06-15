/*
 * XREFs of ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x14003CBFC
 * Callers:
 *     ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x14003C9D8 (-AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ.c)
 * Callees:
 *     ?ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x14003CC54 (-ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@P.c)
 *     ?ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z @ 0x1400911C8 (-ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerProcessClientRequest(
        void ***this,
        struct _AE_API_MSG *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        void *a4)
{
  __int64 result; // rax
  struct _AE_API_MSG *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( *((_WORD *)a2 + 1) != 48 )
  {
LABEL_5:
    result = 3221225647LL;
    goto LABEL_4;
  }
  if ( *((_DWORD *)a2 + 10) != 1 )
  {
    if ( *((_DWORD *)a2 + 10) == 2 )
    {
      result = HandleSendReceiveServer::ValidateStopListening((HandleSendReceiveServer *)this, &v6);
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  result = HandleSendReceiveServer::ExtractHandle(
             (HandleSendReceiveServer *)(unsigned int)(*((_DWORD *)a2 + 10) - 1),
             &v6,
             a3,
             this[4]);
LABEL_4:
  *((_DWORD *)a2 + 11) = result;
  return result;
}
