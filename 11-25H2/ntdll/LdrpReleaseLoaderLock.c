/*
 * XREFs of LdrpReleaseLoaderLock @ 0x180007A00
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x180007794 (LdrpPrepareModuleForExecution.c)
 *     RtlExitUserProcess @ 0x180008E40 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 *     LdrUnlockLoaderLock @ 0x18003F1D0 (LdrUnlockLoaderLock.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x18006BDD0 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrpInitializeThread @ 0x180073EB0 (LdrpInitializeThread.c)
 *     LdrInitShimEngineDynamic @ 0x1800D01B0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrEnumerateLoadedModules @ 0x1800F04E0 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeImportRedirection @ 0x1800FC888 (LdrpInitializeImportRedirection.c)
 *     LdrpCompleteProcessCloning @ 0x1801620DC (LdrpCompleteProcessCloning.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpReleaseLoaderLock(__int64 a1, char a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  _DWORD *SharedData; // rdx
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  char *v14; // rcx

  v3 = a3;
  v5 = 2147353477LL;
  v7 = RtlLeaveCriticalSection(&LdrpLoaderLock);
  v10 = 2147353476LL;
  if ( (int)v3 < 0 )
  {
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v14 = (unsigned int)RtlGetCurrentServiceSessionId(v11, SharedData, v8, v9)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v14 & 0x20) != 0 )
        LdrpLogEtwEvent(5284, v3, 162, a2, 0LL, 0LL);
    }
  }
  v12 = NtCurrentPeb()->SharedData;
  if ( v12 && *v12 )
    v10 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, SharedData, v8, v9) )
      v5 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v5 & 0x20) != 0 )
      LdrpLogEtwEvent(5282, 0LL, 0, a2, 0LL, 0LL);
  }
  return v7;
}
