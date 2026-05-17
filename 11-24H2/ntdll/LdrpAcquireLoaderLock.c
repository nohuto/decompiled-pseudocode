/*
 * XREFs of LdrpAcquireLoaderLock @ 0x18001CD20
 * Callers:
 *     LdrEnumerateLoadedModules @ 0x180001F90 (LdrEnumerateLoadedModules.c)
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     LdrpPrepareModuleForExecution @ 0x180004BA4 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18001C830 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrInitShimEngineDynamic @ 0x180064C50 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x1800B25B0 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     LdrLockLoaderLock @ 0x1800F3720 (LdrLockLoaderLock.c)
 *     LdrpInitializeImportRedirection @ 0x1800FA988 (LdrpInitializeImportRedirection.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpAcquireLoaderLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // r9d
  char *v21; // rcx
  int v22; // r9d

  v7 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v8 = 2147353476LL;
  v9 = 2147353477LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v21 = (unsigned int)RtlGetCurrentServiceSessionId(v8, v4, v5, v6)
        ? (char *)NtCurrentPeb()->SharedData + 555
        : (char *)2147353477;
    if ( (*v21 & 0x20) != 0 )
    {
      LOBYTE(v20) = -1;
      LdrpLogEtwEvent(5248, -1, 255, v20, 0LL, 0LL);
    }
  }
  v10 = RtlEnterCriticalSection((__int64)&LdrpLoaderLock);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11, v13, v14) )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15, v17, v18) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v9 & 0x20) != 0 )
    {
      LOBYTE(v22) = -1;
      LdrpLogEtwEvent(5249, -1, 255, v22, 0LL, 0LL);
    }
  }
  return v10;
}
