/*
 * XREFs of ?ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x14003CC54
 * Callers:
 *     ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x14003CBFC (-AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_A.c)
 * Callees:
 *     ?AeServerVerifyMessage@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x14003CCB0 (-AeServerVerifyMessage@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUT.c)
 */

__int64 __fastcall HandleSendReceiveServer::ExtractHandle(
        HandleSendReceiveServer *this,
        struct _AE_API_MSG **a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        void **a4)
{
  struct _AE_API_MSG *v4; // rdx
  int v6; // edi
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = this;
  v4 = *a2;
  Handle = 0LL;
  v6 = HandleSendReceiveServer::AeServerVerifyMessage(this, v4, a3, &Handle);
  if ( v6 >= 0 )
  {
    if ( a4 )
      _InterlockedExchange64((volatile __int64 *)a4, (__int64)Handle);
    else
      NtClose(Handle);
  }
  return (unsigned int)v6;
}
