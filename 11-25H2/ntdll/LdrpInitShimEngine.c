/*
 * XREFs of LdrpInitShimEngine @ 0x1800D0BF0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrpPinModule @ 0x18003E278 (LdrpPinModule.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18004A090 (LdrpLoadDll.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpBuildSystem32FileName @ 0x1800D0E20 (LdrpBuildSystem32FileName.c)
 *     LdrpInitializeDllPath @ 0x1800D1140 (LdrpInitializeDllPath.c)
 *     LdrpGetShimEngineInterface @ 0x1800D11F0 (LdrpGetShimEngineInterface.c)
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

_WORD *__fastcall LdrpInitShimEngine(__int64 a1)
{
  int v2; // eax
  int Dll; // ebx
  __int64 v4; // rbx
  __int64 v5; // rcx
  int ShimEngineInterface; // eax
  __int64 v7; // r9
  _WORD *result; // rax
  wchar_t *String[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v13; // [rsp+68h] [rbp-98h]
  _WORD v14[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15[16]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v16[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v11[0] = 1572886LL;
  v11[1] = L"apphelp.dll";
  memset_thunk_772440563353939046(v15, 0, 0x80uLL);
  v10 = 0LL;
  memset_thunk_772440563353939046(&v12, 0, 0x110uLL);
  v12 = 0x1000000;
  v14[0] = 0;
  v13 = v14;
  *(_OWORD *)String = 0LL;
  v2 = LdrpBuildSystem32FileName(&v12, v11);
  if ( v2 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      3685,
      (__int64)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v2);
  }
  else
  {
    LdrpInitializeDllPath(0LL, 16385LL, v15);
    Dll = LdrpLoadDll((unsigned __int16 *)&v12, (__int64)v15, 0, (__int64)&v10);
    LdrpReleaseDllPath(v15);
    if ( Dll < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        3704,
        (__int64)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        Dll);
    }
    else
    {
      v4 = v10;
      v5 = v10;
      *(_DWORD *)(v10 + 104) |= 0x100u;
      g_pShimEngineModule = *(_QWORD *)(v5 + 48);
      LdrpPinModule(v5);
      LdrpDereferenceModule(v4);
      ShimEngineInterface = LdrpGetShimEngineInterface();
      if ( ShimEngineInterface < 0 )
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrinit.c",
          3718,
          (__int64)"LdrpInitShimEngine",
          0,
          "Getting the shim engine exports failed with status 0x%08lx\n",
          ShimEngineInterface);
      }
      else
      {
        String[1] = (wchar_t *)v16;
        LODWORD(String[0]) = 0x2000000;
        if ( ((int (__fastcall *)(wchar_t **, __int64, __int64))(__ROR8__(
                                                                   g_pfnSE_InitializeEngine,
                                                                   64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
               String,
               LdrpImageEntry + 72,
               a1) >= 0 )
        {
          LdrpLoadShimEngine(String[1]);
          if ( (_BYTE *)String[1] != v16 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)String[1], v7);
        }
      }
    }
  }
  result = v14;
  if ( v14 != v13 )
    return (_WORD *)RtlpSysVolFree((__int64)v13);
  return result;
}
