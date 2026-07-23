/*
 * XREFs of PfpCreateEventInternal @ 0x140746AD0
 * Callers:
 *     PfpScenCtxStart @ 0x140744624 (PfpScenCtxStart.c)
 *     PfTStart @ 0x140744DFC (PfTStart.c)
 *     PfpCreateEvent @ 0x140746AB0 (PfpCreateEvent.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateEvent @ 0x1406A7CB0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpCreateEventInternal(UNICODE_STRING *a1, EVENT_TYPE a2, ULONG a3, PVOID *a4)
{
  NTSTATUS Acl; // ebx
  ULONG v9; // ebx
  ULONG v10; // ebx
  ACL *Pool2; // rax
  ACL *v12; // rdi
  HANDLE EventHandle; // [rsp+38h] [rbp-39h] BYREF
  PVOID Object; // [rsp+40h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v17; // [rsp+68h] [rbp-9h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-1h] BYREF

  v17 = 0LL;
  EventHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v9 = RtlLengthSid(SeAliasAdminsSid);
    v10 = RtlLengthSid(SeLocalSystemSid) + 32 + v9;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v10, 0x6C636144u);
    v12 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v10, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((int)v12, 2, 0, 2031619, SeAliasAdminsSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((int)v12, 2, 0, 2031619, SeLocalSystemSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v12, 0);
            if ( Acl >= 0 )
            {
              ObjectAttributes.Attributes = a3;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = a1;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, a2, 0);
              if ( Acl >= 0 )
              {
                Object = 0LL;
                Acl = ObReferenceObjectByHandle(
                        EventHandle,
                        0x1F0003u,
                        (POBJECT_TYPE)ExEventObjectType,
                        0,
                        &Object,
                        0LL);
                *a4 = Object;
                if ( Acl >= 0 )
                  Acl = 0;
              }
            }
          }
        }
      }
    }
    else
    {
      Acl = -1073741670;
    }
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)Acl;
}
