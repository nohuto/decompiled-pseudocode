/*
 * XREFs of PiUEventApplyAdditionalFilters @ 0x1408CFF70
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFCE0 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140A32040 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A45D84 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A4CCA0 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5C0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x1409E0750 (SeQuerySessionIdTokenEx.c)
 */

__int64 __fastcall PiUEventApplyAdditionalFilters(__int64 a1, __int64 a2)
{
  int v2; // eax
  BOOLEAN v3; // bl
  __int64 v6; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *v7; // rsi
  _QWORD *v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // r15d
  _QWORD *SessionById; // rax
  __int64 v12; // rbx
  BOOLEAN v13; // cl
  int v14; // eax
  void *v16; // r15
  PACCESS_TOKEN ClientToken; // rcx
  KPROCESSOR_MODE AccessMode; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rdx
  BOOLEAN IsServiceSession[4]; // [rsp+58h] [rbp-29h] BYREF
  NTSTATUS AccessStatus; // [rsp+5Ch] [rbp-25h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-19h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+88h] [rbp+7h] BYREF

  v2 = *(_DWORD *)(a1 + 96);
  v3 = 1;
  IsServiceSession[0] = 1;
  if ( v2 != 4 )
  {
    switch ( v2 )
    {
      case 1:
      case 3:
      case 9:
      case 10:
      case 11:
        v7 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
        v14 = PiPnpRtlApplyMandatoryFilters(
                *(__int64 *)&PiPnpRtlCtx,
                (const WCHAR *)(a1 + 128),
                1,
                0LL,
                (PSECURITY_SUBJECT_CONTEXT)(a2 + 56),
                IsServiceSession);
        v3 = IsServiceSession[0];
        goto LABEL_13;
      case 2:
        v7 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
        v14 = PiPnpRtlApplyMandatoryFilters(
                *(__int64 *)&PiPnpRtlCtx,
                (const WCHAR *)(a1 + 144),
                3,
                0LL,
                (PSECURITY_SUBJECT_CONTEXT)(a2 + 56),
                IsServiceSession);
        v3 = IsServiceSession[0];
        goto LABEL_13;
      default:
        return v3;
    }
    return v3;
  }
  v6 = *(_QWORD *)(a2 + 56);
  v7 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
  v8 = *(_QWORD **)&PiPnpRtlCtx;
  if ( !v6 )
    v6 = *(_QWORD *)(a2 + 72);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
  v10 = *(_DWORD *)(v6 + 120);
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v10
    || (SessionById = (_QWORD *)PsGetSessionById(v10)) != 0LL
    && (v12 = *(_QWORD *)(SessionById[93] + 160LL),
        ObfDereferenceObjectWithTag(SessionById, 0x79517350u),
        v10 == (unsigned int)PsGetServerSiloServiceSessionId(v12)) )
  {
    GrantedAccess = 0;
    AccessStatus = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( !PiAuLocalSystemSecurityObject )
    {
      v14 = -1073741811;
      goto LABEL_12;
    }
    v13 = SeAccessCheck(
            PiAuLocalSystemSecurityObject,
            v7,
            0,
            0xF0000u,
            0,
            0LL,
            (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
            1,
            &GrantedAccess,
            &AccessStatus);
    if ( AccessStatus < 0 )
      v13 = 0;
    v14 = 0;
    if ( v13 )
    {
      v3 = 1;
      goto LABEL_13;
    }
  }
  v14 = PiPnpRtlApplyMandatoryDeviceFilters(v8, (const WCHAR *)(a1 + 128), 0LL, v7, IsServiceSession);
LABEL_12:
  v3 = IsServiceSession[0];
LABEL_13:
  if ( v14 >= 0 )
    return v3;
  if ( v14 != -1073741772 )
    return 0;
  v16 = *(void **)(a1 + 48);
  v3 = 1;
  if ( v16 )
  {
    GenericMapping.GenericRead = 131073;
    GenericMapping.GenericWrite = 0x20000;
    AccessMode = 1;
    GenericMapping.GenericExecute = 0x20000;
    GenericMapping.GenericAll = 983041;
    GrantedAccess = 0;
    AccessStatus = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( v7 )
    {
      p_SubjectContext = v7;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      p_SubjectContext = &SubjectContext;
      AccessMode = KeGetCurrentThread()->PreviousMode;
    }
    v3 = SeAccessCheck(v16, p_SubjectContext, 0, 1u, 0, 0LL, &GenericMapping, AccessMode, &GrantedAccess, &AccessStatus);
    if ( !v7 )
      SeReleaseSubjectContext(&SubjectContext);
    if ( AccessStatus < 0 )
      return 0;
    if ( !v3 )
      return v3;
  }
  if ( *(_DWORD *)(a1 + 60) != -1 )
  {
    ClientToken = v7->ClientToken;
    AccessStatus = 0;
    IsServiceSession[0] = 0;
    if ( !ClientToken )
      ClientToken = *(PACCESS_TOKEN *)(a2 + 72);
    SeQuerySessionIdTokenEx(ClientToken, (PULONG)&AccessStatus, IsServiceSession);
    if ( !IsServiceSession[0] && AccessStatus != *(_DWORD *)(a1 + 60) )
      return 0;
  }
  return v3;
}
