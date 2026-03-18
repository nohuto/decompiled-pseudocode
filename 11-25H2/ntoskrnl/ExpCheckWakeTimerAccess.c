/*
 * XREFs of ExpCheckWakeTimerAccess @ 0x140A95FE8
 * Callers:
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     ExpCheckIRTimerAccess @ 0x140A1671C (ExpCheckIRTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpCheckWakeTimerAccess(char a1)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0;
  v3 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 )
    return 3221225506LL;
  SeCaptureSubjectContextEx(0LL, KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)ExpWakeTimerSecurityDescriptor,
    7,
    (int *)&SubjectContext,
    0,
    1u,
    0,
    0LL,
    &ExTimerObjectType->TypeInfo.GenericMapping.GenericRead,
    1,
    &v4,
    (int *)&v3);
  SeReleaseSubjectContext(&SubjectContext);
  return v3;
}
