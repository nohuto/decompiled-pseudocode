/*
 * XREFs of ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0069E00
 * Callers:
 *     <none>
 * Callees:
 *     CoreUICallReceive @ 0x1C0069258 (CoreUICallReceive.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1C0069CAC (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C006A538 (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C006A73C (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C006C1C8 (-HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0234FC4 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::SubmitBuffer(
        struct IMessageCallSendHost *a1,
        unsigned __int64 *a2,
        __int64 a3,
        char *a4)
{
  char *v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  struct AlpcBufferK *v7; // rbx
  int v8; // edi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  const struct MsgCallTypeDefinition *v11; // r8
  const unsigned __int8 *v12; // r9
  unsigned int v13; // ecx
  void *v14; // rax
  int v15; // eax
  int v16; // edx
  unsigned __int64 v18; // [rsp+40h] [rbp-28h] BYREF
  struct AlpcBufferK *v19; // [rsp+48h] [rbp-20h] BYREF
  void *v20; // [rsp+50h] [rbp-18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0LL;
  v4 = a4 - 80;
  v18 = 0LL;
  v5 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize;
  LOBYTE(v21) = 0;
  v20 = &CoreMessagingK::ReceiveHost::s_Vtbl;
  if ( (unsigned __int64)CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80 < 0x200 )
    v5 = 512LL;
  else
    LOWORD(v5) = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80;
  v6 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>(v5, &v19);
  v7 = v19;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80LL;
    if ( v9 < 0x200 )
      LOWORD(v9) = 512;
    v18 = (unsigned __int16)v9;
    v8 = ZwAlpcSendWaitReceivePort(CoreMessagingK::RegistrarClient::s_Port, 0x20000LL, v4, 0LL, v19, &v18, 0LL, 0LL);
    if ( v8 >= 0 )
    {
      CoreMessagingK::SendHost::ValidateReceiveBuffer(v7, v18);
      v13 = *((_DWORD *)v7 + 18);
      if ( v13 )
        v14 = (char *)v7 + 80;
      else
        v14 = 0LL;
      v15 = CoreUICallReceive((struct IMessageCallReceiveHost *)&v20, v10, v11, v12, (__int64)&v21, v14, v13);
      if ( v15 )
        CoreMessagingK::Runtime::BugCheck(1282LL, v15, 0LL);
      CoreMessagingK::BufferCache::Free(v4);
      v8 = 0;
    }
  }
  CoreMessagingK::BufferCache::Free(v7);
  return CoreMessagingK::HResultUtil::HRESULTFromNTStatus((CoreMessagingK::HResultUtil *)(unsigned int)v8, v16);
}
