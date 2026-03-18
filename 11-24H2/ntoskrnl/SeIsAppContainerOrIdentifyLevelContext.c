/*
 * XREFs of SeIsAppContainerOrIdentifyLevelContext @ 0x140A14EAC
 * Callers:
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x140A14DA0 (PopPowerRequestActionInfo.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall SeIsAppContainerOrIdentifyLevelContext(PSECURITY_SUBJECT_CONTEXT SubjectContext, _BYTE *a2)
{
  char v2; // si
  struct _SECURITY_SUBJECT_CONTEXT *v4; // rdi
  unsigned int v5; // ebx
  struct _SECURITY_SUBJECT_CONTEXT v7; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  v2 = 0;
  *a2 = 1;
  v4 = SubjectContext;
  memset(&v7, 0, sizeof(v7));
  if ( !SubjectContext )
  {
    SeCaptureSubjectContext(&v7);
    v4 = &v7;
    v2 = 1;
  }
  if ( SeAccessCheck(
         SeNullDaclSd,
         v4,
         0,
         1u,
         0,
         0LL,
         (PGENERIC_MAPPING)&SystemContextGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus) )
  {
    *a2 = 0;
  }
  v5 = 0;
  if ( AccessStatus != -1073741790 )
    v5 = AccessStatus;
  if ( v2 )
    SeReleaseSubjectContext(v4);
  return v5;
}
