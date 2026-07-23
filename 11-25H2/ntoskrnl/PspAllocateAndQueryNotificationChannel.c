/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x140969360
 * Callers:
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExConvertExclusiveToSharedLite @ 0x140280040 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14069CBC0 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x14069CD60 (ZwDeleteWnfStateName.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1408DDFF0 (PspUnlockJob.c)
 *     ObReleaseObjectSecurityEx @ 0x140914900 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1409160F0 (ObpGetObjectSecurity.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     PspDispatchWakeNotification @ 0x140969770 (PspDispatchWakeNotification.c)
 *     PspLockRootJobExclusive @ 0x1409697E4 (PspLockRootJobExclusive.c)
 *     PsReferenceEffectiveToken @ 0x140969860 (PsReferenceEffectiveToken.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned __int8 *v3; // r15
  bool v4; // zf
  ACL *v8; // r14
  __int64 v9; // rdi
  char v10; // r15
  __int64 v11; // rsi
  int i; // ecx
  NTSTATUS v13; // esi
  int ObjectSecurity; // eax
  __int64 v16; // rax
  void *v17; // r14
  ACL *Pool2; // rax
  int v19; // eax
  char v20; // [rsp+40h] [rbp-59h]
  char v21; // [rsp+41h] [rbp-58h] BYREF
  char v22[6]; // [rsp+42h] [rbp-57h] BYREF
  __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  int v24; // [rsp+50h] [rbp-49h] BYREF
  __int64 v25; // [rsp+58h] [rbp-41h] BYREF
  __int16 *v26; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  ULONG AclLength; // [rsp+70h] [rbp-29h]
  char v29[4]; // [rsp+74h] [rbp-25h] BYREF
  __int64 *v30; // [rsp+78h] [rbp-21h]
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-19h] BYREF
  ACL *v32; // [rsp+A0h] [rbp+7h]
  _WNF_STATE_NAME StateName; // [rsp+A8h] [rbp+Fh] BYREF

  v3 = 0LL;
  v4 = (*(_DWORD *)(a2 + 1552) & 0x800) == 0;
  v22[0] = 0;
  v25 = 0LL;
  v23 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v32 = 0LL;
  v8 = 0LL;
  v24 = 0;
  v9 = 0LL;
  v21 = 0;
  v20 = 0;
  v26 = 0LL;
  P = 0LL;
  v30 = 0LL;
  StateName = 0LL;
  if ( !v4 )
  {
    v10 = 1;
    PspLockRootJobExclusive(a2, a1, &v23);
    v11 = v23;
    if ( a2 != v23 )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(v23 + 56));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
LABEL_4:
    *a3 = *(_OWORD *)(a2 + 1112);
    a3[1] = *(_OWORD *)(a2 + 1128);
    a3[2] = *(_OWORD *)(a2 + 1144);
    a3[3] = *(_OWORD *)(a2 + 1160);
    if ( v10 )
    {
      for ( i = 0; !i; i = 1 )
      {
        if ( a2 == v23 )
          goto LABEL_10;
      }
      ExReleaseResourceLite((PERESOURCE)(a2 + 56));
    }
LABEL_10:
    PspUnlockJob(v11, a1);
    if ( v20 )
    {
      ZwDeleteWnfStateName(&StateName);
    }
    else if ( !v10 )
    {
      PspDispatchWakeNotification((PVOID)a2);
    }
    v13 = 0;
    if ( v8 )
      goto LABEL_14;
    goto LABEL_15;
  }
  ObjectSecurity = ObpGetObjectSecurity((ULONG_PTR *)a2, (PVOID *)&v26, &v21, 0);
  v9 = (__int64)v26;
  v13 = ObjectSecurity;
  if ( ObjectSecurity < 0 )
    goto LABEL_15;
  if ( !v26 )
  {
    v13 = -1073741790;
    goto LABEL_15;
  }
  if ( *(_BYTE *)v26 != 1 )
  {
    v13 = -1073741736;
    goto LABEL_15;
  }
  if ( v26[1] >= 0 )
  {
    v3 = (unsigned __int8 *)*((_QWORD *)v26 + 1);
  }
  else
  {
    v16 = *((unsigned int *)v26 + 1);
    if ( (_DWORD)v16 )
      v3 = (unsigned __int8 *)v26 + v16;
  }
  v17 = (void *)PsReferenceEffectiveToken(a1, 1953654867LL, &v24, v22, v29, 0LL);
  v13 = SeQueryInformationToken(v17, TokenUser, &P);
  if ( v24 == 1 )
  {
    ObFastDereferenceObject((__int64 *)(*(_QWORD *)(a1 + 184) + 584LL), (ULONG_PTR)v17, 1953654867LL);
  }
  else if ( v17 )
  {
    ObfDereferenceObjectWithTag(v17, 0x74726853u);
  }
  if ( v13 >= 0 )
  {
    AclLength = 4 * (v3[1] + *(unsigned __int8 *)(*(_QWORD *)P + 1LL)) + 48;
    Pool2 = (ACL *)ExAllocatePool2(0x40uLL);
    v8 = Pool2;
    if ( Pool2 )
    {
      RtlCreateAcl(Pool2, AclLength, 2u);
      RtlpAddKnownAce(v8, 2u, 0, 0x80000000, v3, 0);
      v10 = 0;
      RtlpAddKnownAce(v8, 2u, 0, 0x80000000, *(unsigned __int8 **)P, 0);
      LOBYTE(SecurityDescriptor[0]) = 1;
      if ( (SWORD1(SecurityDescriptor[0]) & 0x8000u) == 0 )
      {
        v32 = v8;
        WORD1(SecurityDescriptor[0]) = WORD1(SecurityDescriptor[0]) & 0xFFF3 | 4;
      }
      v13 = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, SecurityDescriptor);
      if ( v13 < 0 )
      {
LABEL_14:
        ExFreePoolWithTag(v8, 0x66577350u);
        goto LABEL_15;
      }
      PspLockRootJobExclusive(a2, a1, &v23);
      if ( (*(_DWORD *)(a2 + 1552) & 0x800) != 0 )
      {
        v20 = 1;
      }
      else
      {
        *(_WNF_STATE_NAME *)(a2 + 1112) = StateName;
        v30 = &v25;
        v25 = *(_QWORD *)(a2 + 1184);
        v19 = *(_DWORD *)(a2 + 1192);
        HIDWORD(v25) &= v19;
        *(_DWORD *)(a2 + 1192) = v19 & ~HIDWORD(v25);
        PspEnumJobsAndProcessesInJobHierarchy(
          (char *)a2,
          0,
          (int)PspEnableWakeCounters,
          (int)PspEnableProcessWakeCounters,
          0LL,
          2);
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 1552), 0xBu);
        _InterlockedIncrement64(&PspJobTimeLimitsRequest);
        v9 = (__int64)v26;
      }
      v11 = v23;
      goto LABEL_4;
    }
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ObReleaseObjectSecurityEx(v9, v21, a2);
  return (unsigned int)v13;
}
