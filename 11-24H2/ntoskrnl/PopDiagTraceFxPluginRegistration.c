/*
 * XREFs of PopDiagTraceFxPluginRegistration @ 0x140A927C4
 * Callers:
 *     PopDiagTraceFxRundown @ 0x1402B69F4 (PopDiagTraceFxRundown.c)
 *     PopFxRegisterPluginEx @ 0x1405CF188 (PopFxRegisterPluginEx.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPluginRegistration(__int64 a1, __int64 a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  v10 = a1;
  v3 = &POP_ETW_EVENT_PLUGIN_REGISTRATION;
  v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PLUGIN_REGISTRATION_RUNDOWN;
  if ( !a3 )
    v4 = &POP_ETW_EVENT_PLUGIN_REGISTRATION;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, v4);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v10;
      UserData.Size = 8;
      v7 = &v11;
      v8 = 8;
      LOBYTE(v3) = EtwWrite(PopDiagHandle, v4, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
