/*
 * XREFs of SshpAlpcInitialize @ 0x140C23138
 * Callers:
 *     SshInitialize @ 0x140C22EE0 (SshInitialize.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiInitializeTimer2 @ 0x14036F318 (KiInitializeTimer2.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404B44B0 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x14069C0E0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x14069C320 (ZwAlpcSetInformation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SshpAlpcMessageCallback @ 0x140758260 (SshpAlpcMessageCallback.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409A6F20 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ExCreateCallback @ 0x140A62280 (ExCreateCallback.c)
 *     CmSiRWLockInitialize @ 0x140ABABF0 (CmSiRWLockInitialize.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 SshpAlpcInitialize()
{
  unsigned int v0; // edi
  char *v1; // rbx
  __int64 v2; // rsi
  ULONG v3; // ebx
  ACL *Pool2; // rax
  ACL *v5; // rsi
  NTSTATUS Acl; // ebx
  NTSTATUS Callback; // eax
  PCALLBACK_OBJECT v8; // rdi
  PCALLBACK_OBJECT ObjectAttributes[7]; // [rsp+28h] [rbp-89h] BYREF
  __int128 PortInformation; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-11h]
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  PortInformation = 0LL;
  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  memset(ObjectAttributes, 0, 52);
  DestinationString = 0LL;
  v14 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  CmSiRWLockInitialize(&stru_140F05788);
  v0 = 0;
  v1 = (char *)&unk_140F057A2;
  v2 = 0LL;
  do
  {
    *(_DWORD *)(v1 - 10) = 0;
    *(v1 - 6) = 0;
    *(_QWORD *)(v1 + 174) = v1 + 166;
    *(_QWORD *)(v1 + 166) = v1 + 166;
    *(_WORD *)v1 = 0;
    KiInitializeTimer2((unsigned __int64)(v1 - 2), (__int64)SshpAlpcOpenGracePeriodTimerCallback, v2, 8);
    *(_QWORD *)(v1 + 134) = 0LL;
    *(_QWORD *)(v1 + 150) = SshpAlpcOpenGracePeriodWorker;
    *(_QWORD *)(v1 + 158) = v2;
    if ( v0 == 1 )
      ++*(_DWORD *)(v1 - 10);
    ++v0;
    ++v2;
    v1 += 192;
  }
  while ( v0 < 2 );
  v3 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 28;
  Pool2 = (ACL *)ExAllocatePool2(0x40uLL, v3, 0x70687373uLL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v3);
    Acl = RtlCreateAcl(v5, v3, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v5, 2u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\SleepstudyControlPort");
            ObjectAttributes[2] = 0LL;
            ObjectAttributes[6] = 0LL;
            ObjectAttributes[3] = (PCALLBACK_OBJECT)&DestinationString;
            PortAttributes.MaxMessageLength = 64LL;
            ObjectAttributes[5] = (PCALLBACK_OBJECT)SecurityDescriptor;
            PortAttributes.Flags = 0x100000;
            LODWORD(ObjectAttributes[1]) = 48;
            LODWORD(ObjectAttributes[4]) = 512;
            Acl = ZwAlpcCreatePort(&SshpAlpcContext, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], &PortAttributes);
            if ( Acl >= 0 )
            {
              ObjectAttributes[2] = 0LL;
              ObjectAttributes[3] = 0LL;
              LODWORD(ObjectAttributes[1]) = 48;
              LODWORD(ObjectAttributes[4]) = 512;
              *(_OWORD *)&ObjectAttributes[5] = 0LL;
              Callback = ExCreateCallback(ObjectAttributes, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 1u, 0);
              v8 = ObjectAttributes[0];
              Acl = Callback;
              if ( Callback >= 0 )
              {
                if ( ExRegisterCallback(ObjectAttributes[0], (PCALLBACK_FUNCTION)SshpAlpcMessageCallback, 0LL) )
                {
                  PortInformation = (unsigned __int64)v8;
                  Acl = ZwAlpcSetInformation(SshpAlpcContext, AlpcRegisterCallbackInformation, &PortInformation, 0x10u);
                  if ( Acl >= 0 )
                  {
                    SshpAlpcMessageCallback(0LL, 0LL, 0LL);
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
              if ( v8 )
                ObfDereferenceObjectWithTag(v8, 0x746C6644u);
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v5, 0x70687373u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
