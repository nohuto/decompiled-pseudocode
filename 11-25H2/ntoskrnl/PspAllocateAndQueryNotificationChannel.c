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
  unsigned __int8 *Src; // r15
  bool v4; // zf
  ACL *v8; // r14
  __int64 v9; // rdi
  char v10; // r15
  __int64 v11; // rsi
  int i; // ecx
  __int64 v13; // rdx
  int WnfStateName; // esi
  int ObjectSecurity; // eax
  __int64 v17; // rax
  void *v18; // r14
  ACL *Pool2; // rax
  int v20; // eax
  char v21; // [rsp+40h] [rbp-59h]
  char v22; // [rsp+41h] [rbp-58h] BYREF
  char v23[6]; // [rsp+42h] [rbp-57h] BYREF
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  int v25; // [rsp+50h] [rbp-49h] BYREF
  __int64 v26; // [rsp+58h] [rbp-41h] BYREF
  __int16 *v27; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  ULONG AclLength; // [rsp+70h] [rbp-29h]
  char v30[4]; // [rsp+74h] [rbp-25h] BYREF
  __int64 *v31; // [rsp+78h] [rbp-21h]
  __int128 v32; // [rsp+80h] [rbp-19h]
  __int128 v33; // [rsp+90h] [rbp-9h]
  ACL *v34; // [rsp+A0h] [rbp+7h]
  __int64 v35; // [rsp+A8h] [rbp+Fh] BYREF

  Src = 0LL;
  v4 = (*(_DWORD *)(a2 + 1552) & 0x800) == 0;
  v23[0] = 0;
  v26 = 0LL;
  v24 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v8 = 0LL;
  v33 = 0LL;
  v25 = 0;
  v9 = 0LL;
  v22 = 0;
  v21 = 0;
  v27 = 0LL;
  P = 0LL;
  v31 = 0LL;
  v35 = 0LL;
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
      ZwDeleteWnfStateName((__int64)&v35, v13);
    }
    else if ( !v10 )
    {
      PspDispatchWakeNotification((PVOID)a2);
    }
    WnfStateName = 0;
    if ( v8 )
      goto LABEL_14;
    goto LABEL_15;
  }
  ObjectSecurity = ObpGetObjectSecurity((ULONG_PTR *)a2, (PVOID *)&v27, &v22, 0);
  v9 = (__int64)v27;
  WnfStateName = ObjectSecurity;
  if ( ObjectSecurity < 0 )
    goto LABEL_15;
  if ( !v27 )
  {
    WnfStateName = -1073741790;
    goto LABEL_15;
  }
  if ( *(_BYTE *)v27 != 1 )
  {
    WnfStateName = -1073741736;
    goto LABEL_15;
  }
  if ( v27[1] >= 0 )
  {
    Src = (unsigned __int8 *)*((_QWORD *)v27 + 1);
  }
  else
  {
    v17 = *((unsigned int *)v27 + 1);
    if ( (_DWORD)v17 )
      Src = (unsigned __int8 *)v27 + v17;
  }
  v18 = (void *)PsReferenceEffectiveToken(a1, 1953654867LL, &v25, v23, v30, 0LL);
  WnfStateName = SeQueryInformationToken(v18, TokenUser, &P);
  if ( v25 == 1 )
  {
    ObFastDereferenceObject((__int64 *)(*(_QWORD *)(a1 + 184) + 584LL), (ULONG_PTR)v18, 1953654867LL);
  }
  else if ( v18 )
  {
    ObfDereferenceObjectWithTag(v18, 0x74726853u);
  }
  if ( WnfStateName >= 0 )
  {
    AclLength = 4 * (Src[1] + *(unsigned __int8 *)(*(_QWORD *)P + 1LL)) + 48;
    Pool2 = (ACL *)ExAllocatePool2(0x40uLL);
    v8 = Pool2;
    if ( Pool2 )
    {
      RtlCreateAcl(Pool2, AclLength, 2u);
      RtlpAddKnownAce((__int64)v8, 2u, 0, 0x80000000, Src, 0);
      v10 = 0;
      RtlpAddKnownAce((__int64)v8, 2u, 0, 0x80000000, *(unsigned __int8 **)P, 0);
      LOBYTE(v32) = 1;
      if ( (SWORD1(v32) & 0x8000u) == 0 )
      {
        v34 = v8;
        WORD1(v32) = WORD1(v32) & 0xFFF3 | 4;
      }
      WnfStateName = ZwCreateWnfStateName((__int64)&v35, 3LL);
      if ( WnfStateName < 0 )
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
        *(_QWORD *)(a2 + 1112) = v35;
        v31 = &v26;
        v26 = *(_QWORD *)(a2 + 1184);
        v20 = *(_DWORD *)(a2 + 1192);
        HIDWORD(v26) &= v20;
        *(_DWORD *)(a2 + 1192) = v20 & ~HIDWORD(v26);
        PspEnumJobsAndProcessesInJobHierarchy(
          (char *)a2,
          0,
          (int)PspEnableWakeCounters,
          (int)PspEnableProcessWakeCounters,
          0LL,
          2);
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 1552), 0xBu);
        _InterlockedIncrement64(&PspJobTimeLimitsRequest);
        v9 = (__int64)v27;
      }
      v11 = v24;
      goto LABEL_4;
    }
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ObReleaseObjectSecurityEx(v9, v22, a2);
  return (unsigned int)WnfStateName;
}
