/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800B1738
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlQueryEnvironmentVariable @ 0x1800AD560 (RtlQueryEnvironmentVariable.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800B05CC (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800B0728 (LdrpIsVerifierActivationFilterMatched.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800B094C (RtlOpenModernAppOptionsKey.c)
 *     LdrpConstructModernAppKeyName @ 0x1800B09EC (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800B23BC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800B2490 (LdrpQueryIllegalCWDDevices.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800B2530 (RtlSetLowFragHeapGlobalFlags.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800B260C (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800B270C (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800B3634 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x1801217A4 (RtlpInitializeLegacyDosDevicePathState.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  HANDLE *v6; // r13
  bool v8; // bl
  char v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // ebx
  int v16; // eax
  HANDLE *v17; // rdi
  int v19; // edx
  int v20; // edx
  int v21; // eax
  __int64 i; // rbx
  wchar_t *v23; // rdx
  bool *v24; // rax
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  size_t v32; // rax
  int v33; // eax
  __int64 v34; // rax
  int EnvironmentVariable; // eax
  int v36; // ebx
  unsigned int v37; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v39; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v40; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  void *v44; // [rsp+60h] [rbp-A0h]
  __int64 v45[2]; // [rsp+68h] [rbp-98h] BYREF
  HANDLE *v46; // [rsp+78h] [rbp-88h]
  __int128 v47; // [rsp+80h] [rbp-80h] BYREF
  HANDLE *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  _QWORD v50[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-40h]
  wchar_t String[200]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = a5;
  v40 = a1;
  v8 = 1;
  v49 = a6;
  *a4 = 0LL;
  v9 = 0;
  *a5 = 0LL;
  v10 = 0LL;
  v46 = a4;
  v11 = 0LL;
  v45[0] = a3;
  v12 = 0LL;
  v48 = a5;
  v44 = 0LL;
  Handle = 0LL;
  v39 = 0;
  v43 = 0LL;
  v47 = 0LL;
  v38 = 0;
  v37 = 0;
  v41 = 0;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) != 0 )
    goto LABEL_2;
  v10 = (__int64)v44;
  if ( (int)RtlpOpenImageFileOptionsKeyEx(v40, 9LL) < 0 )
    goto LABEL_2;
  *v46 = v44;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)LdrpConstructModernAppKeyName(String) >= 0 )
  {
    DWORD1(v47) = 0;
    *((_QWORD *)&v47 + 1) = String;
    v32 = 2 * wcslen(String);
    if ( v32 >= 0xFFFE )
      LOWORD(v32) = -4;
    LOWORD(v47) = v32;
    WORD1(v47) = v32 + 2;
    v33 = RtlOpenModernAppOptionsKey((__int64)&v47, v10, &v43);
    v11 = v43;
    if ( v33 >= 0 )
      *a5 = (HANDLE)v43;
  }
  if ( v11 )
  {
    RtlQueryImageFileKeyOption(v11, L"DisableHeapLookaside", 4LL, &RtlpDisableHeapLookaside, 4, 0LL);
    RtlQueryImageFileKeyOption(v11, L"FrontEndHeapDebugOptions", 4LL, &v39, 4, 0LL);
    RtlQueryImageFileKeyOption(v11, L"ShutdownFlags", 4LL, &RtlpShutdownProcessFlags, 4, 0LL);
    RtlQueryImageFileKeyOption(v11, L"UnloadEventTraceDepth", 4LL, &v37, 4, 0LL);
  }
  if ( v37 )
    RtlpUnloadEventTraceExNumber = v37;
  v37 = 0;
  if ( v11 )
    RtlQueryImageFileKeyOption(v11, L"MaxLoaderThreads", 4LL, &v37, 4, 0LL);
  if ( v37 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v37;
  v37 = 0;
  if ( v11 )
    RtlQueryImageFileKeyOption(v11, L"UseImpersonatedDeviceMap", 4LL, &v37, 4, 0LL);
  if ( v37 )
    LdrpUseImpersonatedDeviceMap = 1;
  v37 = 0;
  if ( v11 )
    RtlQueryImageFileKeyOption(v11, L"TracingFlags", 4LL, &v37, 4, 0LL);
  if ( v37 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v37);
    v10 = (__int64)v44;
    v11 = v43;
  }
  v37 = 0;
  if ( v11
    && ((v28 = RtlQueryImageFileKeyOption(v11, L"RaiseExceptionOnPossibleDeadlock", 4LL, &v37, 4, 0LL),
         v19 = v28,
         (int)(v28 + 0x80000000) < 0)
     || v28 == -2147483643)
    || v10
    && ((v19 = RtlQueryImageFileKeyOption(v10, L"RaiseExceptionOnPossibleDeadlock", 4LL, &v37, 4, 0LL),
         (int)(v19 + 0x80000000) < 0)
     || v19 == -2147483643) )
  {
    if ( v19 >= 0 )
      RtlpRaiseExceptionOnPossibleDeadlock = v37 != 0;
  }
  v37 = 0;
  if ( v11
    && ((v29 = RtlQueryImageFileKeyOption(v11, L"LegacyDosDevicePaths", 4LL, &v37, 4, 0LL),
         v20 = v29,
         (int)(v29 + 0x80000000) < 0)
     || v29 == -2147483643)
    || v10
    && ((v20 = RtlQueryImageFileKeyOption(v10, L"LegacyDosDevicePaths", 4LL, &v37, 4, 0LL), (int)(v20 + 0x80000000) < 0)
     || v20 == -2147483643) )
  {
    if ( v20 >= 0 )
      RtlpInitializeLegacyDosDevicePathState(v37);
  }
  v37 = 0;
  if ( (int)RtlQueryImageFileKeyOption(v10, L"CFGOptions", 4LL, &v37, 4, 0LL) >= 0 && (v37 & 1) != 0 )
  {
    LdrProtectMrdata(0);
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1);
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v50[0] = 48LL;
    v50[2] = &unk_180175A58;
    v50[3] = 64LL;
    v50[1] = v10;
    v51 = 0LL;
    v21 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1LL, v50);
    v15 = v21;
    if ( v21 == -1073741772 )
    {
      LdrpLargePageDllKeyHandle = 0LL;
    }
    else if ( v21 < 0 )
    {
      goto LABEL_10;
    }
  }
  RtlQueryImageFileKeyOption(v10, L"MinimumStackCommitInBytes", 4LL, &v37, 4, 0LL);
  if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v37 )
    *(_QWORD *)(a2 + 792) = v37;
  for ( i = 0LL; i != 6; i += 2LL )
  {
    v23 = (&off_1801759E8)[i];
    v37 = 0;
    RtlQueryImageFileKeyOption(v10, v23, 4LL, &v37, 4, 0LL);
    v24 = *(bool **)((char *)&off_1801759F0 + i * 8);
    *v24 = v37 != 0;
  }
  v37 = 0;
  RtlQueryImageFileKeyOption(v10, L"MaxDeadActivationContexts", 4LL, &v37, 4, 0LL);
  v6 = v48;
  if ( v37 )
    g_SxsMaxDeadActivationContexts = v37;
  v37 = 0;
  if ( (int)RtlQueryImageFileKeyOption(v10, L"ImageExpansionMitigation", 4LL, &v37, 4, 0LL) >= 0 )
    LdrpImageExpansionMitigation = v37;
  v9 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
  if ( v11
    && ((v30 = RtlQueryImageFileKeyOption(v11, L"GlobalFlag", 4LL, &v38, 4, 0LL), v25 = v30, (int)(v30 + 0x80000000) < 0)
     || v30 == -2147483643) )
  {
    v12 = v11;
  }
  else
  {
    if ( !v10 )
      goto LABEL_71;
    v25 = RtlQueryImageFileKeyOption(v10, L"GlobalFlag", 4LL, &v38, 4, 0LL);
    if ( (int)(v25 + 0x80000000) >= 0 && v25 != -2147483643 )
      goto LABEL_71;
    v12 = v10;
  }
  if ( v25 >= 0 )
  {
    v36 = v38;
    if ( (v38 & 0x2000100) != 0 )
    {
      if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v11, v10) )
      {
        v36 &= 0xFDFFFEFF;
        v38 = v36;
      }
      if ( (v36 & 0x2000100) != 0 )
      {
        if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v40, &v41) < 0 )
          goto LABEL_71;
        if ( !v41 )
        {
          v36 &= 0xFDFFFEFF;
          v38 = v36;
        }
      }
    }
    *(_DWORD *)(a2 + 188) = v36;
  }
LABEL_71:
  if ( v11
    && ((v31 = RtlQueryImageFileKeyOption(v11, L"GlobalFlag2", 4LL, &v38, 4, 0LL), v26 = v31,
                                                                                   (int)(v31 + 0x80000000) < 0)
     || v31 == -2147483643)
    || v10
    && ((v26 = RtlQueryImageFileKeyOption(v10, L"GlobalFlag2", 4LL, &v38, 4, 0LL), (int)(v26 + 0x80000000) < 0)
     || v26 == -2147483643) )
  {
    if ( v26 >= 0 )
      *(_DWORD *)(a2 + 1988) = v38;
  }
  v12 &= -(__int64)((*(_DWORD *)(a2 + 188) & 0x2000100) != 0);
  v8 = (*(_DWORD *)(a2 + 188) & 0x2000100) == 0;
  v37 = 0;
  if ( v11
    && ((v27 = RtlQueryImageFileKeyOption(v11, L"QueryProcessModuleInformationLoopDetectorCount", 4LL, &v37, 4, 0LL),
         (int)(v27 + 0x80000000) < 0)
     || v27 == -2147483643)
    || v10
    && ((v27 = RtlQueryImageFileKeyOption(v10, L"QueryProcessModuleInformationLoopDetectorCount", 4LL, &v37, 4, 0LL),
         (int)(v27 + 0x80000000) < 0)
     || v27 == -2147483643) )
  {
    if ( v27 >= 0 )
      LdrpQueryProcessModuleInformationLoopDetectorCount = v37;
  }
LABEL_2:
  if ( LdrControlFlowGuardEnforced() )
    v39 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v39, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
  if ( v8 && !LdrpIsSecureProcess && (MEMORY[0x7FFE03A0] & 1) != 0 )
  {
    if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v40, v13, &Handle) < 0 )
    {
      Handle = 0LL;
    }
    else if ( (int)RtlQueryImageFileKeyOption(Handle, L"GlobalFlag", 4LL, &v38, 4, 0LL) >= 0 )
    {
      LODWORD(v12) = (_DWORD)Handle;
      *(_DWORD *)(a2 + 188) |= v38 & 0x2000100;
    }
  }
  v15 = 0;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || (unsigned __int8)LdrpPayloadRestrictionMitigationsEnabled() )
  {
    LOBYTE(v14) = v9;
    v16 = LdrpInitializeApplicationVerifierPackage((_DWORD)v40, a2, v14, v12, v45[0], v49);
    v15 = v16;
    if ( v16 < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        10296,
        (__int64)"LdrpInitializeExecutionOptions",
        0,
        "Initializing the application verifier package failed with status 0x%08lx\n",
        v16);
      goto LABEL_10;
    }
  }
  else if ( !v11 && !v10 )
  {
    if ( *(_BYTE *)(a2 + 2) )
    {
      v45[1] = (__int64)v50;
      HIDWORD(v45[0]) = 0;
      WORD1(v45[0]) = 32;
      v34 = *(_QWORD *)(a2 + 32);
      v40 = 0LL;
      EnvironmentVariable = RtlQueryEnvironmentVariable(
                              *(_WORD **)(v34 + 128),
                              L"_NO_DEBUG_HEAP",
                              0xEuLL,
                              v50,
                              0x10uLL,
                              (unsigned __int64 *)&v40);
      if ( (unsigned __int64)v40 > 0x7FFF
        || EnvironmentVariable == -1073741789
        || (LOWORD(v45[0]) = 2 * (_WORD)v40, EnvironmentVariable < 0)
        || (v15 = RtlUnicodeStringToInteger((unsigned __int16 *)v45, 0, (int *)&v37), v15 < 0)
        || !v37 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
    *(_DWORD *)(a2 + 1984) |= 1u;
  if ( v15 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(v10);
    goto LABEL_22;
  }
LABEL_10:
  v17 = v46;
  if ( *v46 )
  {
    NtClose(*v46);
    *v17 = 0LL;
  }
  if ( *v6 )
  {
    NtClose(*v6);
    *v6 = 0LL;
  }
LABEL_22:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v15;
}
