/*
 * XREFs of IopGetDeviceInterfaces @ 0x1408C8470
 * Callers:
 *     VhdiMountVhdFile @ 0x14082A068 (VhdiMountVhdFile.c)
 *     IoGetDeviceInterfaces @ 0x140966D40 (IoGetDeviceInterfaces.c)
 *     PiCMGetDeviceInterfaceList @ 0x1409FE7EC (PiCMGetDeviceInterfaceList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     RtlStringCchCopyExW @ 0x14041DC50 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     _PnpStringFromGuid @ 0x1408B754C (_PnpStringFromGuid.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C8D6C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C9D90 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408CB4B4 (_CmOpenDeviceInterfaceRegKey.c)
 *     PnpGetObjectProperty @ 0x1408CCF60 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408D19E0 (PiPnpRtlApplyMandatoryFilters.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B355C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetDeviceInterfaces(int *a1, const UNICODE_STRING *a2, int a3, char a4, wchar_t **a5, _DWORD *a6)
{
  _DWORD *v6; // rdi
  const UNICODE_STRING *v7; // r12
  wchar_t *v8; // rsi
  char v9; // r15
  wchar_t *v10; // r13
  wchar_t *v11; // r14
  NTSTATUS v12; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rsi
  __int64 (__fastcall *v15)(void *, WCHAR *, __int64, int, int, __int64); // rdi
  int v16; // eax
  NTSTATUS v17; // eax
  int ObjectProperty; // eax
  int v19; // r9d
  _WORD *v20; // rbx
  wchar_t *v21; // rax
  unsigned int i; // ecx
  wchar_t *v23; // rax
  unsigned int v24; // r12d
  size_t v25; // rbx
  wchar_t *v26; // r15
  _QWORD *v27; // r13
  __int64 (__fastcall *v28)(void *, WCHAR *, __int64, int, int, __int64); // r12
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  wchar_t *v33; // rax
  wchar_t *Pool2; // rax
  __int64 MaximumLength; // r8
  wchar_t *Buffer; // rcx
  unsigned __int64 Length; // rdx
  _WORD *v39; // rax
  wchar_t *j; // rdi
  __int64 v41; // rax
  _WORD *v42; // rax
  NTSTATUS MatchingFilteredDeviceInterfaceListWorker; // eax
  int v44; // eax
  int v45; // eax
  void *v46; // rax
  const WCHAR *v47; // rbx
  int v48; // ebx
  char v49; // [rsp+60h] [rbp-A0h]
  unsigned int cchDest; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_4; // [rsp+68h] [rbp-98h] BYREF
  char cchDest_5; // [rsp+69h] [rbp-97h] BYREF
  char cchDest_6; // [rsp+6Ah] [rbp-96h]
  __int64 v54; // [rsp+6Ch] [rbp-94h] BYREF
  _DWORD v55[3]; // [rsp+74h] [rbp-8Ch] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+8Ch] [rbp-74h]
  HANDLE v59; // [rsp+90h] [rbp-70h] BYREF
  const UNICODE_STRING *v60; // [rsp+98h] [rbp-68h]
  size_t pcchRemaining; // [rsp+A0h] [rbp-60h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v64; // [rsp+B8h] [rbp-48h]
  wchar_t **v65; // [rsp+C0h] [rbp-40h]
  PVOID v66; // [rsp+C8h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v71[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  HANDLE *p_Handle; // [rsp+150h] [rbp+50h]
  void *v75; // [rsp+158h] [rbp+58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+160h] [rbp+60h]
  wchar_t *v77; // [rsp+168h] [rbp+68h]
  int v78; // [rsp+170h] [rbp+70h]
  unsigned int *p_cchDest; // [rsp+178h] [rbp+78h]
  int v80; // [rsp+180h] [rbp+80h]
  WCHAR v81[40]; // [rsp+190h] [rbp+90h] BYREF

  v6 = a6;
  v7 = a2;
  v60 = a2;
  v58 = a3;
  v68 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  cchDest_6 = a4;
  v9 = 0;
  v65 = a5;
  v10 = 0LL;
  v64 = a6;
  v11 = 0LL;
  pszSrc = 0LL;
  memset(v55, 0, sizeof(v55));
  v49 = 0;
  cchDest_4 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Handle = 0LL;
  v59 = 0LL;
  v66 = 0LL;
  cchDest = 0;
  v54 = 0LL;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v57 = 0;
  DestinationString = 0LL;
  v12 = PnpStringFromGuid(a1, v81);
  if ( v12 < 0 )
    goto LABEL_59;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v14 = *(_QWORD **)&PiPnpRtlCtx;
  memset_0(v71, 0, 0x58uLL);
  v15 = (__int64 (__fastcall *)(void *, WCHAR *, __int64, int, int, __int64))v14[63];
  p_Handle = &Handle;
  v72 = 64LL;
  LODWORD(v73) = 983103;
  BYTE4(v73) = 0;
  if ( v15 )
  {
    if ( v15 == PiPnpRtlCmActionCallback )
      v16 = PiPnpRtlCmActionCallback(v14, v81, 4LL, 11, 1, (__int64)v71);
    else
      v16 = guard_dispatch_icall_no_overrides(v14, v81, 4LL, 11LL);
    if ( v16 == -1073741822 )
    {
      v15 = 0LL;
    }
    else
    {
      if ( v16 == -1073741536 )
      {
        v12 = v71[0];
        goto LABEL_8;
      }
      if ( v16 )
        goto LABEL_102;
    }
  }
  v17 = CmOpenCommonClassRegKeyWorker(
          (_DWORD)v14,
          (unsigned int)v81,
          v72,
          HIDWORD(v72),
          v73,
          SBYTE4(v73),
          (__int64)p_Handle,
          (__int64)&v75);
  v12 = v17;
  if ( v15 )
  {
    v71[0] = v17;
    v45 = guard_dispatch_icall_no_overrides(v14, v81, 4LL, 11LL);
    if ( v45 != -1073741822 )
    {
      if ( v45 == -1073741536 )
      {
        v12 = v71[0];
        goto LABEL_8;
      }
      if ( !v45 )
        goto LABEL_8;
LABEL_102:
      v12 = -1073741595;
      goto LABEL_63;
    }
  }
LABEL_8:
  if ( v12 == -1073741772 || v12 == -1073741766 )
  {
    cchDest = 1;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v8 = (wchar_t *)pszSrc;
    v11 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      v12 = 0;
      goto LABEL_39;
    }
    goto LABEL_87;
  }
  if ( v12 < 0 )
  {
LABEL_63:
    v8 = (wchar_t *)pszSrc;
    goto LABEL_39;
  }
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     (__int64)Handle,
                     0LL,
                     (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                     (__int64)&v54,
                     (__int64)&pszSrc,
                     (__int64)v55,
                     0);
  v12 = ObjectProperty;
  if ( ObjectProperty >= 0 )
  {
    v8 = (wchar_t *)pszSrc;
    v9 = 0;
    if ( (_DWORD)v54 != 18 )
    {
      v12 = -1073741823;
      goto LABEL_39;
    }
    if ( (int)CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, (_DWORD)pszSrc, 48, v19, 131097, 0, (__int64)&v59, 0LL) < 0 )
    {
      v49 = 0;
      v20 = 0LL;
LABEL_141:
      ExFreePoolWithTag(v8, 0);
      v8 = 0LL;
      v55[0] = 0;
      goto LABEL_14;
    }
    if ( !v7 )
    {
LABEL_131:
      if ( (v58 & 1) == 0 )
      {
        v20 = 0LL;
        v49 = 0;
        HIDWORD(v54) = 1;
        if ( (int)PnpGetObjectProperty(
                    PiPnpRtlCtx,
                    (_DWORD)v8,
                    3,
                    (_DWORD)v59,
                    0LL,
                    (__int64)&DEVPKEY_DeviceInterface_Enabled,
                    (__int64)&v54,
                    (__int64)&cchDest_4,
                    1,
                    (__int64)&v54 + 4,
                    0) < 0
          || v54 != 0x100000011LL )
        {
LABEL_140:
          ZwClose(v59);
          if ( v9 )
            goto LABEL_14;
          goto LABEL_141;
        }
        if ( cchDest_4 != -1 )
        {
          v49 = 0;
          goto LABEL_140;
        }
      }
      cchDest_5 = 0;
      memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
      SeCaptureSubjectContext(&SubjectSecurityContext);
      v48 = PiPnpRtlApplyMandatoryFilters(
              PiPnpRtlCtx,
              (int)v8,
              3,
              (int)v59,
              &SubjectSecurityContext,
              (__int64)&cchDest_5);
      SeReleaseSubjectContext(&SubjectSecurityContext);
      if ( v48 >= 0 )
      {
        v20 = 0LL;
        v9 = 1;
        v49 = 1;
        if ( cchDest_5 )
          goto LABEL_140;
        v9 = 0;
      }
LABEL_139:
      v49 = 0;
      v20 = 0LL;
      goto LABEL_140;
    }
    HIDWORD(v54) = 400;
    v46 = (void *)ExAllocatePool2(0x100uLL);
    v66 = v46;
    v47 = (const WCHAR *)v46;
    if ( v46 )
    {
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v8,
                  3,
                  (_DWORD)v59,
                  0LL,
                  (__int64)&DEVPKEY_Device_InstanceId,
                  (__int64)&v54,
                  (__int64)v46,
                  HIDWORD(v54),
                  (__int64)&v54 + 4,
                  0) < 0
        || (_DWORD)v54 != 18
        || RtlInitUnicodeStringEx(&DestinationString, v47) < 0
        || !RtlEqualUnicodeString(v7, &DestinationString, 1u) )
      {
        goto LABEL_139;
      }
      goto LABEL_131;
    }
LABEL_87:
    v12 = -1073741670;
    goto LABEL_39;
  }
  if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 && ObjectProperty != -1073741766 )
    goto LABEL_63;
  v8 = (wchar_t *)pszSrc;
  v20 = 0LL;
LABEL_14:
  if ( v7 )
  {
    MaximumLength = v7->MaximumLength;
    if ( (unsigned __int16)MaximumLength < 2u )
      goto LABEL_80;
    Buffer = v7->Buffer;
    if ( !Buffer )
      goto LABEL_80;
    Length = v7->Length;
    if ( (unsigned __int16)Length > (unsigned __int16)MaximumLength )
    {
      v12 = -1073741811;
      goto LABEL_39;
    }
    if ( (_WORD)Length )
    {
      if ( !*Buffer
        || (_WORD)Length == (_WORD)MaximumLength && !Buffer[((unsigned __int64)v7->Length >> 1) - 1]
        || Length <= MaximumLength - 2 && (!Buffer[(Length >> 1) - 1] || !Buffer[Length >> 1]) )
      {
        goto LABEL_99;
      }
      v39 = (_WORD *)ExAllocatePool2(0x100uLL);
      v20 = v39;
      if ( v39 )
      {
        memmove(v39, v7->Buffer, v7->Length);
        v20[(unsigned __int64)v7->Length >> 1] = 0;
LABEL_80:
        *(_QWORD *)&v55[1] = v20;
        goto LABEL_15;
      }
    }
    else
    {
      if ( !*Buffer )
      {
LABEL_99:
        *(_QWORD *)&v55[1] = v7->Buffer;
        goto LABEL_15;
      }
      v42 = (_WORD *)ExAllocatePool2(0x100uLL);
      if ( v42 )
      {
        *v42 = 0;
        *(_QWORD *)&v55[1] = v42;
        goto LABEL_15;
      }
    }
    v12 = -1073741670;
    goto LABEL_39;
  }
LABEL_15:
  v68 = 0LL;
  v21 = 0LL;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  if ( v9 )
    v21 = v8;
  SubjectContext.ClientToken = v21;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
  cchDest = 4096;
  if ( v9 && v55[0] >> 1 >= 0x1000u )
    cchDest = (v55[0] >> 1) + 1;
  v12 = -1073741789;
  for ( i = 0; ; i = v55[0] + 1 )
  {
    v55[0] = i;
    if ( v12 != -1073741789 || i >= 5 )
      goto LABEL_34;
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    v23 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v11 = v23;
    if ( !v23 )
    {
      v12 = -1073741670;
LABEL_34:
      v24 = v57;
      goto LABEL_35;
    }
    v24 = cchDest;
    v57 = cchDest;
    v25 = cchDest;
    if ( !v9 )
    {
      v26 = v23;
      goto LABEL_26;
    }
    v12 = RtlStringCchCopyExW(v23, cchDest, v8, &ppszDestEnd, &pcchRemaining, 0x800u);
    if ( v12 < 0 )
      goto LABEL_35;
    if ( !pcchRemaining )
      break;
    v25 = pcchRemaining - 1;
    v26 = ppszDestEnd + 1;
LABEL_26:
    v27 = *(_QWORD **)&PiPnpRtlCtx;
    pcchRemaining = v25;
    ppszDestEnd = v26;
    memset_0(v71, 0, 0x58uLL);
    v28 = (__int64 (__fastcall *)(void *, WCHAR *, __int64, int, int, __int64))v27[63];
    v72 = (__int64)v81;
    v73 = *(_QWORD *)&v55[1];
    v78 = v25;
    v77 = v26;
    LODWORD(p_Handle) = (v58 & 1) == 0;
    v80 = 0;
    v75 = &IopDeviceInterfaceFilterCallback;
    p_SubjectContext = &SubjectContext;
    p_cchDest = &cchDest;
    if ( v28 )
    {
      if ( v28 == PiPnpRtlCmActionCallback )
        v29 = PiPnpRtlCmActionCallback(v27, 0LL, 3LL, 17, 1, (__int64)v71);
      else
        v29 = guard_dispatch_icall_no_overrides(v27, 0LL, 3LL, 17LL);
      if ( v29 == -1073741822 )
      {
        v28 = 0LL;
      }
      else
      {
        if ( v29 == -1073741536 )
          goto LABEL_31;
        if ( v29 )
        {
          v12 = -1073741595;
          goto LABEL_32;
        }
      }
    }
    MatchingFilteredDeviceInterfaceListWorker = CmGetMatchingFilteredDeviceInterfaceListWorker(
                                                  v27,
                                                  v72,
                                                  v73,
                                                  (unsigned int)p_Handle,
                                                  v75,
                                                  p_SubjectContext,
                                                  v77,
                                                  v78,
                                                  p_cchDest,
                                                  v80);
    v12 = MatchingFilteredDeviceInterfaceListWorker;
    if ( v28 )
    {
      v71[0] = MatchingFilteredDeviceInterfaceListWorker;
      v44 = guard_dispatch_icall_no_overrides(v27, 0LL, 3LL, 17LL);
      if ( v44 != -1073741822 )
      {
        if ( v44 == -1073741536 )
        {
LABEL_31:
          v12 = v71[0];
          goto LABEL_32;
        }
        if ( v44 )
          v12 = -1073741595;
      }
    }
LABEL_32:
    v30 = v26 - v11 + cchDest;
    v9 = v49;
    cchDest = v30;
  }
  v12 = -1073741823;
LABEL_35:
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
  if ( v12 >= 0 )
  {
    if ( cchDest )
    {
LABEL_37:
      if ( !cchDest_6 )
      {
        for ( j = v11; *j; j += v41 + 1 )
        {
          v12 = CmValidateDeviceInterfaceName(v31, j);
          if ( v12 < 0 )
            break;
          *(_QWORD *)j = 0x5C003F003F005CLL;
          v41 = -1LL;
          do
            ++v41;
          while ( j[v41] );
        }
      }
    }
    else
    {
      cchDest = 1;
      if ( v24 || (ExFreePoolWithTag(v11, 0), (v11 = (wchar_t *)ExAllocatePool2(0x100uLL)) != 0LL) )
      {
        *v11 = 0;
        goto LABEL_37;
      }
      v12 = -1073741670;
    }
  }
  v7 = v60;
  v10 = *(wchar_t **)&v55[1];
LABEL_39:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v12 >= 0 )
  {
    v32 = v64;
    *v65 = v11;
    if ( v32 )
      *v32 = 2 * cchDest;
    v11 = 0LL;
    goto LABEL_43;
  }
  v6 = v64;
LABEL_59:
  *v65 = 0LL;
  if ( v6 )
    *v6 = 0;
LABEL_43:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
  {
    if ( v7 )
    {
      if ( v7->MaximumLength )
      {
        v33 = v7->Buffer;
        if ( v33 )
        {
          if ( v33 != v10 )
            ExFreePoolWithTag(v10, 0);
        }
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v66 )
    ExFreePoolWithTag(v66, 0);
  return (unsigned int)v12;
}
