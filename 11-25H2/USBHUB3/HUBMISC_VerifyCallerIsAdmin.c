/*
 * XREFs of HUBMISC_VerifyCallerIsAdmin @ 0x14008759C
 * Callers:
 *     HUBFDO_IoctlCyclePort @ 0x14007C9FC (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x14007F55C (HUBFDO_IoctlResetHub.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x14007F6E4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBMISC_VerifyCallerIsAdmin(int a1)
{
  int v2; // edx
  void *PrimaryToken; // rbx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( !PrimaryToken && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_(a1, v2, 3, 99, (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids);
  }
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin == 0 ? 0xC0000001 : 0;
}
