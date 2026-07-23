/*
 * XREFs of IopGetDeviceInterfaces @ 0x1408C5EA0
 * Callers:
 *     VhdiMountVhdFile @ 0x14082A898 (VhdiMountVhdFile.c)
 *     IoGetDeviceInterfaces @ 0x14094F7D0 (IoGetDeviceInterfaces.c)
 *     PiCMGetDeviceInterfaceList @ 0x1409FF400 (PiCMGetDeviceInterfaceList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     _PnpStringFromGuid @ 0x1408B4EBC (_PnpStringFromGuid.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C679C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C77C0 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409AA8EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned int v22; // eax
  unsigned int i; // ecx
  wchar_t *v24; // rax
  unsigned int v25; // r12d
  size_t v26; // rbx
  wchar_t *v27; // r15
  _QWORD *v28; // r13
  __int64 (__fastcall *v29)(void *, WCHAR *, __int64, int, int, __int64); // r12
  int v30; // eax
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
  int v46; // ecx
  void *v47; // rax
  const WCHAR *v48; // rbx
  int v49; // ebx
  char v50; // [rsp+60h] [rbp-A0h]
  unsigned int cchDest; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_4; // [rsp+68h] [rbp-98h] BYREF
  char cchDest_5; // [rsp+69h] [rbp-97h] BYREF
  char cchDest_6; // [rsp+6Ah] [rbp-96h]
  __int64 v55; // [rsp+6Ch] [rbp-94h] BYREF
  _DWORD v56[3]; // [rsp+74h] [rbp-8Ch] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+8Ch] [rbp-74h]
  HANDLE v60; // [rsp+90h] [rbp-70h] BYREF
  const UNICODE_STRING *v61; // [rsp+98h] [rbp-68h]
  size_t pcchRemaining; // [rsp+A0h] [rbp-60h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v65; // [rsp+B8h] [rbp-48h]
  wchar_t **v66; // [rsp+C0h] [rbp-40h]
  PVOID v67; // [rsp+C8h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v72[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  HANDLE *p_Handle; // [rsp+150h] [rbp+50h]
  void *v76; // [rsp+158h] [rbp+58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+160h] [rbp+60h]
  wchar_t *v78; // [rsp+168h] [rbp+68h]
  int v79; // [rsp+170h] [rbp+70h]
  unsigned int *p_cchDest; // [rsp+178h] [rbp+78h]
  int v81; // [rsp+180h] [rbp+80h]
  WCHAR v82[40]; // [rsp+190h] [rbp+90h] BYREF

  v6 = a6;
  v7 = a2;
  v61 = a2;
  v59 = a3;
  v69 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  cchDest_6 = a4;
  v9 = 0;
  v66 = a5;
  v10 = 0LL;
  v65 = a6;
  v11 = 0LL;
  pszSrc = 0LL;
  memset(v56, 0, sizeof(v56));
  v50 = 0;
  cchDest_4 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Handle = 0LL;
  v60 = 0LL;
  v67 = 0LL;
  cchDest = 0;
  v55 = 0LL;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v58 = 0;
  DestinationString = 0LL;
  v12 = PnpStringFromGuid(a1, v82);
  if ( v12 < 0 )
    goto LABEL_59;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v14 = *(_QWORD **)&PiPnpRtlCtx;
  memset_0(v72, 0, 0x58uLL);
  v15 = (__int64 (__fastcall *)(void *, WCHAR *, __int64, int, int, __int64))v14[63];
  p_Handle = &Handle;
  v73 = 64LL;
  LODWORD(v74) = 983103;
  BYTE4(v74) = 0;
  if ( v15 )
  {
    if ( v15 == PiPnpRtlCmActionCallback )
      v16 = PiPnpRtlCmActionCallback(v14, v82, 4LL, 11, 1, (__int64)v72);
    else
      v16 = guard_dispatch_icall_no_overrides(v14, v82);
    if ( v16 == -1073741822 )
    {
      v15 = 0LL;
    }
    else
    {
      if ( v16 == -1073741536 )
      {
        v12 = v72[0];
        goto LABEL_8;
      }
      if ( v16 )
        goto LABEL_102;
    }
  }
  v17 = CmOpenCommonClassRegKeyWorker(
          (_DWORD)v14,
          (unsigned int)v82,
          v73,
          HIDWORD(v73),
          v74,
          SBYTE4(v74),
          (__int64)p_Handle,
          (__int64)&v76);
  v12 = v17;
  if ( v15 )
  {
    v72[0] = v17;
    v45 = guard_dispatch_icall_no_overrides(v14, v82);
    if ( v45 != -1073741822 )
    {
      if ( v45 == -1073741536 )
      {
        v12 = v72[0];
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
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2uLL, 0x20207050u);
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
                     (__int64)&v55,
                     (__int64)&pszSrc,
                     (__int64)v56,
                     0);
  v12 = ObjectProperty;
  if ( ObjectProperty >= 0 )
  {
    v8 = (wchar_t *)pszSrc;
    v9 = 0;
    if ( (_DWORD)v55 != 18 )
    {
      v12 = -1073741823;
      goto LABEL_39;
    }
    if ( (int)CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, (_DWORD)pszSrc, 48, v19, 131097, 0, (__int64)&v60, 0LL) < 0 )
    {
      v50 = 0;
      v20 = 0LL;
LABEL_141:
      ExFreePoolWithTag(v8, 0);
      v8 = 0LL;
      v56[0] = 0;
      goto LABEL_14;
    }
    if ( !v7 )
    {
LABEL_131:
      if ( (v59 & 1) == 0 )
      {
        v20 = 0LL;
        v50 = 0;
        HIDWORD(v55) = 1;
        if ( (int)PnpGetObjectProperty(
                    PiPnpRtlCtx,
                    (_DWORD)v8,
                    3,
                    (_DWORD)v60,
                    0LL,
                    (__int64)&DEVPKEY_DeviceInterface_Enabled,
                    (__int64)&v55,
                    (__int64)&cchDest_4,
                    1,
                    (__int64)&v55 + 4,
                    0) < 0
          || v55 != 0x100000011LL )
        {
LABEL_140:
          ZwClose(v60);
          if ( v9 )
            goto LABEL_14;
          goto LABEL_141;
        }
        if ( cchDest_4 != -1 )
        {
          v50 = 0;
          goto LABEL_140;
        }
      }
      cchDest_5 = 0;
      memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
      SeCaptureSubjectContext(&SubjectSecurityContext);
      v49 = PiPnpRtlApplyMandatoryFilters(
              PiPnpRtlCtx,
              (int)v8,
              3,
              (int)v60,
              &SubjectSecurityContext,
              (__int64)&cchDest_5);
      SeReleaseSubjectContext(&SubjectSecurityContext);
      if ( v49 >= 0 )
      {
        v20 = 0LL;
        v9 = 1;
        v50 = 1;
        if ( cchDest_5 )
          goto LABEL_140;
        v9 = 0;
      }
LABEL_139:
      v50 = 0;
      v20 = 0LL;
      goto LABEL_140;
    }
    HIDWORD(v55) = 400;
    v47 = (void *)ExAllocatePool2(0x100uLL, 0x190uLL, 0x20207050u);
    v67 = v47;
    v48 = (const WCHAR *)v47;
    if ( v47 )
    {
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v8,
                  3,
                  (_DWORD)v60,
                  0LL,
                  (__int64)&DEVPKEY_Device_InstanceId,
                  (__int64)&v55,
                  (__int64)v47,
                  HIDWORD(v55),
                  (__int64)&v55 + 4,
                  0) < 0
        || (_DWORD)v55 != 18
        || RtlInitUnicodeStringEx(&DestinationString, v48) < 0
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
      v39 = (_WORD *)ExAllocatePool2(0x100uLL, Length + 2, 0x75737050u);
      v20 = v39;
      if ( v39 )
      {
        memmove(v39, v7->Buffer, v7->Length);
        v20[(unsigned __int64)v7->Length >> 1] = 0;
LABEL_80:
        *(_QWORD *)&v56[1] = v20;
        goto LABEL_15;
      }
    }
    else
    {
      if ( !*Buffer )
      {
LABEL_99:
        *(_QWORD *)&v56[1] = v7->Buffer;
        goto LABEL_15;
      }
      v42 = (_WORD *)ExAllocatePool2(0x100uLL, 2uLL, 0x75737050u);
      if ( v42 )
      {
        *v42 = 0;
        *(_QWORD *)&v56[1] = v42;
        goto LABEL_15;
      }
    }
    v12 = -1073741670;
    goto LABEL_39;
  }
LABEL_15:
  v69 = 0LL;
  v21 = 0LL;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  if ( v9 )
    v21 = v8;
  SubjectContext.ClientToken = v21;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
  v22 = 4096;
  cchDest = 4096;
  if ( v9 )
  {
    v46 = v56[0] >> 1;
    if ( v56[0] >> 1 >= 0x1000u )
    {
      v22 = v46 + 1;
      cchDest = v46 + 1;
    }
  }
  v12 = -1073741789;
  for ( i = 0; ; i = v56[0] + 1 )
  {
    v56[0] = i;
    if ( v12 != -1073741789 || i >= 5 )
      goto LABEL_34;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v22 = cchDest;
    }
    v24 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v22, 0x20207050u);
    v11 = v24;
    if ( !v24 )
    {
      v12 = -1073741670;
LABEL_34:
      v25 = v58;
      goto LABEL_35;
    }
    v25 = cchDest;
    v58 = cchDest;
    v26 = cchDest;
    if ( !v9 )
    {
      v27 = v24;
      goto LABEL_26;
    }
    v12 = RtlStringCchCopyExW(v24, cchDest, v8, &ppszDestEnd, &pcchRemaining, 0x800u);
    if ( v12 < 0 )
      goto LABEL_35;
    if ( !pcchRemaining )
      break;
    v26 = pcchRemaining - 1;
    v27 = ppszDestEnd + 1;
LABEL_26:
    v28 = *(_QWORD **)&PiPnpRtlCtx;
    pcchRemaining = v26;
    ppszDestEnd = v27;
    memset_0(v72, 0, 0x58uLL);
    v29 = (__int64 (__fastcall *)(void *, WCHAR *, __int64, int, int, __int64))v28[63];
    v73 = (__int64)v82;
    v74 = *(_QWORD *)&v56[1];
    v79 = v26;
    v78 = v27;
    LODWORD(p_Handle) = (v59 & 1) == 0;
    v81 = 0;
    v76 = &IopDeviceInterfaceFilterCallback;
    p_SubjectContext = &SubjectContext;
    p_cchDest = &cchDest;
    if ( v29 )
    {
      if ( v29 == PiPnpRtlCmActionCallback )
        v30 = PiPnpRtlCmActionCallback(v28, 0LL, 3LL, 17, 1, (__int64)v72);
      else
        v30 = guard_dispatch_icall_no_overrides(v28, 0LL);
      if ( v30 == -1073741822 )
      {
        v29 = 0LL;
      }
      else
      {
        if ( v30 == -1073741536 )
          goto LABEL_31;
        if ( v30 )
        {
          v12 = -1073741595;
          goto LABEL_32;
        }
      }
    }
    MatchingFilteredDeviceInterfaceListWorker = CmGetMatchingFilteredDeviceInterfaceListWorker(
                                                  v28,
                                                  v73,
                                                  v74,
                                                  (unsigned int)p_Handle,
                                                  v76,
                                                  p_SubjectContext,
                                                  v78,
                                                  v79,
                                                  p_cchDest,
                                                  v81);
    v12 = MatchingFilteredDeviceInterfaceListWorker;
    if ( v29 )
    {
      v72[0] = MatchingFilteredDeviceInterfaceListWorker;
      v44 = guard_dispatch_icall_no_overrides(v28, 0LL);
      if ( v44 != -1073741822 )
      {
        if ( v44 == -1073741536 )
        {
LABEL_31:
          v12 = v72[0];
          goto LABEL_32;
        }
        if ( v44 )
          v12 = -1073741595;
      }
    }
LABEL_32:
    v22 = v27 - v11 + cchDest;
    v9 = v50;
    cchDest = v22;
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
      if ( v25
        || (ExFreePoolWithTag(v11, 0), (v11 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * cchDest, 0x20207050u)) != 0LL) )
      {
        *v11 = 0;
        goto LABEL_37;
      }
      v12 = -1073741670;
    }
  }
  v7 = v61;
  v10 = *(wchar_t **)&v56[1];
LABEL_39:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v12 >= 0 )
  {
    v32 = v65;
    *v66 = v11;
    if ( v32 )
      *v32 = 2 * cchDest;
    v11 = 0LL;
    goto LABEL_43;
  }
  v6 = v65;
LABEL_59:
  *v66 = 0LL;
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
  if ( v67 )
    ExFreePoolWithTag(v67, 0);
  return (unsigned int)v12;
}
