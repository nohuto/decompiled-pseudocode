/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x140824EB8
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1407A3C94 (EtwpSetCoverageSamplerInformation.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x140824848 (EtwpQueryCoverageSamplerInformation.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     NtSetDefaultLocale @ 0x140A92630 (NtSetDefaultLocale.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     RtlRunOnceExecuteOnce @ 0x140825180 (RtlRunOnceExecuteOnce.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 */

NTSTATUS __fastcall ExCheckFullProcessInformationAccess(char a1)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  NTSTATUS v4; // [rsp+90h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+98h] [rbp+18h] BYREF
  PVOID Context; // [rsp+A0h] [rbp+20h] BYREF

  v5 = 0;
  Context = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a1 != 1 )
    return -1073741790;
  result = RtlRunOnceExecuteOnce(
             &ExpFullProcessInfoInit,
             (PRTL_RUN_ONCE_INIT_FN)ExpInitFullProcessSecurityInfo,
             0LL,
             &Context);
  v4 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    SeAccessCheckWithHint(
      (__int64)Context,
      7,
      (int *)&SubjectContext,
      0,
      1u,
      0,
      0LL,
      &ExpRestrictedGenericMapping,
      1,
      &v5,
      &v4);
    SeReleaseSubjectContext(&SubjectContext);
    return v4;
  }
  return result;
}
