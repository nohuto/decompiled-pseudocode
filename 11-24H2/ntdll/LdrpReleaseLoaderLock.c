/*
 * XREFs of LdrpReleaseLoaderLock @ 0x180031810
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x1800315A4 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeThread @ 0x18003F210 (LdrpInitializeThread.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x18007ECB0 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrEnumerateLoadedModules @ 0x1800AAC50 (LdrEnumerateLoadedModules.c)
 *     RtlExitUserProcess @ 0x1800AAE10 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     LdrInitShimEngineDynamic @ 0x1800ACB80 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrUnlockLoaderLock @ 0x1800F22A0 (LdrUnlockLoaderLock.c)
 *     LdrpInitializeImportRedirection @ 0x1800F56E8 (LdrpInitializeImportRedirection.c)
 *     LdrpCompleteProcessCloning @ 0x18015EF08 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall LdrpReleaseLoaderLock(__int64 a1, char a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  unsigned __int32 v6; // edi
  __int64 v7; // rbx
  _DWORD *SharedData; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  char *v12; // rcx

  v3 = a3;
  v5 = 2147353477LL;
  v6 = RtlLeaveCriticalSection(&LdrpLoaderLock);
  v7 = 2147353476LL;
  if ( (int)v3 < 0 )
  {
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v9 = 2147353476LL;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v12 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v12 & 0x20) != 0 )
        LdrpLogEtwEvent(5284, v3, 162, a2, 0LL, 0LL);
    }
  }
  v10 = NtCurrentPeb()->SharedData;
  if ( v10 && *v10 )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v5 & 0x20) != 0 )
      LdrpLogEtwEvent(5282, 0LL, 0, a2, 0LL, 0LL);
  }
  return v6;
}
