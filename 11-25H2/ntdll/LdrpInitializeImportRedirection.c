/*
 * XREFs of LdrpInitializeImportRedirection @ 0x1800FC888
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180007A00 (LdrpReleaseLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x180008690 (LdrpInitializeGraphRecurse.c)
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18004A090 (LdrpLoadDll.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpInitializeDllPath @ 0x1800D1140 (LdrpInitializeDllPath.c)
 *     LdrpDropLastInProgressCount @ 0x1800F05A0 (LdrpDropLastInProgressCount.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1801619BC (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpBuildImportRedirection @ 0x180162508 (LdrpBuildImportRedirection.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 LdrpInitializeImportRedirection()
{
  int Dll; // ebx
  _UNICODE_STRING *p_RedirectionDllName; // rdi
  __int64 v3; // rdi
  int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v9[16]; // [rsp+40h] [rbp-98h] BYREF

  memset_thunk_772440563353939046(v9, 0, 0x80uLL);
  v8 = 0LL;
  Dll = 0;
  p_RedirectionDllName = &NtCurrentPeb()->ProcessParameters->RedirectionDllName;
  if ( p_RedirectionDllName->Length )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrredirect.c",
      557,
      (__int64)"LdrpInitializeImportRedirection",
      2,
      "Loading import redirection DLL: '%wZ'\n",
      p_RedirectionDllName);
    LdrpInitializeDllPath(0LL, 0LL, (__int64)v9);
    Dll = LdrpLoadDll(&p_RedirectionDllName->Length, (int)v9, 16777217, (__int64)&v8);
    LdrpReleaseDllPath(v9);
    if ( Dll >= 0 )
    {
      v3 = v8;
      v4 = LdrpBuildImportRedirection(v8);
      Dll = v4;
      if ( v4 >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v5 = *(__int64 **)(v3 + 152);
        v7[0] = 0;
        Dll = LdrpInitializeGraphRecurse(v5, 0LL, v7);
        LdrpReleaseLoaderLock(v6, 2, Dll);
        LdrpDropLastInProgressCount();
        if ( Dll >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v3 + 152) + 24LL) = -1;
          *(_WORD *)(**(_QWORD **)(v3 + 152) - 52LL) = -1;
          LdrpLogImportRedirectionTelemetry(v3);
          LdrpRedirectionModule = v3;
        }
      }
      else
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrredirect.c",
          584,
          (__int64)"LdrpInitializeImportRedirection",
          0,
          "Unable to build import redirection Table, Status = 0x%x\n",
          v4);
      }
    }
  }
  return (unsigned int)Dll;
}
