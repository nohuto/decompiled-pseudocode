/*
 * XREFs of LdrpInitializeImportRedirection @ 0x1800FA988
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x180004E10 (LdrpReleaseLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x180005AA0 (LdrpInitializeGraphRecurse.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18000B1F0 (LdrpLoadDll.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     LdrpInitializeDllPath @ 0x180065A30 (LdrpInitializeDllPath.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x18016046C (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpBuildImportRedirection @ 0x180160F74 (LdrpBuildImportRedirection.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 LdrpInitializeImportRedirection()
{
  int Dll; // ebx
  _UNICODE_STRING *p_RedirectionDllName; // rdi
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // rcx
  _BYTE v11[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v13[16]; // [rsp+40h] [rbp-98h] BYREF

  memset_thunk_772440563353939046(v13, 0, 0x80uLL);
  v12 = 0LL;
  Dll = 0;
  p_RedirectionDllName = &NtCurrentPeb()->ProcessParameters->RedirectionDllName;
  if ( p_RedirectionDllName->Length )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrredirect.c",
      557,
      (__int64)"LdrpInitializeImportRedirection",
      2,
      "Loading import redirection DLL: '%wZ'\n",
      (char)p_RedirectionDllName);
    LdrpInitializeDllPath(0LL, 0LL, (__int64)v13);
    Dll = LdrpLoadDll((__int64)p_RedirectionDllName, (__int64)v13, 16777217, (__int64)&v12);
    LdrpReleaseDllPath(v13);
    if ( Dll >= 0 )
    {
      v3 = v12;
      v4 = LdrpBuildImportRedirection(v12);
      Dll = v4;
      if ( v4 >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock(v6, v5, v7, v8);
        v9 = *(__int64 **)(v3 + 152);
        v11[0] = 0;
        Dll = LdrpInitializeGraphRecurse(v9, 0LL, v11);
        LdrpReleaseLoaderLock(v10, 2u, Dll);
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
          (__int64)"minkernel\\ldr\\ldrredirect.c",
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
