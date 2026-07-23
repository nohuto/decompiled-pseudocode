/*
 * XREFs of LdrpLogInternal @ 0x180040780
 * Callers:
 *     LdrpComputeLazyDllPath @ 0x180005C40 (LdrpComputeLazyDllPath.c)
 *     LdrpInitializeProcessHeap @ 0x18002385C (LdrpInitializeProcessHeap.c)
 *     LdrpInitializeTls @ 0x1800266A4 (LdrpInitializeTls.c)
 *     LdrpFindDllActivationContext @ 0x18002CE50 (LdrpFindDllActivationContext.c)
 *     LdrpPrepareModuleForExecution @ 0x1800315A4 (LdrpPrepareModuleForExecution.c)
 *     LdrpDynamicShimModule @ 0x18003257C (LdrpDynamicShimModule.c)
 *     LdrpReportError @ 0x180032720 (LdrpReportError.c)
 *     LdrpDoPostSnapWork @ 0x180033DC0 (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180034300 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpGetShimEngineInterface @ 0x180036888 (LdrpGetShimEngineInterface.c)
 *     LdrpFindLoadedDll @ 0x180036E00 (LdrpFindLoadedDll.c)
 *     LdrGetDllHandle @ 0x180037180 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x180037360 (LdrGetDllHandleEx.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180037690 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpAllocateTls @ 0x18003EF80 (LdrpAllocateTls.c)
 *     LdrpCallTlsInitializers @ 0x18003F930 (LdrpCallTlsInitializers.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800498A0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18004EC5C (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 *     LdrpGetProcedureAddress @ 0x18006E980 (LdrpGetProcedureAddress.c)
 *     LdrLoadDll @ 0x18006EDE0 (LdrLoadDll.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     LdrpDetectDetour @ 0x180089480 (LdrpDetectDetour.c)
 *     LdrpInitializeNode @ 0x18008C3E0 (LdrpInitializeNode.c)
 *     LdrpCheckModule @ 0x18008DC60 (LdrpCheckModule.c)
 *     LdrpCheckRedirection @ 0x18008EA08 (LdrpCheckRedirection.c)
 *     LdrpMinimalMapModule @ 0x18008F820 (LdrpMinimalMapModule.c)
 *     LdrpCompleteMapModule @ 0x18008FC20 (LdrpCompleteMapModule.c)
 *     LdrpFindKnownDll @ 0x180091630 (LdrpFindKnownDll.c)
 *     LdrpSearchPath @ 0x180091DD0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180092430 (LdrpResolveDllName.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800A3254 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800A523C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrShutdownProcess @ 0x1800ABBC0 (LdrShutdownProcess.c)
 *     LdrInitShimEngineDynamic @ 0x1800ACB80 (LdrInitShimEngineDynamic.c)
 *     LdrpLoadWow64 @ 0x1800AD1EC (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800AD3A8 (LdrpInitShimEngine.c)
 *     LdrpInitializeDllPath @ 0x1800AD900 (LdrpInitializeDllPath.c)
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x1800ADD0C (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializationFailure @ 0x1800AE1D4 (LdrpInitializationFailure.c)
 *     LdrpWaitForInitializationComplete @ 0x1800AE930 (LdrpWaitForInitializationComplete.c)
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpInitializeKernel32Functions @ 0x1800C6FD8 (LdrpInitializeKernel32Functions.c)
 *     LdrpFindLoadedDllInternal @ 0x1800C73E0 (LdrpFindLoadedDllInternal.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800D9830 (LdrpRedirectDelayloadFailure.c)
 *     LdrpProcessDetachNode @ 0x1800DE6E4 (LdrpProcessDetachNode.c)
 *     LdrpRelocateImage @ 0x1800E036C (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E04DC (LdrpProtectAndRelocateImage.c)
 *     LdrpMergeNodes @ 0x1800E95CC (LdrpMergeNodes.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800EB3E0 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800EF5B0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800F3FB8 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpInitializeImportRedirection @ 0x1800F56E8 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800F5EA4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrGetKnownDllSectionHandle @ 0x180105090 (LdrGetKnownDllSectionHandle.c)
 *     LdrpLoadDependentModuleW @ 0x180111730 (LdrpLoadDependentModuleW.c)
 *     LdrpGenericExceptionFilter @ 0x180113530 (LdrpGenericExceptionFilter.c)
 *     LdrpLoadPatchImage @ 0x18015CFBC (LdrpLoadPatchImage.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015D1D0 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x18015D258 (LdrpIsSubstringFound.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180038DF0 (RtlUTF8ToUnicodeN.c)
 *     RtlStringCchPrintfExW @ 0x180040C70 (RtlStringCchPrintfExW.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180040ED0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrpEtwLogLoaderSnaps @ 0x180112B50 (LdrpEtwLogLoaderSnaps.c)
 *     LdrpLogDbgPrint @ 0x18011B904 (LdrpLogDbgPrint.c)
 *     _vsnprintf @ 0x180120CB0 (_vsnprintf.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 LdrpLogInternal(_QWORD a1, int a2, __int64 a3, int a4, char *Format, ...)
{
  __int64 v7; // rbx
  unsigned int v8; // edi
  int Args; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int64 UTF8StringByteCount; // rdx
  unsigned __int16 CodePage; // cx
  unsigned __int16 **p_MultiByteTable; // r11
  unsigned __int16 DBCSCodePage; // ax
  unsigned __int16 *MultiByteTable; // r10
  unsigned __int16 *DBCSOffsets; // r15
  char *v19; // r9
  WCHAR *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *SharedData; // rcx
  __int64 v26; // rcx
  va_list v27; // rdi
  __int64 result; // rax
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int8 *v32; // r9
  __int64 v33; // rcx
  signed __int32 v34[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h]
  char *v36; // [rsp+48h] [rbp-C0h]
  ULONG UnicodeStringActualByteCount[2]; // [rsp+58h] [rbp-B0h] BYREF
  va_list ArgList; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h]
  _WORD v41[2]; // [rsp+78h] [rbp-90h] BYREF
  int v42; // [rsp+7Ch] [rbp-8Ch]
  wchar_t *v43; // [rsp+80h] [rbp-88h]
  _WORD v44[2]; // [rsp+88h] [rbp-80h] BYREF
  int v45; // [rsp+8Ch] [rbp-7Ch]
  WCHAR *v46; // [rsp+90h] [rbp-78h]
  char Buffer[256]; // [rsp+98h] [rbp-70h] BYREF
  wchar_t v48[128]; // [rsp+198h] [rbp+90h] BYREF
  WCHAR UnicodeStringDestination[256]; // [rsp+298h] [rbp+190h] BYREF
  va_list va; // [rsp+520h] [rbp+418h] BYREF

  va_start(va, Format);
  va_copy(ArgList, va);
  v7 = 2LL * a4;
  v42 = 0;
  v45 = 0;
  if ( (unsigned int)(a4 - 2) > 2 )
  {
    if ( qword_1801D1798 )
    {
      v8 = 256;
      memset_thunk_772440563353939046(v48, 0, 0x100uLL);
      memset_thunk_772440563353939046(UnicodeStringDestination, 0, 0x200uLL);
      v41[1] = 256;
      v43 = v48;
      UnicodeStringActualByteCount[0] = 0;
      v44[1] = 512;
      v40 = 0LL;
      v46 = UnicodeStringDestination;
      memset_thunk_772440563353939046(Buffer, 0, 0x100uLL);
      Args = (int)NtCurrentTeb()->ClientId.UniqueThread;
      v36 = (&off_180172408)[v7];
      v35 = a3;
      v10 = RtlStringCchPrintfExW(v48, 0, (wchar_t *)L"%x-%S-%S-", Args);
      if ( !v10 || v10 == -2147483643 )
      {
        v41[0] = 2 * (128 - v40);
        v11 = vsnprintf(Buffer, 0xFFuLL, Format, ArgList);
        if ( v11 < 0 || (unsigned __int64)v11 > 0xFE )
        {
          v12 = 1;
          Buffer[255] = 0;
        }
        else
        {
          v12 = 256 - v11;
        }
        UTF8StringByteCount = (unsigned int)(256 - v12);
        v44[0] = 2 * (256 - v12);
        _InterlockedOr(v34, 0);
        LODWORD(v39) = 65001;
        if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
        {
          CodePage = LOWORD(Utf8TableInfo.m512_f32[0]);
          p_MultiByteTable = (unsigned __int16 **)&Utf8TableInfo.m512_f32[8];
          DBCSCodePage = LOWORD(Utf8TableInfo.m512_f32[3]);
          MultiByteTable = *(unsigned __int16 **)&Utf8TableInfo.m512_f32[8];
          DBCSOffsets = *(unsigned __int16 **)&Utf8TableInfo.m512_f32[14];
        }
        else
        {
          _InterlockedOr(v34, 0);
          CodePage = GlobalRtlNlsState.CodePage;
          p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
          DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
          MultiByteTable = GlobalRtlNlsState.MultiByteTable;
          DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
        }
        v19 = Buffer;
        v20 = UnicodeStringDestination;
        if ( CodePage == (_WORD)v39 )
        {
          if ( (_DWORD)UTF8StringByteCount )
            RtlUTF8ToUnicodeN(
              UnicodeStringDestination,
              0x200u,
              UnicodeStringActualByteCount,
              Buffer,
              UTF8StringByteCount);
          else
            UnicodeStringActualByteCount[0] = 0;
        }
        else if ( DBCSCodePage )
        {
          while ( v8 && (_DWORD)UTF8StringByteCount )
          {
            --v8;
            UTF8StringByteCount = (unsigned int)(UTF8StringByteCount - 1);
            v30 = (unsigned __int8)*v19;
            v31 = DBCSOffsets[v30];
            if ( (_WORD)v31 )
            {
              if ( !(_DWORD)UTF8StringByteCount )
              {
                *v20 = 0;
                LODWORD(v20) = (_DWORD)v20 + 2;
                break;
              }
              v32 = (unsigned __int8 *)(v19 + 1);
              UTF8StringByteCount = (unsigned int)(UTF8StringByteCount - 1);
              *v20++ = DBCSOffsets[*v32 + v31];
              v19 = (char *)(v32 + 1);
            }
            else
            {
              *v20++ = (*p_MultiByteTable)[v30];
              ++v19;
            }
          }
          v20 = (WCHAR *)((unsigned int)v20 - (unsigned int)UnicodeStringDestination);
          UnicodeStringActualByteCount[0] = (unsigned int)v20;
        }
        else
        {
          if ( (unsigned int)UTF8StringByteCount <= 0x100 )
            v8 = UTF8StringByteCount;
          UnicodeStringActualByteCount[0] = 2 * v8;
          if ( v8 )
          {
            UTF8StringByteCount = (unsigned __int64)Buffer;
            v19 = (char *)v8;
            v20 = UnicodeStringDestination;
            do
            {
              v21 = *(unsigned __int8 *)UTF8StringByteCount;
              ++v20;
              ++UTF8StringByteCount;
              *(v20 - 1) = MultiByteTable[v21];
              --v19;
            }
            while ( v19 );
          }
        }
        LdrpAddUnicodeStringToSnapsBuffer(v41, UTF8StringByteCount, v20, v19);
        LdrpAddUnicodeStringToSnapsBuffer(v44, v22, v23, v24);
      }
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v26 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v26 = 2147353476LL;
  if ( *(_BYTE *)v26
    && (NtCurrentPeb()->TracingFlags & 4) != 0
    && (!RtlGetCurrentServiceSessionId() ? (v33 = 2147353477LL) : (v33 = (__int64)NtCurrentPeb()->SharedData + 555),
        *(char *)v33 < 0) )
  {
    va_copy(v27, ArgList);
    LdrpEtwLogLoaderSnaps(a3, a4, Format, ArgList);
  }
  else
  {
    va_copy(v27, ArgList);
  }
  result = (unsigned int)LdrpDebugFlags;
  v29 = LdrpLogLevelStateTable[2 * v7] | 1;
  if ( (v29 & LdrpDebugFlags) != 0 && ((LdrpDebugFlags & 0x80u) == 0 || LdrpIsSecureProcess) )
  {
    LdrpLogDbgPrint(v29, a2, a3, a4, (__int64)Format, (__int64)v27);
    result = (unsigned int)LdrpDebugFlags;
  }
  if ( ((unsigned int)result & dword_180173084[2 * v7]) != 0 )
    __debugbreak();
  return result;
}
