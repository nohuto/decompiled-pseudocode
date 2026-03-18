/*
 * XREFs of ExIsRestrictedCaller @ 0x140A0AFF8
 * Callers:
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
 *     ExProcessCounterSetCallback @ 0x1408DE7B0 (ExProcessCounterSetCallback.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     PspQueryWorkingSetWatch @ 0x140A0AC88 (PspQueryWorkingSetWatch.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline @ 0x1404F1E08 (Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExIsRestrictedCaller(KPROCESSOR_MODE a1, _DWORD *a2)
{
  unsigned int v2; // edi
  BOOLEAN v5; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a2 )
    *a2 = 0;
  if ( !a1 )
    return 0LL;
  if ( a2 && (unsigned int)Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline() )
    *a2 = SeSinglePrivilegeCheck(SeDebugPrivilege, a1) == 0;
  SeCaptureSubjectContext(&SubjectContext);
  v5 = SeAccessCheck(
         SeMediumDaclSd,
         &SubjectContext,
         0,
         0x20000u,
         0,
         0LL,
         (PGENERIC_MAPPING)&ExpRestrictedGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v5 )
    return 1LL;
  LOBYTE(v2) = AccessStatus < 0;
  return v2;
}
