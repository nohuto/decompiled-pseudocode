/*
 * XREFs of ExCpuSetResourceManagerAccessCheck @ 0x1404AA1D4
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     NtAcquireProcessActivityReference @ 0x140A77130 (NtAcquireProcessActivityReference.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x14083FC40 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall ExCpuSetResourceManagerAccessCheck(KPROCESSOR_MODE a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+98h] [rbp+10h] BYREF

  v6 = 0;
  v5 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a1) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)ExpCpuSetSecurityDescriptor,
    7u,
    (int *)&SubjectContext,
    0,
    1u,
    0,
    0LL,
    &ExpRestrictedGenericMapping,
    a1,
    &v6,
    (int *)&v5);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}
