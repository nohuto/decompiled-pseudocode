/*
 * XREFs of ?EnsureAlpcCallbackRegistered@ServerPorts@CoreMessagingK@@CAJXZ @ 0x1400FE074
 * Callers:
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1400FC9BC (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::ServerPorts::EnsureAlpcCallbackRegistered(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 UserCoreMessagingSessionState; // rax
  __int64 v4; // rsi
  PCALLBACK_OBJECT *v5; // rbx
  NTSTATUS v7; // edi
  PVOID v8; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  v4 = UserCoreMessagingSessionState;
  v5 = (PCALLBACK_OBJECT *)(UserCoreMessagingSessionState + 64);
  if ( *(_QWORD *)(UserCoreMessagingSessionState + 64) )
    return 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ExCreateCallback((PCALLBACK_OBJECT *)(UserCoreMessagingSessionState + 64), &ObjectAttributes, 1u, 0);
  if ( v7 >= 0 )
  {
    v8 = ExRegisterCallback(*v5, (PCALLBACK_FUNCTION)CoreMessagingK::ServerPorts::PortSignaledCallback, 0LL);
    *(_QWORD *)(v4 + 72) = v8;
    if ( !v8 )
    {
      ObfDereferenceObject(*v5);
      *v5 = 0LL;
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v7;
}
