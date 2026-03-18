/*
 * XREFs of MiIsUserQueryVmCallerTrusted @ 0x1409D1878
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     Feature_Servicing_SePrivilegeCheck__private_IsEnabledDeviceUsageNoInline @ 0x1406754C8 (Feature_Servicing_SePrivilegeCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1408D9E10 (SeTokenIsAdmin.c)
 *     PsReferenceEffectiveToken @ 0x140969860 (PsReferenceEffectiveToken.c)
 *     SePrivilegeCheck @ 0x1409C2C50 (SePrivilegeCheck.c)
 */

_BOOL8 __fastcall MiIsUserQueryVmCallerTrusted(PETHREAD Thread)
{
  void *v2; // rdi
  struct _KPROCESS *Process; // rdx
  BOOLEAN v4; // bl
  BOOL v5; // esi
  bool v7; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+34h] [rbp-4Ch] BYREF
  int v9; // [rsp+38h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-40h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+60h] [rbp-20h] BYREF

  v8 = 0;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v2 = (void *)PsReferenceEffectiveToken((__int64)Thread, 0x74726853u, &v8, &v7, &v9, 0LL);
  if ( (unsigned int)Feature_Servicing_SePrivilegeCheck__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !SeTokenIsAdmin(v2) )
    {
      Process = Thread->ApcState.Process;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      RequiredPrivileges.Privilege[0].Luid = SeProfileSingleProcessPrivilege;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      SeCaptureSubjectContextEx(Thread, Process, &SubjectContext);
      v4 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, 1);
      SeReleaseSubjectContext(&SubjectContext);
      v5 = v4 != 0;
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v5 = 0;
  if ( SeTokenIsAdmin(v2) || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, 1) )
LABEL_6:
    v5 = 1;
LABEL_7:
  if ( v8 == 1 )
  {
    ObFastDereferenceObject((__int64 *)&Thread->Process[1].ActiveProcessors, (ULONG_PTR)v2, 1953654867LL);
  }
  else if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x74726853u);
  }
  return v5;
}
