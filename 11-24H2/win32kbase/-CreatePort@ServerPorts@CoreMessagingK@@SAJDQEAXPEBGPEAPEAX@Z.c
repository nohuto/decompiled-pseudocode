/*
 * XREFs of ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1400FBB5C
 * Callers:
 *     CoreMsgCreatePort @ 0x1400FC1D4 (CoreMsgCreatePort.c)
 * Callees:
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1400FC618 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1400FC9BC (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1400FDE28 (-Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x140140884 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x14014329C (-GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x140198DD8 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     wcsncmp @ 0x1401A04E4 (wcsncmp.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::CreatePort(
        __int64 a1,
        void *const a2,
        const unsigned __int16 *a3,
        void **a4)
{
  NTSTATUS AlpcPortName; // ebx
  HANDLE v8; // rcx
  __int64 v10; // rdx
  struct _GUID *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 UserCoreMessagingSessionState; // rax
  HANDLE Handle; // [rsp+20h] [rbp-99h] BYREF
  struct CoreMessagingK::CoreMsgObject *v17; // [rsp+28h] [rbp-91h] BYREF
  struct _UNICODE_STRING v18; // [rsp+30h] [rbp-89h] BYREF
  char v19; // [rsp+40h] [rbp-79h] BYREF

  v17 = 0LL;
  *a4 = 0LL;
  Handle = 0LL;
  v18 = 0LL;
  if ( wcsncmp(a3, L"Kernel\\", 7uLL) )
  {
    AlpcPortName = -1073741585;
LABEL_3:
    v8 = Handle;
    goto LABEL_4;
  }
  AlpcPortName = CoreMessagingK::CoreMsgObject::Create(
                   0,
                   (const struct CoreMessagingK::ObjectImplVtbl *)&CoreMessagingK::ServerPortInfo::s_Vtbl,
                   &v17,
                   &Handle);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  v11 = (struct _GUID *)((char *)v17 + 8);
  AlpcPortName = CoreMessagingK::Runtime::CopyString(a3, v10, (char *)v17 + 40);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  v18.MaximumLength = 136;
  v18.Buffer = (PWSTR)&v19;
  AlpcPortName = ExUuidCreate(v11 + 1);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  AlpcPortName = CoreMessagingK::ServerPorts::GetAlpcPortName(v11 + 1, &v18);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  AlpcPortName = CoreMessagingK::ServerPorts::CreateAlpcPort(a2, &v18, (struct CoreMessagingK::ServerPortInfo *)v11);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  AlpcPortName = CoreMessagingK::RegistrarClient::RegisterPort(v11 + 1, &v18);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  AlpcPortName = CoreMessagingK::RegistrarClient::RegisterPort(a3, v11 + 1);
  if ( AlpcPortName < 0 )
    goto LABEL_3;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(v13, v12, v14);
  *(_QWORD *)&v11[3].Data1 = *(_QWORD *)(UserCoreMessagingSessionState + 56);
  v8 = 0LL;
  *(_QWORD *)(UserCoreMessagingSessionState + 56) = v11;
  AlpcPortName = 0;
  *a4 = Handle;
  Handle = 0LL;
LABEL_4:
  if ( v8 )
    ZwClose(v8);
  return (unsigned int)AlpcPortName;
}
