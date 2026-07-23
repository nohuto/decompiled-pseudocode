/*
 * XREFs of LdrpLogInternal @ 0x18007B390
 * Callers:
 *     LdrpFindDllActivationContext @ 0x180003670 (LdrpFindDllActivationContext.c)
 *     LdrpPrepareModuleForExecution @ 0x180007794 (LdrpPrepareModuleForExecution.c)
 *     LdrpDynamicShimModule @ 0x18000876C (LdrpDynamicShimModule.c)
 *     LdrpReportError @ 0x180008910 (LdrpReportError.c)
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     LdrpGetProcedureAddress @ 0x1800149E0 (LdrpGetProcedureAddress.c)
 *     LdrLoadDll @ 0x180014E40 (LdrLoadDll.c)
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpAllocateTls @ 0x180020710 (LdrpAllocateTls.c)
 *     LdrpDoPostSnapWork @ 0x180020D90 (LdrpDoPostSnapWork.c)
 *     LdrResolveDelayLoadedAPI @ 0x180021000 (LdrResolveDelayLoadedAPI.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180023540 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpInitializeProcessHeap @ 0x180034DF8 (LdrpInitializeProcessHeap.c)
 *     LdrpDetectDetour @ 0x18003A320 (LdrpDetectDetour.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     LdrpFindLoadedDll @ 0x1800492A0 (LdrpFindLoadedDll.c)
 *     LdrGetDllHandle @ 0x180049620 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x180049800 (LdrGetDllHandleEx.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180049B30 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFindKnownDll @ 0x18006D200 (LdrpFindKnownDll.c)
 *     LdrpMinimalMapModule @ 0x18006D7B0 (LdrpMinimalMapModule.c)
 *     LdrpCompleteMapModule @ 0x18006DBC0 (LdrpCompleteMapModule.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18006FA38 (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpProcessWork @ 0x18006FC70 (LdrpProcessWork.c)
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180070A70 (LdrpResolveDllName.c)
 *     LdrpCheckModule @ 0x180071F80 (LdrpCheckModule.c)
 *     LdrpCheckRedirection @ 0x180072D28 (LdrpCheckRedirection.c)
 *     LdrpInitializeNode @ 0x180073610 (LdrpInitializeNode.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     LdrpComputeLazyDllPath @ 0x1800AC120 (LdrpComputeLazyDllPath.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800B0728 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800B270C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeTls @ 0x1800B7E90 (LdrpInitializeTls.c)
 *     LdrpInitializeKernel32Functions @ 0x1800CB874 (LdrpInitializeKernel32Functions.c)
 *     LdrpFindLoadedDllInternal @ 0x1800CBC80 (LdrpFindLoadedDllInternal.c)
 *     LdrInitShimEngineDynamic @ 0x1800D01B0 (LdrInitShimEngineDynamic.c)
 *     LdrpLoadWow64 @ 0x1800D0A34 (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800D0BF0 (LdrpInitShimEngine.c)
 *     LdrpInitializeDllPath @ 0x1800D1140 (LdrpInitializeDllPath.c)
 *     LdrpGetShimEngineInterface @ 0x1800D11F0 (LdrpGetShimEngineInterface.c)
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x1800D1ABC (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializationFailure @ 0x1800D1C78 (LdrpInitializationFailure.c)
 *     LdrpWaitForInitializationComplete @ 0x1800D23D0 (LdrpWaitForInitializationComplete.c)
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800DC5E0 (LdrpRedirectDelayloadFailure.c)
 *     LdrpProcessDetachNode @ 0x1800DFDC4 (LdrpProcessDetachNode.c)
 *     LdrpRelocateImage @ 0x1800E3E8C (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E3FFC (LdrpProtectAndRelocateImage.c)
 *     LdrpMergeNodes @ 0x1800EF5D4 (LdrpMergeNodes.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800F2010 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F6570 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800FB008 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpInitializeImportRedirection @ 0x1800FC888 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FD1A4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrShutdownProcess @ 0x1800FDE80 (LdrShutdownProcess.c)
 *     LdrGetKnownDllSectionHandle @ 0x18010CBD0 (LdrGetKnownDllSectionHandle.c)
 *     LdrpLoadDependentModuleW @ 0x1801196EC (LdrpLoadDependentModuleW.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 *     LdrpLoadPatchImage @ 0x1801600BC (LdrpLoadPatchImage.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x180160314 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x18016039C (LdrpIsSubstringFound.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlUTF8ToUnicodeN @ 0x18004B290 (RtlUTF8ToUnicodeN.c)
 *     RtlStringCchPrintfExW @ 0x18007B880 (RtlStringCchPrintfExW.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x18007BAE0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     LdrpEtwLogLoaderSnaps @ 0x18011AC60 (LdrpEtwLogLoaderSnaps.c)
 *     LdrpLogDbgPrint @ 0x18011EFA4 (LdrpLogDbgPrint.c)
 *     _vsnprintf @ 0x180124560 (_vsnprintf.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
    if ( qword_1801D47E8 )
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
      v36 = (&off_1801753A8)[v7];
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
          CodePage = Utf8TableInfo;
          p_MultiByteTable = (unsigned __int16 **)&xmmword_1801CF070;
          DBCSCodePage = WORD6(Utf8TableInfo);
          MultiByteTable = (unsigned __int16 *)xmmword_1801CF070;
          DBCSOffsets = (unsigned __int16 *)qword_1801CF088;
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
  if ( ((unsigned int)result & dword_180176094[2 * v7]) != 0 )
    __debugbreak();
  return result;
}
