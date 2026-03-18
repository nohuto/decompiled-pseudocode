/*
 * XREFs of NtSetUuidSeed @ 0x1407C0E20
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x140456300 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x140867110 (RtlLengthRequiredSid.c)
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x1409E3B60 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetUuidSeed(__int64 a1)
{
  void *Pool2; // rax
  void *v3; // r15
  int v4; // eax
  ULONG v5; // esi
  ULONG v6; // ebx
  ULONG v7; // esi
  ACL *v8; // rax
  ACL *v9; // rbx
  int Acl; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-B4h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+64h] [rbp-A4h]
  __int16 v26; // [rsp+68h] [rbp-A0h]
  ULONG v27; // [rsp+6Ch] [rbp-9Ch]
  ACCESS_MASK GrantedAccess; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h]
  PVOID v30; // [rsp+80h] [rbp-88h]
  ULONG v31; // [rsp+88h] [rbp-80h]
  ULONG v32; // [rsp+8Ch] [rbp-7Ch]
  NTSTATUS v33; // [rsp+90h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+98h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-30h]
  _DWORD v37[6]; // [rsp+E0h] [rbp-28h]

  AccessStatus = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v37[0] = 80;
  v37[1] = 521322694;
  v37[2] = 906040134;
  v37[3] = -430256637;
  v37[4] = 1525148216;
  v37[5] = -843743134;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  GrantedAccess = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v36 = 0LL;
  v30 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v31 = RtlLengthRequiredSid(6u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v3 = Pool2;
  P = Pool2;
  if ( !Pool2 )
    RtlRaiseStatus(-1073741670);
  v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
  AccessStatus = v4;
  if ( v4 < 0 )
    RtlRaiseStatus(v4);
  v5 = 0;
  v27 = 0;
  while ( v5 < 6 )
  {
    v6 = v37[v5];
    *RtlSubAuthoritySid(v3, v5++) = v6;
    v27 = v5;
  }
  v7 = RtlLengthSid(v3) + 20;
  v32 = v7;
  v8 = (ACL *)ExAllocatePool2(0x100uLL);
  v9 = v8;
  v30 = v8;
  if ( !v8 )
    RtlRaiseStatus(-1073741670);
  Acl = RtlCreateAcl(v8, v7, 2u);
  AccessStatus = Acl;
  if ( Acl < 0 )
    RtlRaiseStatus(Acl);
  v11 = RtlpAddKnownAce((int)v9, 2, 0, 1, v3, 0);
  v33 = v11;
  AccessStatus = v11;
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
  v12 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  AccessStatus = v12;
  if ( v12 < 0 )
    RtlRaiseStatus(v12);
  v13 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
  AccessStatus = v13;
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
  if ( !SeAccessCheck(
          SecurityDescriptor,
          &SubjectSecurityContext,
          0,
          1u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpUuidSeedGenericMapping,
          1,
          &GrantedAccess,
          &AccessStatus) )
    RtlRaiseStatus(-1073741790);
  v25 = *(_DWORD *)a1;
  v26 = *(_WORD *)(a1 + 4);
  AccessStatus = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  if ( !AccessStatus )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = KeAbPreAcquire((__int64)&ExpUuidLock, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, (__int64)v15, (__int64)&ExpUuidLock);
    if ( v16 )
      *((_BYTE *)v16 + 10) = 1;
    *(int *)((char *)&dword_140FD7254 + 2) = v25;
    word_140FD725A = v26;
    HIBYTE(NlsMbOemCodePageTag) = (unsigned __int8)v25 >> 7 == 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v18, v19, v20);
  }
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return (unsigned int)AccessStatus;
}
