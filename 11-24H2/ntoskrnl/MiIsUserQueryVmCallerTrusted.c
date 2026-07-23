/*
 * XREFs of MiIsUserQueryVmCallerTrusted @ 0x14096FD94
 * Callers:
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     SeTokenIsAdmin @ 0x14085AA10 (SeTokenIsAdmin.c)
 *     SePrivilegeCheck @ 0x14099A020 (SePrivilegeCheck.c)
 */

_BOOL8 __fastcall MiIsUserQueryVmCallerTrusted(PETHREAD Thread)
{
  void *v2; // rdi
  BOOL v3; // esi
  struct _KPROCESS *Process; // rdx
  BOOLEAN v5; // bl
  bool v7; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+34h] [rbp-4Ch] BYREF
  int v9; // [rsp+38h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-40h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+60h] [rbp-20h] BYREF

  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v2 = (void *)PsReferenceEffectiveToken((__int64)Thread, 0x74726853u, &v8, &v7, &v9, 0LL);
  if ( SeTokenIsAdmin(v2) )
  {
    v3 = 1;
  }
  else
  {
    Process = Thread->ApcState.Process;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    RequiredPrivileges.Privilege[0].Luid = SeProfileSingleProcessPrivilege;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    SeCaptureSubjectContextEx(Thread, Process, &SubjectContext);
    v5 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, 1);
    SeReleaseSubjectContext(&SubjectContext);
    v3 = v5 != 0;
  }
  if ( v8 == 1 )
  {
    ObFastDereferenceObject((__int64 *)&Thread->Process[1].ActiveProcessors, (ULONG_PTR)v2, 0x74726853u);
  }
  else if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x74726853u);
  }
  return v3;
}
