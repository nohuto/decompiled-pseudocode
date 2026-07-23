/*
 * XREFs of PopBootStatAccessCheck @ 0x140AA31F4
 * Callers:
 *     PopBootStatGet @ 0x140A348F8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A34CDC (PopBootStatSet.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6BD8 (PopBootStatRestoreDefaults.c)
 *     PopBootStatCheckIntegrity @ 0x140AB00C0 (PopBootStatCheckIntegrity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x14086C2C0 (ObReleaseObjectSecurityEx.c)
 */

__int64 __fastcall PopBootStatAccessCheck(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3)
{
  PSECURITY_DESCRIPTOR v5; // rsi
  BOOLEAN v6; // bl
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-1h]
  NTSTATUS AccessStatus; // [rsp+58h] [rbp+17h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp+1Bh] BYREF
  PVOID Object; // [rsp+60h] [rbp+1Fh] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp+27h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+2Fh] BYREF
  char v14; // [rsp+C0h] [rbp+7Fh] BYREF

  GrantedAccess = 0;
  SecurityDescriptor = 0LL;
  Object = 0LL;
  v14 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  AccessStatus = ObReferenceObjectByHandle(a1, 0, 0LL, 0, &Object, 0LL);
  if ( AccessStatus >= 0 )
  {
    AccessStatus = ObpGetObjectSecurity((ULONG_PTR *)Object, &SecurityDescriptor, &v14, 0);
    if ( AccessStatus >= 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      AccessMode = a2;
      v5 = SecurityDescriptor;
      v6 = SeAccessCheck(
             SecurityDescriptor,
             &SubjectContext,
             0,
             a3,
             0,
             0LL,
             (PGENERIC_MAPPING)&IopFileMapping,
             AccessMode,
             &GrantedAccess,
             &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v6 )
        AccessStatus = 0;
      if ( v5 )
        ObReleaseObjectSecurityEx((unsigned __int64)v5, v14, (__int64)Object);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return (unsigned int)AccessStatus;
}
