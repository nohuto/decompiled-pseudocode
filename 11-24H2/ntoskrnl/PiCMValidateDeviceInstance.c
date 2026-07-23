/*
 * XREFs of PiCMValidateDeviceInstance @ 0x1408BBC4C
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1408BCA94 (PiCMReturnBasicResultData.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMValidateDeviceInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  char v8; // di
  int v9; // eax
  const WCHAR *v10; // rsi
  unsigned int v11; // ebx
  int v12; // r14d
  int v13; // ebx
  PACCESS_TOKEN PrimaryToken; // rbx
  HANDLE v15; // r15
  __int64 v16; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v18; // r14d
  _QWORD *SessionById; // rax
  __int64 v20; // rbx
  BOOLEAN v21; // cl
  __int64 v22; // rcx
  int v24; // r15d
  __int64 v25; // r14
  char v26; // al
  int v27; // edx
  int v28; // eax
  char v29[4]; // [rsp+58h] [rbp-69h] BYREF
  NTSTATUS AccessStatus; // [rsp+5Ch] [rbp-65h] BYREF
  int v31; // [rsp+60h] [rbp-61h]
  int v32; // [rsp+64h] [rbp-5Dh] BYREF
  unsigned int v33; // [rsp+68h] [rbp-59h] BYREF
  int v34; // [rsp+6Ch] [rbp-55h]
  int v35; // [rsp+70h] [rbp-51h]
  ACCESS_MASK GrantedAccess; // [rsp+74h] [rbp-4Dh] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-49h] BYREF
  __int128 v38; // [rsp+80h] [rbp-41h] BYREF
  PCWSTR SourceString[2]; // [rsp+90h] [rbp-31h]
  __int64 v40; // [rsp+A0h] [rbp-21h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp+7h] BYREF
  __int128 v43; // [rsp+D8h] [rbp+17h]

  v32 = 0;
  v40 = 0LL;
  v33 = 0;
  v8 = 1;
  v31 = 0;
  *a6 = 0;
  v38 = 0LL;
  v34 = 0;
  *(_OWORD *)SourceString = 0LL;
  v35 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v29[0] = 1;
  Handle = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, &v38);
  v10 = SourceString[0];
  v11 = v9;
  if ( v9 < 0 )
    goto LABEL_26;
  v12 = DWORD1(v38);
  if ( !SourceString[0]
    || (unsigned int)(DWORD1(v38) - 1) > 1
    || DWORD2(v38) != 1
    || HIDWORD(SourceString[1])
    || !a3
    || a4 < 8 )
  {
    v13 = -1073741811;
    goto LABEL_23;
  }
  v13 = PnpOpenObjectRegKey(PiPnpRtlCtx, SourceString[0], 1, 1, 0, (__int64)&Handle);
  if ( v13 >= 0 )
  {
    if ( v12 == 2 && PiAuDoesClientHaveAccess(2u) )
    {
LABEL_45:
      AccessStatus = 4;
      if ( (int)PnpCtxRegQueryValue(v22, Handle, L"Phantom", &v32, &v33, (unsigned int *)&AccessStatus) >= 0
        && v32 == 4
        && AccessStatus == 4 )
      {
        v28 = v13;
        if ( v33 )
          v28 = -1073741810;
        v13 = v28;
      }
      goto LABEL_23;
    }
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    v15 = Handle;
    v16 = *(_QWORD *)&PiPnpRtlCtx;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)PrimaryToken + 6), 1u);
    v18 = *((_DWORD *)PrimaryToken + 30);
    ExReleaseResourceLite(*((PERESOURCE *)PrimaryToken + 6));
    KeLeaveCriticalRegion();
    v10 = SourceString[0];
    v13 = 0;
    if ( v18 )
    {
      SessionById = (_QWORD *)PsGetSessionById(v18);
      if ( !SessionById )
        goto LABEL_20;
      v20 = *(_QWORD *)(SessionById[93] + 160LL);
      ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
      if ( v18 != (unsigned int)PsGetServerSiloServiceSessionId(v20) )
        goto LABEL_20;
      v13 = 0;
    }
    GrantedAccess = 0;
    AccessStatus = 0;
    DestinationString = 0LL;
    v43 = 0LL;
    if ( !PiAuLocalSystemSecurityObject )
    {
      v13 = -1073741811;
      goto LABEL_21;
    }
    v21 = SeAccessCheck(
            PiAuLocalSystemSecurityObject,
            &SubjectContext,
            0,
            0xF0000u,
            0,
            0LL,
            (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
            1,
            &GrantedAccess,
            &AccessStatus);
    if ( AccessStatus < 0 )
      v21 = 0;
    if ( v21 )
    {
LABEL_22:
      SeReleaseSubjectContext(&SubjectContext);
      if ( v13 >= 0 )
      {
        if ( v8 )
        {
          if ( DWORD1(v38) == 2 )
            goto LABEL_45;
          v24 = (int)Handle;
          v25 = *(_QWORD *)&PiPnpRtlCtx;
          v32 = 0;
          DestinationString = 0LL;
          AccessStatus = 0;
          v31 = 0;
          v34 = 0;
          v35 = 0;
          if ( RtlInitUnicodeStringEx(&DestinationString, v10) >= 0
            && *(_QWORD *)(v25 + 264)
            && (int)guard_dispatch_icall_no_overrides(v25, &DestinationString) >= 0 )
          {
            v33 = 4;
            if ( (unsigned int)CmGetDeviceRegProp(
                                 v25,
                                 (_DWORD)v10,
                                 v24,
                                 11,
                                 (__int64)&v32,
                                 (__int64)&AccessStatus,
                                 (__int64)&v33,
                                 0)
              || v33 < 4
              || (v26 = AccessStatus, v32 != 4) )
            {
              v26 = 0;
            }
            v27 = v31;
            if ( (v26 & 4) != 0 )
            {
              v27 = v31 | 0x10;
              v31 |= 0x10u;
            }
            if ( (v26 & 0x40) != 0 && (v27 & 0x400) == 0 )
            {
              v34 = 28;
              v31 = v27 | 0x400;
            }
            goto LABEL_23;
          }
        }
        v13 = -1073741810;
      }
      goto LABEL_23;
    }
LABEL_20:
    v13 = PiPnpRtlApplyMandatoryDeviceFilters(v16, v10, v15, &SubjectContext, v29);
LABEL_21:
    v8 = v29[0];
    goto LABEL_22;
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  v11 = PiCMReturnBasicResultData((unsigned int)v13, (unsigned int)v40, a3, a4, a6);
LABEL_26:
  if ( v10 && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  return v11;
}
