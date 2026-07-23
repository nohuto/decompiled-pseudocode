/*
 * XREFs of ExpCheckWakeTimerAccess @ 0x140A92B48
 * Callers:
 *     ExpSetTimerObject @ 0x1402BD850 (ExpSetTimerObject.c)
 *     ExpCheckIRTimerAccess @ 0x140A16AEC (ExpCheckIRTimerAccess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpCheckWakeTimerAccess(char a1)
{
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *Flink; // rax
  _QWORD *v3; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v6; // [rsp+90h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+98h] [rbp+18h] BYREF

  v7 = 0;
  v6 = 0;
  *(_OWORD *)&SubjectContext.ImpersonationLevel = 0LL;
  if ( !a1 )
    return 3221225506LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = Process[1].Header.WaitListHead.Flink;
  SubjectContext.ClientToken = 0LL;
  SubjectContext.ProcessAuditId = Flink;
  v3 = (_QWORD *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x75536553u);
  SubjectContext.PrimaryToken = v3;
  if ( SeTokenLeakTracking && v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3[143] + 284LL));
    if ( SubjectContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
      __debugbreak();
  }
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
    &v7,
    (int *)&v6);
  SeReleaseSubjectContext(&SubjectContext);
  return v6;
}
