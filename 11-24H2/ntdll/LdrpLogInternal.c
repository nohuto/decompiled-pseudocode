/*
 * XREFs of LdrpLogInternal @ 0x180013D80
 * Callers:
 *     LdrShutdownProcess @ 0x180002B70 (LdrShutdownProcess.c)
 *     LdrpInitializeKernel32Functions @ 0x1800032B8 (LdrpInitializeKernel32Functions.c)
 *     LdrpFindLoadedDllInternal @ 0x1800036C0 (LdrpFindLoadedDllInternal.c)
 *     LdrpPrepareModuleForExecution @ 0x180004BA4 (LdrpPrepareModuleForExecution.c)
 *     LdrpDynamicShimModule @ 0x180005B7C (LdrpDynamicShimModule.c)
 *     LdrpReportError @ 0x180005D20 (LdrpReportError.c)
 *     LdrpDoPostSnapWork @ 0x1800073C0 (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180007900 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpGetShimEngineInterface @ 0x180009E88 (LdrpGetShimEngineInterface.c)
 *     LdrpFindLoadedDll @ 0x18000A400 (LdrpFindLoadedDll.c)
 *     LdrGetDllHandle @ 0x18000A780 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x18000A960 (LdrGetDllHandleEx.c)
 *     LdrpGetProcApphelpCheckModule @ 0x18000AC90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpAllocateTls @ 0x180012580 (LdrpAllocateTls.c)
 *     LdrpCallTlsInitializers @ 0x180012F30 (LdrpCallTlsInitializers.c)
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     LdrResolveDelayLoadedAPI @ 0x18001CEA0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18002225C (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 *     LdrpGetProcedureAddress @ 0x180058DA0 (LdrpGetProcedureAddress.c)
 *     LdrLoadDll @ 0x180059200 (LdrLoadDll.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     LdrInitShimEngineDynamic @ 0x180064C50 (LdrInitShimEngineDynamic.c)
 *     LdrpLoadWow64 @ 0x18006531C (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800654D8 (LdrpInitShimEngine.c)
 *     LdrpInitializeDllPath @ 0x180065A30 (LdrpInitializeDllPath.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180065E3C (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializationFailure @ 0x180065FF8 (LdrpInitializationFailure.c)
 *     LdrpWaitForInitializationComplete @ 0x180066750 (LdrpWaitForInitializationComplete.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpDetectDetour @ 0x18006CBA0 (LdrpDetectDetour.c)
 *     LdrpInitializeNode @ 0x18006FB00 (LdrpInitializeNode.c)
 *     LdrpCheckModule @ 0x180071380 (LdrpCheckModule.c)
 *     LdrpCheckRedirection @ 0x180072128 (LdrpCheckRedirection.c)
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
 *     LdrpCompleteMapModule @ 0x180073340 (LdrpCompleteMapModule.c)
 *     LdrpFindKnownDll @ 0x180074D50 (LdrpFindKnownDll.c)
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180075B50 (LdrpResolveDllName.c)
 *     LdrpComputeLazyDllPath @ 0x180083D90 (LdrpComputeLazyDllPath.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x180087790 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x18008977C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeTls @ 0x18008ECD0 (LdrpInitializeTls.c)
 *     LdrpFindDllActivationContext @ 0x180098000 (LdrpFindDllActivationContext.c)
 *     LdrpInitializeProcessHeap @ 0x1800A5FB8 (LdrpInitializeProcessHeap.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800DE6C0 (LdrpRedirectDelayloadFailure.c)
 *     LdrpProcessDetachNode @ 0x1800E3114 (LdrpProcessDetachNode.c)
 *     LdrpRelocateImage @ 0x1800E4EBC (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E502C (LdrpProtectAndRelocateImage.c)
 *     LdrpMergeNodes @ 0x1800EE3EC (LdrpMergeNodes.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800F0760 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F4990 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800F93E8 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpInitializeImportRedirection @ 0x1800FA988 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FAF6C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrGetKnownDllSectionHandle @ 0x18010A160 (LdrGetKnownDllSectionHandle.c)
 *     LdrpLoadDependentModuleW @ 0x1801164FC (LdrpLoadDependentModuleW.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 *     LdrpLoadPatchImage @ 0x18015EBFC (LdrpLoadPatchImage.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015EE10 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x18015EE98 (LdrpIsSubstringFound.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18000C3F0 (RtlUTF8ToUnicodeN.c)
 *     RtlStringCchPrintfExW @ 0x180014270 (RtlStringCchPrintfExW.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800144D0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpEtwLogLoaderSnaps @ 0x180117A20 (LdrpEtwLogLoaderSnaps.c)
 *     LdrpLogDbgPrint @ 0x18011D6D4 (LdrpLogDbgPrint.c)
 *     _vsnprintf @ 0x180122A80 (_vsnprintf.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLogInternal(__int64 a1, int a2, __int64 a3, int a4, char *Format, char a6)
{
  __int64 v8; // rbx
  unsigned int v9; // edi
  int Args; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int16 v15; // cx
  __int64 *v16; // r11
  __int16 v17; // ax
  __int64 v18; // r10
  __int64 v19; // r15
  char *v20; // r9
  _WORD *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *SharedData; // rcx
  __int64 v27; // rcx
  va_list v28; // rdi
  __int64 result; // rax
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int8 *v33; // r9
  __int64 v34; // rcx
  signed __int32 v35[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C8h]
  char *v37; // [rsp+48h] [rbp-C0h]
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  va_list ArgList; // [rsp+60h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h]
  _WORD v42[2]; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+7Ch] [rbp-8Ch]
  wchar_t *v44; // [rsp+80h] [rbp-88h]
  _WORD v45[2]; // [rsp+88h] [rbp-80h] BYREF
  int v46; // [rsp+8Ch] [rbp-7Ch]
  _WORD *v47; // [rsp+90h] [rbp-78h]
  char Buffer[256]; // [rsp+98h] [rbp-70h] BYREF
  wchar_t v49[128]; // [rsp+198h] [rbp+90h] BYREF
  _WORD v50[256]; // [rsp+298h] [rbp+190h] BYREF

  ArgList = &a6;
  v8 = 2LL * a4;
  v43 = 0;
  v46 = 0;
  if ( (unsigned int)(a4 - 2) > 2 )
  {
    if ( qword_1801D2798 )
    {
      v9 = 256;
      memset_thunk_772440563353939046(v49, 0, 0x100uLL);
      memset_thunk_772440563353939046(v50, 0, 0x200uLL);
      v42[1] = 256;
      v44 = v49;
      LODWORD(v38) = 0;
      v45[1] = 512;
      v41 = 0LL;
      v47 = v50;
      memset_thunk_772440563353939046(Buffer, 0, 0x100uLL);
      Args = (int)NtCurrentTeb()->ClientId.UniqueThread;
      v37 = (&off_180173018)[v8];
      v36 = a3;
      v11 = RtlStringCchPrintfExW(v49, 0, (wchar_t *)L"%x-%S-%S-", Args);
      if ( !v11 || v11 == -2147483643 )
      {
        v42[0] = 2 * (128 - v41);
        v12 = vsnprintf(Buffer, 0xFFuLL, Format, ArgList);
        if ( v12 < 0 || (unsigned __int64)v12 > 0xFE )
        {
          v13 = 1;
          Buffer[255] = 0;
        }
        else
        {
          v13 = 256 - v12;
        }
        v14 = (unsigned int)(256 - v13);
        v45[0] = 2 * (256 - v13);
        _InterlockedOr(v35, 0);
        LODWORD(v40) = 65001;
        if ( word_1801CCFD0 == -535 || GlobalRtlNlsState == -535 )
        {
          v15 = Utf8TableInfo;
          v16 = (__int64 *)&xmmword_1801CD070;
          v17 = WORD6(Utf8TableInfo);
          v18 = xmmword_1801CD070;
          v19 = qword_1801CD088;
        }
        else
        {
          _InterlockedOr(v35, 0);
          v15 = GlobalRtlNlsState;
          v16 = &qword_1801CCFB0;
          v17 = word_1801CCF9C;
          v18 = qword_1801CCFB0;
          v19 = qword_1801CCFC8;
        }
        v20 = Buffer;
        v21 = v50;
        if ( v15 == (_WORD)v40 )
        {
          if ( (_DWORD)v14 )
            RtlUTF8ToUnicodeN(v50, 0x200u, &v38, Buffer, v14);
          else
            LODWORD(v38) = 0;
        }
        else if ( v17 )
        {
          while ( v9 && (_DWORD)v14 )
          {
            --v9;
            v14 = (unsigned int)(v14 - 1);
            v31 = 2LL * (unsigned __int8)*v20;
            v32 = *(unsigned __int16 *)(v19 + v31);
            if ( (_WORD)v32 )
            {
              if ( !(_DWORD)v14 )
              {
                *v21 = 0;
                LODWORD(v21) = (_DWORD)v21 + 2;
                break;
              }
              v33 = (unsigned __int8 *)(v20 + 1);
              v14 = (unsigned int)(v14 - 1);
              *v21++ = *(_WORD *)(v19 + 2 * (*v33 + v32));
              v20 = (char *)(v33 + 1);
            }
            else
            {
              *v21++ = *(_WORD *)(v31 + *v16);
              ++v20;
            }
          }
          v21 = (_WORD *)((unsigned int)v21 - (unsigned int)v50);
          LODWORD(v38) = (_DWORD)v21;
        }
        else
        {
          if ( (unsigned int)v14 <= 0x100 )
            v9 = v14;
          LODWORD(v38) = 2 * v9;
          if ( v9 )
          {
            v14 = (unsigned __int64)Buffer;
            v20 = (char *)v9;
            v21 = v50;
            do
            {
              v22 = *(unsigned __int8 *)v14;
              ++v21;
              ++v14;
              *(v21 - 1) = *(_WORD *)(v18 + 2 * v22);
              --v20;
            }
            while ( v20 );
          }
        }
        LdrpAddUnicodeStringToSnapsBuffer(v42, v14, v21, v20);
        LdrpAddUnicodeStringToSnapsBuffer(v45, v23, v24, v25);
      }
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v27 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v27 = 2147353476LL;
  if ( *(_BYTE *)v27
    && (NtCurrentPeb()->TracingFlags & 4) != 0
    && (!(unsigned int)RtlGetCurrentServiceSessionId()
      ? (v34 = 2147353477LL)
      : (v34 = (__int64)NtCurrentPeb()->SharedData + 555),
        *(char *)v34 < 0) )
  {
    v28 = ArgList;
    LdrpEtwLogLoaderSnaps(a3, a4, Format, ArgList);
  }
  else
  {
    v28 = ArgList;
  }
  result = (unsigned int)LdrpDebugFlags;
  v30 = LdrpLogLevelStateTable[2 * v8] | 1;
  if ( (v30 & LdrpDebugFlags) != 0 && ((LdrpDebugFlags & 0x80u) == 0 || LdrpIsSecureProcess) )
  {
    LdrpLogDbgPrint(v30, a2, a3, a4, (__int64)Format, (__int64)v28);
    result = (unsigned int)LdrpDebugFlags;
  }
  if ( ((unsigned int)result & dword_180174084[2 * v8]) != 0 )
    __debugbreak();
  return result;
}
