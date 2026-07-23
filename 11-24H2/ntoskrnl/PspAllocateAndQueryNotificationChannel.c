/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x140858A1C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExConvertExclusiveToSharedLite @ 0x1402F1430 (ExConvertExclusiveToSharedLite.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1406A8E30 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x1406A8FD0 (ZwDeleteWnfStateName.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     PspDispatchWakeNotification @ 0x140858E28 (PspDispatchWakeNotification.c)
 *     PspLockRootJobExclusive @ 0x140858E9C (PspLockRootJobExclusive.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     ObReleaseObjectSecurityEx @ 0x14086C2C0 (ObReleaseObjectSecurityEx.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned __int8 *v3; // r15
  bool v4; // zf
  ACL *v8; // r14
  _QWORD *v9; // rdi
  char v10; // r15
  __int64 v11; // rsi
  int i; // ecx
  __int64 v13; // rdx
  NTSTATUS v14; // esi
  int ObjectSecurity; // eax
  __int64 v17; // rax
  void *v18; // r14
  ACL *Pool2; // rax
  int v20; // eax
  char v21; // [rsp+40h] [rbp-59h]
  char v22; // [rsp+41h] [rbp-58h] BYREF
  _BYTE v23[6]; // [rsp+42h] [rbp-57h] BYREF
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  int v25; // [rsp+50h] [rbp-49h] BYREF
  __int64 v26; // [rsp+58h] [rbp-41h] BYREF
  _QWORD *v27; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  ULONG AclLength; // [rsp+70h] [rbp-29h]
  _BYTE v30[4]; // [rsp+74h] [rbp-25h] BYREF
  __int64 *v31; // [rsp+78h] [rbp-21h]
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-19h] BYREF
  ACL *v33; // [rsp+A0h] [rbp+7h]
  _WNF_STATE_NAME StateName; // [rsp+A8h] [rbp+Fh] BYREF

  v3 = 0LL;
  v4 = (*(_DWORD *)(a2 + 1552) & 0x800) == 0;
  v26 = 0LL;
  v24 = 0LL;
  v33 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v25 = 0;
  v8 = 0LL;
  v22 = 0;
  v9 = 0LL;
  v21 = 0;
  v27 = 0LL;
  P = 0LL;
  v31 = 0LL;
  StateName = 0LL;
  if ( !v4 )
  {
    v10 = 1;
    PspLockRootJobExclusive(a2, a1, &v24);
    v11 = v24;
    if ( a2 != v24 )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(v24 + 56));
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
        if ( a2 == v24 )
          goto LABEL_10;
      }
      ExReleaseResourceLite((PERESOURCE)(a2 + 56));
    }
LABEL_10:
    PspUnlockJob(v11, a1);
    if ( v21 )
    {
      ZwDeleteWnfStateName(&StateName);
    }
    else if ( !v10 )
    {
      PspDispatchWakeNotification((PVOID)a2);
    }
    v14 = 0;
    if ( v8 )
      goto LABEL_14;
    goto LABEL_15;
  }
  ObjectSecurity = ObpGetObjectSecurity((ULONG_PTR *)a2, (void **)&v27, &v22, 0);
  v9 = v27;
  v14 = ObjectSecurity;
  if ( ObjectSecurity < 0 )
    goto LABEL_15;
  if ( !v27 )
  {
    v14 = -1073741790;
    goto LABEL_15;
  }
  if ( *(_BYTE *)v27 != 1 )
  {
    v14 = -1073741736;
    goto LABEL_15;
  }
  if ( *((__int16 *)v27 + 1) >= 0 )
  {
    v3 = (unsigned __int8 *)v27[1];
  }
  else
  {
    v17 = *((unsigned int *)v27 + 1);
    if ( (_DWORD)v17 )
      v3 = (unsigned __int8 *)v27 + v17;
  }
  v18 = (void *)PsReferenceEffectiveToken(a1, 1953654867LL, &v25, v23, v30, 0LL);
  v14 = SeQueryInformationToken(v18, TokenUser, &P);
  if ( v25 == 1 )
  {
    ObFastDereferenceObject((__int64 *)(*(_QWORD *)(a1 + 184) + 584LL), (ULONG_PTR)v18, 0x74726853u);
  }
  else if ( v18 )
  {
    ObfDereferenceObjectWithTag(v18, 0x74726853u);
  }
  if ( v14 >= 0 )
  {
    AclLength = 4 * (v3[1] + *(unsigned __int8 *)(*(_QWORD *)P + 1LL)) + 48;
    Pool2 = (ACL *)ExAllocatePool2(0x40uLL, AclLength, 0x66577350u);
    v8 = Pool2;
    if ( Pool2 )
    {
      RtlCreateAcl(Pool2, AclLength, 2u);
      RtlpAddKnownAce((int)v8, 2, 0, 0x80000000, v3, 0);
      v10 = 0;
      RtlpAddKnownAce((int)v8, 2, 0, 0x80000000, *(void **)P, 0);
      LOBYTE(SecurityDescriptor[0]) = 1;
      if ( (SWORD1(SecurityDescriptor[0]) & 0x8000u) == 0 )
      {
        v33 = v8;
        WORD1(SecurityDescriptor[0]) = WORD1(SecurityDescriptor[0]) & 0xFFF3 | 4;
      }
      v14 = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, SecurityDescriptor);
      if ( v14 < 0 )
      {
LABEL_14:
        ExFreePoolWithTag(v8, 0x66577350u);
        goto LABEL_15;
      }
      PspLockRootJobExclusive(a2, a1, &v24);
      if ( (*(_DWORD *)(a2 + 1552) & 0x800) != 0 )
      {
        v21 = 1;
      }
      else
      {
        *(_WNF_STATE_NAME *)(a2 + 1112) = StateName;
        v31 = &v26;
        v26 = *(_QWORD *)(a2 + 1184);
        v20 = *(_DWORD *)(a2 + 1192);
        HIDWORD(v26) &= v20;
        *(_DWORD *)(a2 + 1192) = v20 & ~HIDWORD(v26);
        PspEnumJobsAndProcessesInJobHierarchy((PVOID)a2, 0LL, 2);
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 1552), 0xBu);
        _InterlockedIncrement64(&PspJobTimeLimitsRequest);
        v9 = v27;
      }
      v11 = v24;
      goto LABEL_4;
    }
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    LOBYTE(v13) = v22;
    ObReleaseObjectSecurityEx(v9, v13, a2);
  }
  return (unsigned int)v14;
}
