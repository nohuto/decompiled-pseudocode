/*
 * XREFs of LdrpInitShimEngine @ 0x1800654D8
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpGetShimEngineInterface @ 0x180009E88 (LdrpGetShimEngineInterface.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18000B1F0 (LdrpLoadDll.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     LdrpBuildSystem32FileName @ 0x180065710 (LdrpBuildSystem32FileName.c)
 *     LdrpInitializeDllPath @ 0x180065A30 (LdrpInitializeDllPath.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrpPinModule @ 0x18006D2E8 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

_WORD *__fastcall LdrpInitShimEngine(__int64 a1)
{
  int v2; // eax
  int Dll; // ebx
  __int64 v4; // rbx
  __int64 v5; // rcx
  int ShimEngineInterface; // eax
  _WORD *result; // rax
  wchar_t *String[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v12; // [rsp+68h] [rbp-98h]
  _WORD v13[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v14[16]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v15[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v10[0] = 1572886LL;
  v10[1] = L"apphelp.dll";
  memset_thunk_772440563353939046(v14, 0, 0x80uLL);
  v9 = 0LL;
  memset_thunk_772440563353939046(&v11, 0, 0x110uLL);
  v11 = 0x1000000;
  v13[0] = 0;
  v12 = v13;
  *(_OWORD *)String = 0LL;
  v2 = LdrpBuildSystem32FileName(&v11, v10);
  if ( v2 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      3683,
      (__int64)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v2);
  }
  else
  {
    LdrpInitializeDllPath(0LL, 16385LL, v14);
    Dll = LdrpLoadDll((__int64)&v11, (__int64)v14, 0, (__int64)&v9);
    LdrpReleaseDllPath(v14);
    if ( Dll < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        3702,
        (__int64)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        Dll);
    }
    else
    {
      v4 = v9;
      v5 = v9;
      *(_DWORD *)(v9 + 104) |= 0x100u;
      g_pShimEngineModule = *(_QWORD *)(v5 + 48);
      LdrpPinModule(v5);
      LdrpDereferenceModule(v4);
      ShimEngineInterface = LdrpGetShimEngineInterface();
      if ( ShimEngineInterface < 0 )
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrinit.c",
          3716,
          (__int64)"LdrpInitShimEngine",
          0,
          "Getting the shim engine exports failed with status 0x%08lx\n",
          ShimEngineInterface);
      }
      else
      {
        String[1] = (wchar_t *)v15;
        LODWORD(String[0]) = 0x2000000;
        if ( ((int (__fastcall *)(wchar_t **, __int64, __int64))(__ROR8__(
                                                                   g_pfnSE_InitializeEngine,
                                                                   64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
               String,
               LdrpImageEntry + 72,
               a1) >= 0 )
        {
          LdrpLoadShimEngine(String[1]);
          if ( (_BYTE *)String[1] != v15 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)String[1]);
        }
      }
    }
  }
  result = v13;
  if ( v13 != v12 )
    return (_WORD *)RtlpSysVolFree((__int64)v12);
  return result;
}
