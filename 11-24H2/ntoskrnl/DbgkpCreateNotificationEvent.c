/*
 * XREFs of DbgkpCreateNotificationEvent @ 0x140704940
 * Callers:
 *     DbgkpInitializePhase1SiloState @ 0x140704C34 (DbgkpInitializePhase1SiloState.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140463B10 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateEvent @ 0x1406A7CB0 (ZwCreateEvent.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall DbgkpCreateNotificationEvent(UNICODE_STRING *a1, __int64 a2)
{
  NTSTATUS result; // eax
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // edi
  ACL *Pool2; // rax
  ACL *v11; // rbx
  NTSTATUS Acl; // edi
  ACL *v13; // rcx
  HANDLE EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-58h]
  _BYTE CapabilitySid[48]; // [rsp+B0h] [rbp-50h] BYREF
  char CapabilityGroupSid[48]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2621478LL;
  v18 = 0LL;
  EventHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  UnicodeString.Buffer = L"lpacInstrumentation";
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v5 = RtlLengthSid(SeWorldSid);
      v6 = RtlLengthSid(SeLocalSystemSid) + v5;
      v7 = RtlLengthSid(SeLocalSid) + v6;
      v8 = RtlLengthSid(SeAllAppPackagesSid) + v7;
      v9 = v8 + RtlLengthSid(CapabilitySid) + 68;
      Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v9, 0x6C636144u);
      v11 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      Acl = RtlCreateAcl(Pool2, v9, 2u);
      v13 = v11;
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, SeLocalSid, 0);
        v13 = v11;
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, SeAllAppPackagesSid, 0);
          v13 = v11;
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, CapabilitySid, 0);
            v13 = v11;
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((int)v11, 2, 0, 2031619, SeLocalSystemSid, 0);
              v13 = v11;
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, SeWorldSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
                  if ( Acl >= 0 )
                  {
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 528;
                    ObjectAttributes.ObjectName = a1;
                    ObjectAttributes.SecurityQualityOfService = 0LL;
                    Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
                    ExFreePoolWithTag(v11, 0);
                    if ( Acl >= 0 )
                    {
                      Acl = ObpReferenceObjectByHandleWithTag((ULONG_PTR)EventHandle, 0x6B676244u, a2, 0LL, 0LL);
                      ZwClose(EventHandle);
                    }
                    return Acl;
                  }
                }
                v13 = v11;
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
      return Acl;
    }
  }
  return result;
}
