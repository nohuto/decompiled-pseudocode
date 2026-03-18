/*
 * XREFs of PnpGetCallerSessionId @ 0x140717228
 * Callers:
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SeQuerySessionIdToken @ 0x1409FF180 (SeQuerySessionIdToken.c)
 */

__int64 __fastcall PnpGetCallerSessionId(PULONG SessionId)
{
  PACCESS_TOKEN PrimaryToken; // rcx
  unsigned int SessionIdToken; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  SessionIdToken = SeQuerySessionIdToken(PrimaryToken, SessionId);
  SeReleaseSubjectContext(&SubjectContext);
  return SessionIdToken;
}
