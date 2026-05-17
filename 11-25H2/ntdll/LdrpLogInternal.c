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
    if ( qword_1801D47E8 )
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
      v37 = (&off_1801753A8)[v8];
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
        if ( word_1801CEFD0 == -535 || GlobalRtlNlsState == -535 )
        {
          v15 = Utf8TableInfo;
          v16 = (__int64 *)&xmmword_1801CF070;
          v17 = WORD6(Utf8TableInfo);
          v18 = xmmword_1801CF070;
          v19 = qword_1801CF088;
        }
        else
        {
          _InterlockedOr(v35, 0);
          v15 = GlobalRtlNlsState;
          v16 = &qword_1801CEFB0;
          v17 = word_1801CEF9C;
          v18 = qword_1801CEFB0;
          v19 = qword_1801CEFC8;
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
  if ( ((unsigned int)result & dword_180176094[2 * v8]) != 0 )
    __debugbreak();
  return result;
}
