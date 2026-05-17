/*
 * XREFs of LdrpReleaseLoaderLock @ 0x180004E10
 * Callers:
 *     LdrEnumerateLoadedModules @ 0x180001F90 (LdrEnumerateLoadedModules.c)
 *     LdrUnlockLoaderLock @ 0x180003D60 (LdrUnlockLoaderLock.c)
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     LdrpPrepareModuleForExecution @ 0x180004BA4 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     LdrInitShimEngineDynamic @ 0x180064C50 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x1800B2410 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrpInitializeImportRedirection @ 0x1800FA988 (LdrpInitializeImportRedirection.c)
 *     LdrpCompleteProcessCloning @ 0x180160B48 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpReleaseLoaderLock(__int64 a1, unsigned __int8 a2, int a3)
{
  __int64 v5; // rbp
  unsigned int v6; // edi
  __int64 v7; // rbx
  _DWORD *SharedData; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  int v12; // r8d
  char *v13; // rcx

  v5 = 2147353477LL;
  v6 = RtlLeaveCriticalSection(&LdrpLoaderLock);
  v7 = 2147353476LL;
  if ( a3 < 0 )
  {
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v9 = 2147353476LL;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v13 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v13 & 0x20) != 0 )
      {
        LOBYTE(v12) = -94;
        LdrpLogEtwEvent(5284, a3, v12, a2, 0LL, 0LL);
      }
    }
  }
  v10 = NtCurrentPeb()->SharedData;
  if ( v10 && *v10 )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v5 & 0x20) != 0 )
      LdrpLogEtwEvent(5282, 0, 0, a2, 0LL, 0LL);
  }
  return v6;
}
