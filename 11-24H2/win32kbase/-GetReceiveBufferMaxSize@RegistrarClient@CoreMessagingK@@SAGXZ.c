/*
 * XREFs of ?GetReceiveBufferMaxSize@RegistrarClient@CoreMessagingK@@SAGXZ @ 0x14004BA04
 * Callers:
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x14004B180 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x14004B318 (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall CoreMessagingK::RegistrarClient::GetReceiveBufferMaxSize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int16 result; // ax
  unsigned __int64 v7; // rcx

  v4 = *(unsigned __int16 *)(W32GetUserCoreMessagingSessionState(a1, a2, a3) + 50);
  result = 512;
  v7 = v4 + 80;
  if ( v7 >= 0x200 )
    return *(_WORD *)(W32GetUserCoreMessagingSessionState(v7, v3, v5) + 50) + 80;
  return result;
}
