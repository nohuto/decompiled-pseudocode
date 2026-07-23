/*
 * XREFs of NtSetUuidSeed @ 0x1407C1270
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetUuidSeed(PCHAR Seed)
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
  char *v15; // rax
  char *v16; // rsi
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-B4h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+64h] [rbp-A4h]
  __int16 v23; // [rsp+68h] [rbp-A0h]
  ULONG v24; // [rsp+6Ch] [rbp-9Ch]
  ACCESS_MASK GrantedAccess; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h]
  PVOID v27; // [rsp+80h] [rbp-88h]
  ULONG v28; // [rsp+88h] [rbp-80h]
  ULONG v29; // [rsp+8Ch] [rbp-7Ch]
  NTSTATUS v30; // [rsp+90h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+98h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-30h]
  _DWORD v34[6]; // [rsp+E0h] [rbp-28h]

  AccessStatus = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v34[0] = 80;
  v34[1] = 521322694;
  v34[2] = 906040134;
  v34[3] = -430256637;
  v34[4] = 1525148216;
  v34[5] = -843743134;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  GrantedAccess = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v33 = 0LL;
  v27 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v28 = RtlLengthRequiredSid(6u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v28, 0x64695555u);
  v3 = Pool2;
  P = Pool2;
  if ( !Pool2 )
    RtlRaiseStatus(-1073741670);
  v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
  AccessStatus = v4;
  if ( v4 < 0 )
    RtlRaiseStatus(v4);
  v5 = 0;
  v24 = 0;
  while ( v5 < 6 )
  {
    v6 = v34[v5];
    *RtlSubAuthoritySid(v3, v5++) = v6;
    v24 = v5;
  }
  v7 = RtlLengthSid(v3) + 20;
  v29 = v7;
  v8 = (ACL *)ExAllocatePool2(0x100uLL, v7, 0x64695555u);
  v9 = v8;
  v27 = v8;
  if ( !v8 )
    RtlRaiseStatus(-1073741670);
  Acl = RtlCreateAcl(v8, v7, 2u);
  AccessStatus = Acl;
  if ( Acl < 0 )
    RtlRaiseStatus(Acl);
  v11 = RtlpAddKnownAce((int)v9, 2, 0, 1, v3, 0);
  v30 = v11;
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
  v22 = *(_DWORD *)Seed;
  v23 = *((_WORD *)Seed + 2);
  AccessStatus = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
  if ( !AccessStatus )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (char *)KeAbPreAcquire((__int64)&ExpUuidLock, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v15, (__int64)&ExpUuidLock);
    if ( v16 )
      v16[10] = 1;
    *(int *)((char *)&dword_140FD8254 + 2) = v22;
    word_140FD825A = v23;
    HIBYTE(NlsMbOemCodePageTag) = (unsigned __int8)v22 >> 7 == 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return AccessStatus;
}
