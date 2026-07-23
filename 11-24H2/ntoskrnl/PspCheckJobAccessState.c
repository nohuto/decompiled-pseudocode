/*
 * XREFs of PspCheckJobAccessState @ 0x140777834
 * Callers:
 *     PspSetAffinityLimitCallback @ 0x140777F00 (PspSetAffinityLimitCallback.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x1408D8210 (PspValidateJobAssignmentProcessLimits.c)
 *     PspValidateJobAffinityState @ 0x140A673AC (PspValidateJobAffinityState.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x14086C2C0 (ObReleaseObjectSecurityEx.c)
 */

__int64 __fastcall PspCheckJobAccessState(__int64 a1, ULONG_PTR a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+38h] BYREF

  v2 = *(_DWORD *)(a2 + 496);
  v3 = 0;
  GrantedAccess = 0;
  AccessStatus = 0;
  if ( (v2 & 1) != 0 )
    return v3;
  if ( (*(_DWORD *)a1 & 1) != 0 )
    return 0LL;
  result = ObpGetObjectSecurity(a2);
  AccessStatus = result;
  if ( (int)result >= 0 )
  {
    SeAccessCheck(
      0LL,
      (PSECURITY_SUBJECT_CONTEXT)(a1 + 8),
      0,
      0x200u,
      0,
      0LL,
      (PGENERIC_MAPPING)((char *)PsProcessType + 76),
      1,
      &GrantedAccess,
      &AccessStatus);
    LOBYTE(v7) = 0;
    ObReleaseObjectSecurityEx(0LL, v7, a2);
    return (unsigned int)AccessStatus;
  }
  return result;
}
