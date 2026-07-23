/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800A4268
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 *     RtlUnicodeStringToInteger @ 0x180013E20 (RtlUnicodeStringToInteger.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800A30F8 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800A3254 (LdrpIsVerifierActivationFilterMatched.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800A3478 (RtlOpenModernAppOptionsKey.c)
 *     LdrpConstructModernAppKeyName @ 0x1800A3518 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800A4EEC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800A4FC0 (LdrpQueryIllegalCWDDevices.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800A5060 (RtlSetLowFragHeapGlobalFlags.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800A513C (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800A523C (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800A5A48 (RtlpOpenImageFileOptionsKeyEx.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800A6164 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x18011E104 (RtlpInitializeLegacyDosDevicePathState.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  HANDLE *v6; // r13
  bool v8; // bl
  char v9; // r15
  HANDLE v10; // rdi
  void *v11; // rsi
  unsigned __int64 v12; // r12
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  NTSTATUS v16; // ebx
  int v17; // eax
  HANDLE *v18; // rdi
  NTSTATUS v20; // eax
  __int64 i; // rbx
  wchar_t *v22; // rdx
  _BYTE *v23; // rax
  int ImageFileKeyOption; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // edx
  size_t v29; // rax
  NTSTATUS v30; // eax
  __int64 v31; // rax
  NTSTATUS v32; // eax
  unsigned int v33; // ebx
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-CCh]
  unsigned int v36; // [rsp+38h] [rbp-C8h]
  ULONG_PTR ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  void *v40; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING v42; // [rsp+68h] [rbp-98h] BYREF
  HANDLE *v43; // [rsp+78h] [rbp-88h]
  _UNICODE_STRING v44; // [rsp+80h] [rbp-80h] BYREF
  HANDLE *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t String[200]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = a5;
  ReturnLength = a1;
  v8 = 1;
  v46 = a6;
  *a4 = 0LL;
  v9 = 0;
  *a5 = 0LL;
  v10 = 0LL;
  v43 = a4;
  v11 = 0LL;
  *(_QWORD *)&v42.Length = a3;
  v12 = 0LL;
  v45 = a5;
  KeyHandle = 0LL;
  Handle = 0LL;
  v36 = 0;
  v40 = 0LL;
  v44 = 0LL;
  v35 = 0;
  Value = 0;
  v38 = 0;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) != 0 )
    goto LABEL_2;
  v10 = KeyHandle;
  if ( (int)RtlpOpenImageFileOptionsKeyEx(ReturnLength, 9LL) < 0 )
    goto LABEL_2;
  *v43 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && LdrpConstructModernAppKeyName(String) >= 0 )
  {
    *(_DWORD *)(&v44.MaximumLength + 1) = 0;
    v44.Buffer = String;
    v29 = 2 * wcslen(String);
    if ( v29 >= 0xFFFE )
      LOWORD(v29) = -4;
    v44.Length = v29;
    v44.MaximumLength = v29 + 2;
    v30 = RtlOpenModernAppOptionsKey(&v44, v10, &v40);
    v11 = v40;
    if ( v30 >= 0 )
      *a5 = v40;
  }
  if ( v11 )
  {
    RtlQueryImageFileKeyOption(v11, (wchar_t *)L"DisableHeapLookaside", 4, 0LL);
    RtlQueryImageFileKeyOption(v11, (wchar_t *)L"FrontEndHeapDebugOptions", 4, 0LL);
    RtlQueryImageFileKeyOption(v11, (wchar_t *)L"ShutdownFlags", 4, 0LL);
    RtlQueryImageFileKeyOption(v11, (wchar_t *)L"UnloadEventTraceDepth", 4, 0LL);
  }
  if ( Value )
    RtlpUnloadEventTraceExNumber = Value;
  Value = 0;
  if ( v11 )
    RtlQueryImageFileKeyOption(v11, (wchar_t *)L"MaxLoaderThreads", 4, 0LL);
  Value = 0;
  if ( v11 )
    RtlQueryImageFileKeyOption(v11, (wchar_t *)L"UseImpersonatedDeviceMap", 4, 0LL);
  Value = 0;
  if ( v11 )
    RtlQueryImageFileKeyOption(v11, (wchar_t *)L"TracingFlags", 4, 0LL);
  Value = 0;
  if ( v11 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(v11, (wchar_t *)L"RaiseExceptionOnPossibleDeadlock", 4, 0LL);
    if ( ((int)(ImageFileKeyOption + 0x80000000) < 0 || ImageFileKeyOption == -2147483643) && ImageFileKeyOption >= 0 )
      RtlpRaiseExceptionOnPossibleDeadlock = Value != 0;
  }
  Value = 0;
  if ( v11 )
  {
    v25 = RtlQueryImageFileKeyOption(v11, (wchar_t *)L"LegacyDosDevicePaths", 4, 0LL);
    if ( ((int)(v25 + 0x80000000) < 0 || v25 == -2147483643) && v25 >= 0 )
      RtlpInitializeLegacyDosDevicePathState(Value);
  }
  Value = 0;
  RtlQueryImageFileKeyOption(v10, (wchar_t *)L"CFGOptions", 4, 0LL);
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180172AC0;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    ObjectAttributes.RootDirectory = v10;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v20 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1u, &ObjectAttributes);
    v16 = v20;
    if ( v20 == -1073741772 )
    {
      LdrpLargePageDllKeyHandle = 0LL;
    }
    else if ( v20 < 0 )
    {
      goto LABEL_10;
    }
  }
  RtlQueryImageFileKeyOption(v10, (wchar_t *)L"MinimumStackCommitInBytes", 4, 0LL);
  if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)Value )
    *(_QWORD *)(a2 + 792) = Value;
  for ( i = 0LL; i != 6; i += 2LL )
  {
    v22 = (&off_180172A50)[i];
    Value = 0;
    RtlQueryImageFileKeyOption(v10, v22, 4, 0LL);
    v23 = *(_BYTE **)((char *)&off_180172A58 + i * 8);
    *v23 = 0;
  }
  RtlQueryImageFileKeyOption(v10, (wchar_t *)L"MaxDeadActivationContexts", 4, 0LL);
  v6 = v45;
  Value = 0;
  if ( (int)RtlQueryImageFileKeyOption(v10, (wchar_t *)L"ImageExpansionMitigation", 4, 0LL) >= 0 )
    LdrpImageExpansionMitigation = Value;
  v9 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
  if ( v11 )
  {
    v26 = RtlQueryImageFileKeyOption(v11, (wchar_t *)L"GlobalFlag", 4, 0LL);
    if ( (int)(v26 + 0x80000000) < 0 || v26 == -2147483643 )
    {
      v12 = (unsigned __int64)v11;
      if ( v26 >= 0 )
      {
        v33 = v35;
        if ( (v35 & 0x2000100) == 0 )
          goto LABEL_98;
        if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v11, v10) )
        {
          v33 = v35 & 0xFDFFFEFF;
          v35 &= 0xFDFFFEFF;
        }
        if ( (v33 & 0x2000100) == 0 )
          goto LABEL_98;
        if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter((unsigned __int16 *)ReturnLength, &v38) >= 0 )
        {
          if ( !v38 )
          {
            v33 &= 0xFDFFFEFF;
            v35 = v33;
          }
LABEL_98:
          *(_DWORD *)(a2 + 188) = v33;
        }
      }
    }
  }
  if ( v11 )
  {
    v27 = RtlQueryImageFileKeyOption(v11, (wchar_t *)L"GlobalFlag2", 4, 0LL);
    if ( ((int)(v27 + 0x80000000) < 0 || v27 == -2147483643) && v27 >= 0 )
      *(_DWORD *)(a2 + 1988) = v35;
  }
  v12 &= -(__int64)((*(_DWORD *)(a2 + 188) & 0x2000100) != 0);
  v8 = (*(_DWORD *)(a2 + 188) & 0x2000100) == 0;
  Value = 0;
  if ( v11 )
  {
    v28 = RtlQueryImageFileKeyOption(v11, (wchar_t *)L"QueryProcessModuleInformationLoopDetectorCount", 4, 0LL);
    if ( ((int)(v28 + 0x80000000) < 0 || v28 == -2147483643) && v28 >= 0 )
      LdrpQueryProcessModuleInformationLoopDetectorCount = Value;
  }
LABEL_2:
  LOBYTE(v13) = LdrControlFlowGuardEnforced();
  if ( v13 )
    v36 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v36, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
  if ( v8 && !LdrpIsSecureProcess && (MEMORY[0x7FFE03A0] & 1) != 0 )
  {
    if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(ReturnLength, v14, &Handle) < 0 )
    {
      Handle = 0LL;
    }
    else if ( (int)RtlQueryImageFileKeyOption(Handle, (wchar_t *)L"GlobalFlag", 4, 0LL) >= 0 )
    {
      v12 = (unsigned __int64)Handle;
      *(_DWORD *)(a2 + 188) |= v35 & 0x2000100;
    }
  }
  v16 = 0;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || (unsigned __int8)LdrpPayloadRestrictionMitigationsEnabled() )
  {
    LOBYTE(v15) = v9;
    v17 = LdrpInitializeApplicationVerifierPackage(ReturnLength, a2, v15, v12, *(_QWORD *)&v42.Length, v46);
    v16 = v17;
    if ( v17 < 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        10288,
        (__int64)"LdrpInitializeExecutionOptions",
        0,
        "Initializing the application verifier package failed with status 0x%08lx\n",
        v17);
      goto LABEL_10;
    }
  }
  else if ( !v11 )
  {
    if ( *(_BYTE *)(a2 + 2) )
    {
      v42.Buffer = (wchar_t *)&ObjectAttributes;
      *(_DWORD *)(&v42.MaximumLength + 1) = 0;
      v42.MaximumLength = 32;
      v31 = *(_QWORD *)(a2 + 32);
      ReturnLength = 0LL;
      v32 = RtlQueryEnvironmentVariable(
              *(PVOID *)(v31 + 128),
              L"_NO_DEBUG_HEAP",
              0xEuLL,
              (PWSTR)&ObjectAttributes,
              0x10uLL,
              &ReturnLength);
      if ( ReturnLength > 0x7FFF
        || v32 == -1073741789
        || (v42.Length = 2 * ReturnLength, v32 < 0)
        || (v16 = RtlUnicodeStringToInteger(&v42, 0, &Value), v16 < 0)
        || !Value )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
    *(_DWORD *)(a2 + 1984) |= 1u;
  if ( v16 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(v10);
    goto LABEL_21;
  }
LABEL_10:
  v18 = v43;
  if ( *v43 )
  {
    NtClose(*v43);
    *v18 = 0LL;
  }
  if ( *v6 )
  {
    NtClose(*v6);
    *v6 = 0LL;
  }
LABEL_21:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v16;
}
