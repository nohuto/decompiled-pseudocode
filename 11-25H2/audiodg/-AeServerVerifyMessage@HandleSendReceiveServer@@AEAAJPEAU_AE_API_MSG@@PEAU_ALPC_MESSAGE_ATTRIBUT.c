/*
 * XREFs of ?AeServerVerifyMessage@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x14003CFB0
 * Callers:
 *     ?ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x14003CF54 (-ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HandleSendReceiveServer::AeServerVerifyMessage(
        HandleSendReceiveServer *this,
        struct _AE_API_MSG *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        void **a4)
{
  unsigned int v4; // ebx
  __int64 MessageAttribute; // rax

  v4 = 0;
  *a4 = 0LL;
  if ( (*((_DWORD *)a3 + 1) & 0x10000000) == 0 )
  {
    v4 = -1073741649;
LABEL_6:
    *((_DWORD *)a2 + 11) = v4;
    return v4;
  }
  MessageAttribute = AlpcGetMessageAttribute(a3, 0x10000000LL);
  if ( !MessageAttribute )
  {
    v4 = -1073741816;
    goto LABEL_6;
  }
  *a4 = *(void **)(MessageAttribute + 8);
  return v4;
}
