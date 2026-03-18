/*
 * XREFs of ExpKeyedEventInitialization @ 0x140C43A94
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C40A64 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateKeyedEvent @ 0x1406A7AF0 (ZwCreateKeyedEvent.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObCreateObjectType @ 0x1406FBAA0 (ObCreateObjectType.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x14091D840 (RtlAddMandatoryAce.c)
 *     RtlAddAccessAllowedAce @ 0x1409A7460 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A07B00 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  int KeyedEvent; // esi
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  PVOID DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+58h] [rbp-B0h]
  int v13; // [rsp+5Ch] [rbp-ACh]
  __int64 v14; // [rsp+60h] [rbp-A8h]
  PVOID *v15; // [rsp+68h] [rbp-A0h]
  int v16; // [rsp+70h] [rbp-98h]
  int v17; // [rsp+74h] [rbp-94h]
  _OWORD *v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-60h]
  __int16 v22; // [rsp+B8h] [rbp-50h] BYREF
  char v23; // [rsp+BAh] [rbp-4Eh]
  int v24; // [rsp+C0h] [rbp-48h]
  int v25; // [rsp+C4h] [rbp-44h]
  int v26; // [rsp+C8h] [rbp-40h]
  int v27; // [rsp+CCh] [rbp-3Ch]
  int v28; // [rsp+D0h] [rbp-38h]
  int v29; // [rsp+D4h] [rbp-34h]
  int v30; // [rsp+DCh] [rbp-2Ch]
  int v31; // [rsp+E0h] [rbp-28h]
  int v32; // [rsp+E4h] [rbp-24h]

  *(_OWORD *)&DestinationString[1] = 0LL;
  memset_0(&v22, 0, 0x78uLL);
  v17 = 0;
  Handle = 0LL;
  v13 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v21 = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KeyedEvent");
  v24 = 0;
  v31 = 0;
  v32 = 0;
  v23 |= 4u;
  v29 = 983043;
  v28 = 983043;
  v22 = 120;
  v30 = 1;
  v25 = 131073;
  v26 = 131074;
  v27 = 0x20000;
  result = ObCreateObjectType(
             (const UNICODE_STRING *)&DestinationString[1],
             &v22,
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
      KeyedEvent = RtlCreateAcl(v7, v6, 2u);
      if ( KeyedEvent < 0
        || (KeyedEvent = RtlAddMandatoryAce((__int64)v8, 2u, 0, (unsigned __int8 *)SeLowMandatorySid, 17, 1),
            KeyedEvent < 0)
        || (KeyedEvent = RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, 1, (__int64)v8, 0), KeyedEvent < 0) )
      {
        ExFreePoolWithTag(v3, 0);
        ExFreePoolWithTag(v8, 0);
      }
      else
      {
        RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"\\KernelObjects\\CritSecOutOfMemoryEvent");
        v14 = 0LL;
        v19 = 0LL;
        v15 = &DestinationString[1];
        v12 = 48;
        v18 = SecurityDescriptor;
        v16 = 16;
        KeyedEvent = ZwCreateKeyedEvent((__int64)&Handle, 983043LL);
        ExFreePoolWithTag(v3, 0);
        ExFreePoolWithTag(v8, 0);
        if ( KeyedEvent >= 0 )
        {
          DestinationString[0] = 0LL;
          KeyedEvent = ObReferenceObjectByHandle(Handle, 0xF0003u, ExpKeyedEventObjectType, 0, DestinationString, 0LL);
          ExpCritSecOutOfMemoryEvent = (__int64)DestinationString[0];
          ZwClose(Handle);
        }
      }
      return KeyedEvent;
    }
  }
  return result;
}
