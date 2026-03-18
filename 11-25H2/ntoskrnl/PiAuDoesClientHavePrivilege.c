/*
 * XREFs of PiAuDoesClientHavePrivilege @ 0x14095EC5C
 * Callers:
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 *     PiCMSetDeviceProblem @ 0x140ABD29C (PiCMSetDeviceProblem.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140400B10 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 */

char __fastcall PiAuDoesClientHavePrivilege(unsigned int a1)
{
  char v1; // bl
  char PreviousMode; // di
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-48h] BYREF
  int v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+5Ch] [rbp-24h]
  __int64 v8; // [rsp+60h] [rbp-20h] BYREF
  int v9; // [rsp+68h] [rbp-18h]

  v1 = 1;
  v9 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = 1;
  v7 = 1;
  SeCaptureSubjectContext(&SubjectContext);
  if ( PreviousMode )
  {
    ClientToken = SubjectContext.ClientToken;
    if ( SubjectContext.ClientToken )
    {
      if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
      {
        v1 = 0;
        goto LABEL_7;
      }
    }
    else
    {
      ClientToken = SubjectContext.PrimaryToken;
    }
    v1 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v8, 1u, 1, PreviousMode);
  }
LABEL_7:
  SeReleaseSubjectContext(&SubjectContext);
  return v1;
}
