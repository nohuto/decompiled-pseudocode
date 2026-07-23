/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x1408B4A00
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x1408B31B0 (PiCMGetDeviceInterfaceAlias.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     _PnpStringFromGuid @ 0x1408B4EBC (_PnpStringFromGuid.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1408B4F88 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1408B5078 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceName @ 0x1408B54E4 (_CmGetDeviceInterfaceName.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C77C0 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v5; // rsi
  wchar_t *v6; // rdi
  wchar_t *Buffer; // rcx
  unsigned __int64 Length; // rdx
  __int64 MaximumLength; // r8
  wchar_t *Pool2; // rax
  wchar_t *v11; // rbx
  wchar_t *v12; // r13
  int ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rax
  void *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  WCHAR *v20; // rdi
  char v21; // r12
  UNICODE_STRING *v22; // r12
  int v23; // r9d
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rcx
  int SubjectSecurityContext; // [rsp+20h] [rbp-E0h]
  int SubjectSecurityContexta; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PUNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v37[80]; // [rsp+B0h] [rbp-50h] BYREF

  DestinationString = AliasSymbolicLinkName;
  LOWORD(v30) = 0;
  Handle = 0LL;
  v32 = 0;
  v5 = 0LL;
  v33 = 0;
  v6 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !SymbolicLinkName )
    goto LABEL_42;
  Buffer = SymbolicLinkName->Buffer;
  if ( !Buffer )
    goto LABEL_42;
  Length = SymbolicLinkName->Length;
  if ( !(_WORD)Length )
    goto LABEL_42;
  MaximumLength = SymbolicLinkName->MaximumLength;
  if ( (unsigned __int16)MaximumLength >= 2u )
  {
    if ( (unsigned __int16)Length > (unsigned __int16)MaximumLength )
    {
LABEL_42:
      ObjectProperty = -1073741811;
      goto LABEL_34;
    }
    if ( *Buffer
      && ((_WORD)Length != (_WORD)MaximumLength || Buffer[((unsigned __int64)SymbolicLinkName->Length >> 1) - 1])
      && (Length > MaximumLength - 2 || Buffer[(Length >> 1) - 1] && Buffer[Length >> 1]) )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, Length + 2, 0x75737050u);
      v11 = Pool2;
      if ( !Pool2 )
      {
        ObjectProperty = -1073741670;
        goto LABEL_34;
      }
      memmove(Pool2, SymbolicLinkName->Buffer, SymbolicLinkName->Length);
      v6 = v11;
      v11[(unsigned __int64)SymbolicLinkName->Length >> 1] = 0;
    }
    else
    {
      v6 = Buffer;
    }
  }
  v12 = v6;
  if ( (int)CmValidateDeviceInterfaceName(Buffer, v6) < 0 )
    goto LABEL_42;
  SeCaptureSubjectContext(&SubjectContext);
  ObjectProperty = PiPnpRtlApplyMandatoryFilters(PiPnpRtlCtx, (int)v6, 3, 0, &SubjectContext, (__int64)&v30);
  SeReleaseSubjectContext(&SubjectContext);
  if ( ObjectProperty >= 0 )
  {
    if ( !(_BYTE)v30 )
    {
      ObjectProperty = -1073741790;
      goto LABEL_34;
    }
    ObjectProperty = PnpStringFromGuid(AliasInterfaceClassGuid, v37);
    if ( ObjectProperty >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v15 = ExAllocatePool2(0x100uLL, 0x190uLL, 0x20207050u);
      v16 = (void *)v15;
      if ( v15 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           PiPnpRtlCtx,
                           (_DWORD)v6,
                           3,
                           0,
                           0LL,
                           (__int64)&DEVPKEY_Device_InstanceId,
                           (__int64)&v32,
                           v15,
                           400,
                           (__int64)&v33,
                           0);
        if ( ObjectProperty < 0 )
          goto LABEL_30;
        if ( v32 != 18 )
        {
          ObjectProperty = -1073741585;
          goto LABEL_30;
        }
        v31 = 128;
        v5 = (void *)ExAllocatePool2(0x100uLL, 0x100uLL, 0x20207050u);
        if ( !v5 )
          goto LABEL_38;
        ObjectProperty = CmGetDeviceInterfaceReferenceString(v17, v6, v5, 128LL, &v31);
        if ( ObjectProperty != -1073741789 )
        {
LABEL_21:
          if ( ObjectProperty == -1073741772 )
          {
            ExFreePoolWithTag(v5, 0);
            v5 = 0LL;
          }
          else if ( ObjectProperty < 0 )
          {
            goto LABEL_30;
          }
          ObjectProperty = CmGetDeviceInterfacePathFormat(v18, v6, (char *)&v30 + 1);
          if ( ObjectProperty >= 0 )
          {
            v31 = 512;
            v20 = (WCHAR *)ExAllocatePool2(0x100uLL, 0x400uLL, 0x20207050u);
            if ( v20 )
            {
              v21 = BYTE1(v30);
              LOBYTE(SubjectSecurityContext) = BYTE1(v30);
              ObjectProperty = CmGetDeviceInterfaceName(v19, v37, v16, v5, SubjectSecurityContext, v20, 512, &v31);
              if ( ObjectProperty != -1073741789 )
              {
LABEL_26:
                if ( ObjectProperty >= 0 )
                {
                  v22 = DestinationString;
                  ObjectProperty = RtlInitUnicodeStringEx(DestinationString, v20);
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                       PiPnpRtlCtx,
                                       (_DWORD)v20,
                                       48,
                                       v23,
                                       131097,
                                       0,
                                       (__int64)&Handle,
                                       0LL);
                    if ( ObjectProperty >= 0 )
                      ZwClose(Handle);
                    else
                      RtlFreeAnsiString(v22);
                  }
                }
                goto LABEL_30;
              }
              ExFreePoolWithTag(v20, 0);
              v26 = v31;
              v20 = (WCHAR *)ExAllocatePool2(0x100uLL, 2LL * v31, 0x20207050u);
              if ( v20 )
              {
                LOBYTE(SubjectSecurityContexta) = v21;
                ObjectProperty = CmGetDeviceInterfaceName(v27, v37, v16, v5, SubjectSecurityContexta, v20, v26, &v31);
                goto LABEL_26;
              }
            }
            goto LABEL_38;
          }
LABEL_30:
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          v6 = v12;
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          if ( v16 )
            ExFreePoolWithTag(v16, 0);
          goto LABEL_34;
        }
        ExFreePoolWithTag(v5, 0);
        v5 = (void *)ExAllocatePool2(0x100uLL, 2LL * v31, 0x20207050u);
        if ( v5 )
        {
          ObjectProperty = CmGetDeviceInterfaceReferenceString(v25, v6, v5, v31, &v31);
          goto LABEL_21;
        }
      }
LABEL_38:
      ObjectProperty = -1073741670;
      goto LABEL_30;
    }
  }
LABEL_34:
  PnpUnicodeStringToWstrFree(v6, SymbolicLinkName);
  return ObjectProperty;
}
