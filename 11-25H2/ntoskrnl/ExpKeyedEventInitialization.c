/*
 * XREFs of ExpKeyedEventInitialization @ 0x140C326DC
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C2F788 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKeyedEvent @ 0x14069C820 (ZwCreateKeyedEvent.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406EFC30 (ObCreateObjectType.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     RtlAddMandatoryAce @ 0x14092AE40 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409A6F20 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A061E0 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

int ExpKeyedEventInitialization()
{
  int result; // eax
  ULONG v1; // edi
  ACL *Pool2; // rax
  ACL *v3; // rbx
  NTSTATUS Acl; // edi
  ACL *v5; // rcx
  ULONG v6; // esi
  ACL *v7; // rax
  ACL *v8; // rdi
  NTSTATUS v9; // esi
  HANDLE KeyedEventHandle; // [rsp+38h] [rbp-D0h] BYREF
  PVOID DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v14; // [rsp+A8h] [rbp-60h]
  __int16 v15; // [rsp+B8h] [rbp-50h] BYREF
  char v16; // [rsp+BAh] [rbp-4Eh]
  int v17; // [rsp+C0h] [rbp-48h]
  int v18; // [rsp+C4h] [rbp-44h]
  int v19; // [rsp+C8h] [rbp-40h]
  int v20; // [rsp+CCh] [rbp-3Ch]
  int v21; // [rsp+D0h] [rbp-38h]
  int v22; // [rsp+D4h] [rbp-34h]
  int v23; // [rsp+DCh] [rbp-2Ch]
  int v24; // [rsp+E0h] [rbp-28h]
  int v25; // [rsp+E4h] [rbp-24h]

  *(_OWORD *)&DestinationString[1] = 0LL;
  memset_0(&v15, 0, 0x78uLL);
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyedEventHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v14 = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KeyedEvent");
  v17 = 0;
  v24 = 0;
  v25 = 0;
  v16 |= 4u;
  v22 = 983043;
  v21 = 983043;
  v15 = 120;
  v23 = 1;
  v18 = 131073;
  v19 = 131074;
  v20 = 0x20000;
  result = ObCreateObjectType(
             (const UNICODE_STRING *)&DestinationString[1],
             &v15,
             0LL,
             (__int64)&ExpKeyedEventObjectType);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v1 = 4
         * (*((unsigned __int8 *)SeLocalSystemSid + 1)
          + *((unsigned __int8 *)SeAliasAdminsSid + 1)
          + *((unsigned __int8 *)SeWorldSid + 1))
         + 68;
      Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v1, 0x6C636144uLL);
      v3 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      Acl = RtlCreateAcl(Pool2, v1, 2u);
      v5 = v3;
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0x20003u, SeWorldSid);
      v5 = v3;
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeAliasAdminsSid);
      v5 = v3;
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeLocalSystemSid);
      if ( Acl < 0 || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0), Acl < 0) )
      {
LABEL_10:
        v5 = v3;
LABEL_6:
        ExFreePoolWithTag(v5, 0);
        return Acl;
      }
      v6 = 4 * *((unsigned __int8 *)SeLowMandatorySid + 1) + 28;
      v7 = (ACL *)ExAllocatePool2(0x100uLL, v6, 0x6C636144uLL);
      v8 = v7;
      if ( !v7 )
      {
        Acl = -1073741670;
        goto LABEL_10;
      }
      v9 = RtlCreateAcl(v7, v6, 2u);
      if ( v9 < 0
        || (v9 = RtlAddMandatoryAce(v8, 2u, 0, SeLowMandatorySid, 0x11u, 1u), v9 < 0)
        || (v9 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0), v9 < 0) )
      {
        ExFreePoolWithTag(v3, 0);
        ExFreePoolWithTag(v8, 0);
      }
      else
      {
        RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"\\KernelObjects\\CritSecOutOfMemoryEvent");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
        ObjectAttributes.Length = 48;
        ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
        ObjectAttributes.Attributes = 16;
        v9 = ZwCreateKeyedEvent(&KeyedEventHandle, 0xF0003u, &ObjectAttributes, 0);
        ExFreePoolWithTag(v3, 0);
        ExFreePoolWithTag(v8, 0);
        if ( v9 >= 0 )
        {
          DestinationString[0] = 0LL;
          v9 = ObReferenceObjectByHandle(KeyedEventHandle, 0xF0003u, ExpKeyedEventObjectType, 0, DestinationString, 0LL);
          ExpCritSecOutOfMemoryEvent = (__int64)DestinationString[0];
          ZwClose(KeyedEventHandle);
        }
      }
      return v9;
    }
  }
  return result;
}
