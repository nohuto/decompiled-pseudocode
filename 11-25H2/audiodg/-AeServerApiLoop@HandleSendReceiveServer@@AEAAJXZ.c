/*
 * XREFs of ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x14003CCD8
 * Callers:
 *     ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x14003CCC0 (-AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z.c)
 * Callees:
 *     ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x14003CEFC (-AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_A.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiLoop(HandleSendReceiveServer *this)
{
  __int64 result; // rax
  _OWORD *v3; // rdi
  char v4; // cl
  __int64 v5; // rcx
  int v6; // eax
  void *v7; // r9
  void *v8; // rcx
  int v9; // [rsp+48h] [rbp-C0h]
  __int64 v10; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v13[3]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v14[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v15; // [rsp+B8h] [rbp-50h]
  int v16; // [rsp+E8h] [rbp-20h]
  _BYTE v17[64]; // [rsp+F8h] [rbp-10h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  memset(v13, 0, sizeof(v13));
  result = AlpcInitializeMessageAttribute(805306368LL, v17, 64LL, &v11);
  if ( (int)result >= 0 )
  {
    AlpcGetMessageAttribute(v17, 0x20000000LL);
    v3 = 0LL;
    memset_0(v14, 0, 0x48uLL);
    v15 = 48LL;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 12, 1, 1) )
            return 0LL;
          v5 = *((_QWORD *)this + 1);
          v12 = 48LL;
          v6 = NtAlpcSendWaitReceivePort(
                 v5,
                 0x10000LL,
                 v3,
                 0LL,
                 v13,
                 &v12,
                 v17,
                 &HandleSendReceiveServer::AeServerApiThreadTimeout);
          if ( v6 >= 0 )
            break;
LABEL_6:
          v3 = 0LL;
        }
      }
      while ( v6 == 258 );
      if ( BYTE4(v13[0]) != 1 )
      {
        if ( BYTE4(v13[0]) != 3 )
        {
          if ( BYTE4(v13[0]) == 5 )
          {
            v8 = (void *)*((_QWORD *)this + 3);
            if ( v8 )
            {
              NtClose(v8);
              *((_QWORD *)this + 3) = 0LL;
            }
            _InterlockedExchange((volatile __int32 *)this + 12, 1);
          }
          else
          {
            v4 = BYTE4(v13[0]) - 10;
            if ( BYTE4(v13[0]) == 10 )
            {
              v14[0] = 0;
              v16 = 0;
              if ( *((_QWORD *)&v13[0] + 1) <= 0xFFFFFFFFuLL && DWORD2(v13[0]) == *((_DWORD *)this + 4) )
              {
                v4 = 1;
                v14[0] = 0x80000;
                v16 = 16;
              }
              LOBYTE(v9) = v4;
              NtAlpcAcceptConnectPort(&v10, *((_QWORD *)this + 1), 0LL, 0LL, v14, 0LL, v13, v17, v9);
              *((_QWORD *)this + 3) = v10;
              *((_BYTE *)this + 52) = 1;
            }
          }
        }
        goto LABEL_6;
      }
      HandleSendReceiveServer::AeServerProcessClientRequest(
        this,
        (struct _AE_API_MSG *)v13,
        (struct _ALPC_MESSAGE_ATTRIBUTES *)v17,
        v7);
      v3 = v13;
    }
  }
  return result;
}
