/*
 * XREFs of AlpcpCheckConnectionSecurity @ 0x140A0F9D4
 * Callers:
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 */

__int64 __fastcall AlpcpCheckConnectionSecurity(__int64 a1, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  ULONG_PTR v8; // rbx
  unsigned int v9; // ebx
  void *v10; // rax
  _QWORD *v11; // rax
  ACCESS_MASK v12; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 *v15; // rdx
  unsigned int v16; // eax
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-59h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-55h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-51h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+60h] [rbp-49h] BYREF
  _BYTE Sid2[80]; // [rsp+80h] [rbp-29h] BYREF

  AccessStatus = 0;
  if ( a3 )
  {
    TokenInformation = 0LL;
    memset_0(Sid2, 0, 0x44uLL);
    v8 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
    AccessStatus = SeQueryInformationToken((PACCESS_TOKEN)v8, TokenIsAppContainer, &TokenInformation);
    if ( AccessStatus >= 0 )
    {
      if ( TokenInformation )
      {
        AccessStatus = -1073741152;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 48), 1u);
        v15 = **(unsigned __int8 ***)(v8 + 152);
        v16 = 4 * v15[1] + 8;
        if ( v16 <= 0x44 )
          memmove(Sid2, v15, v16);
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 48));
        KeLeaveCriticalRegion();
      }
    }
    ObFastDereferenceObject((__int64 *)(a1 + 584), v8, 0x746C6644u);
    v9 = AccessStatus;
    if ( AccessStatus < 0 )
      return v9;
    if ( !RtlEqualSid(a3, Sid2) )
    {
      v9 = -1073741152;
      AccessStatus = -1073741152;
    }
    if ( (v9 & 0x80000000) != 0 )
      return v9;
  }
  if ( !a4 )
    return 0LL;
  v10 = *(void **)(a1 + 464);
  GrantedAccess = 0;
  memset(&SubjectSecurityContext, 0, 24);
  SubjectSecurityContext.ProcessAuditId = v10;
  v11 = (_QWORD *)PsReferencePrimaryTokenWithTag(a1, 0x75536553u);
  SubjectSecurityContext.PrimaryToken = v11;
  if ( SeTokenLeakTracking )
  {
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11[143] + 284LL));
      if ( SubjectSecurityContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectSecurityContext.ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectSecurityContext.ClientToken + 143) + 284LL));
      if ( SubjectSecurityContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  SeAccessCheck(
    a4,
    &SubjectSecurityContext,
    0,
    0x2000000u,
    0,
    0LL,
    &AlpcPortObjectType->TypeInfo.GenericMapping,
    a2,
    &GrantedAccess,
    &AccessStatus);
  v12 = GrantedAccess;
  if ( (GrantedAccess & 0x80000000) != 0 )
    v12 = AlpcPortObjectType->TypeInfo.GenericMapping.GenericRead | GrantedAccess;
  if ( (v12 & 0x40000000) != 0 )
    v12 |= AlpcPortObjectType->TypeInfo.GenericMapping.GenericWrite;
  if ( (v12 & 0x20000000) != 0 )
    v12 |= AlpcPortObjectType->TypeInfo.GenericMapping.GenericExecute;
  if ( (v12 & 0x10000000) != 0 )
    v12 |= AlpcPortObjectType->TypeInfo.GenericMapping.GenericAll;
  GrantedAccess = v12 & 0xFFFFFFF;
  if ( (v12 & 1) == 0 )
    AccessStatus = -1073741152;
  SeReleaseSubjectContext(&SubjectSecurityContext);
  v9 = AccessStatus;
  if ( AccessStatus < 0 )
    return v9;
  else
    return 0LL;
}
