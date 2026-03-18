/*
 * XREFs of SepInitializationPhase1 @ 0x14077FC20
 * Callers:
 *     SeInitServerSilo @ 0x14077FA8C (SeInitServerSilo.c)
 *     SeInitSystem @ 0x140C289B0 (SeInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     SepInitProcessAuditSd @ 0x1405FBBC4 (SepInitProcessAuditSd.c)
 *     SddlBaseInitialize @ 0x1405FD3F8 (SddlBaseInitialize.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateEvent @ 0x14069BA40 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x14069C6C0 (ZwCreateDirectoryObject.c)
 *     SepInitializeCodeIntegrity @ 0x14077F20C (SepInitializeCodeIntegrity.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140C28A84 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonToken @ 0x140C28B3C (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C28DC0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140C29BF4 (SepInitializeSingletonAttributesStructures.c)
 */

char SepInitializationPhase1()
{
  bool IsCurrentThreadInServerSilo; // di
  ACL *Pool2; // rax
  ACL *v2; // rbx
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-31h] BYREF
  HANDLE EventHandle; // [rsp+60h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-19h] BYREF
  STRING DestinationString; // [rsp+98h] [rbp+17h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+A8h] [rbp+27h] BYREF

  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  UnicodeString = 0LL;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  if ( !IsCurrentThreadInServerSilo )
  {
    ObInsertObjectEx(
      (PVOID)((unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors & 0xFFFFFFFFFFFFFFF0uLL),
      0LL,
      0,
      0LL,
      0LL);
    SeAnonymousLogonToken = (PVOID)SeMakeAnonymousLogonToken();
    SeAnonymousLogonTokenNoEveryone = (PVOID)SeMakeAnonymousLogonTokenNoEveryone();
  }
  RtlInitAnsiString(&DestinationString, "\\Security");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  Pool2 = (ACL *)ExAllocatePool2(0x40uLL);
  v2 = Pool2;
  if ( !Pool2 )
    return 0;
  RtlCreateAcl(Pool2, 0x100u, 2u);
  RtlpAddKnownAce((int)v2, 2, 0, 983055, SeLocalSystemSid, 0);
  RtlpAddKnownAce((int)v2, 2, 0, 131075, SeAliasAdminsSid, 0);
  RtlpAddKnownAce((int)v2, 2, 0, 2, SeWorldSid, 0);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  RtlFreeAnsiString(&UnicodeString);
  ExFreePoolWithTag(v2, 0);
  RtlInitAnsiString(&DestinationString, "LSA_AUTHENTICATION_INITIALIZED");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ZwCreateEvent(&EventHandle, 0x40000000u, &ObjectAttributes, NotificationEvent, 0);
  RtlFreeAnsiString(&UnicodeString);
  ZwClose(DirectoryHandle);
  ZwClose(EventHandle);
  if ( !IsCurrentThreadInServerSilo )
  {
    SepInitProcessAuditSd();
    SepInitializeCodeIntegrity();
    SepInitializeAuthorizationCallbacks();
    if ( (int)SepInitializeSingletonAttributesStructures() < 0 )
      return 0;
  }
  SddlBaseInitialize();
  return 1;
}
