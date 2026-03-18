/*
 * XREFs of ExIsRestrictedCaller @ 0x140A14B1C
 * Callers:
 *     ExpProfileCreate @ 0x1407C3C30 (ExpProfileCreate.c)
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PspQueryWorkingSetWatch @ 0x140A147AC (PspQueryWorkingSetWatch.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline @ 0x140485DF8 (Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
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
