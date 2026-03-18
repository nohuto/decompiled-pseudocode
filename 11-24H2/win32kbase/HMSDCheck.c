/*
 * XREFs of HMSDCheck @ 0x1400E10F0
 * Callers:
 *     HMValidateHandleWithDescriptor @ 0x140099270 (HMValidateHandleWithDescriptor.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     _HMPkheFromObjectWorker @ 0x1400E1208 (_HMPkheFromObjectWorker.c)
 */

_BOOL8 __fastcall HMSDCheck(__int64 a1, unsigned __int8 a2, ACCESS_MASK a3)
{
  unsigned int v3; // esi
  BOOL v6; // edi
  __int64 UserSessionState; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  DWORD GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-40h] BYREF
  int AccessStatus; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = 0;
  UserSessionState = W32GetUserSessionState(a1);
  SeCaptureSubjectContext(&SubjectContext);
  v8 = HMValidateHandleNoSecure(a1, v3);
  if ( v8 )
  {
    GrantedAccess = 0;
    AccessStatus = 0;
    v9 = HMPkheFromObjectWorker(v8);
    v6 = SeAccessCheck(
           *(PSECURITY_DESCRIPTOR *)(v9 + 24),
           &SubjectContext,
           0,
           a3,
           0,
           0LL,
           (PGENERIC_MAPPING)(UserSessionState + 16LL * v3 + 42632),
           1,
           &GrantedAccess,
           &AccessStatus) != 0;
  }
  SeReleaseSubjectContext(&SubjectContext);
  return v6;
}
