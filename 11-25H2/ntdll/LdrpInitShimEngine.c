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

int __fastcall LdrpInitShimEngine(__int64 a1)
{
  int v2; // eax
  int Dll; // ebx
  char *v4; // rbx
  _QWORD *v5; // rcx
  int ShimEngineInterface; // eax
  _WORD *v7; // rax
  int v9; // [rsp+28h] [rbp-D8h]
  int v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+28h] [rbp-D8h]
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v13; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v16; // [rsp+68h] [rbp-98h]
  _WORD v17[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18[16]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v19[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v14[0] = 1572886LL;
  v14[1] = L"apphelp.dll";
  memset_thunk_772440563353939046(v18, 0, 0x80uLL);
  v13 = 0LL;
  memset_thunk_772440563353939046(&v15, 0, 0x110uLL);
  v15 = 0x1000000;
  v17[0] = 0;
  v16 = v17;
  *(_OWORD *)BaseAddress = 0LL;
  v2 = LdrpBuildSystem32FileName(&v15, v14);
  if ( v2 < 0 )
  {
    v11 = v2;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      3685,
      (__int64)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v11);
  }
  else
  {
    LdrpInitializeDllPath(0LL, 16385LL, v18);
    Dll = LdrpLoadDll((unsigned __int16 *)&v15, (int)v18, 0, (__int64)&v13);
    LdrpReleaseDllPath(v18);
    if ( Dll < 0 )
    {
      v9 = Dll;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        3704,
        (__int64)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        v9);
    }
    else
    {
      v4 = (char *)v13;
      v5 = v13;
      *((_DWORD *)v13 + 26) |= 0x100u;
      g_pShimEngineModule = (PVOID)v5[6];
      LdrpPinModule((__int64)v5);
      LdrpDereferenceModule(v4);
      ShimEngineInterface = LdrpGetShimEngineInterface();
      if ( ShimEngineInterface < 0 )
      {
        v10 = ShimEngineInterface;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          3718,
          (__int64)"LdrpInitShimEngine",
          0,
          "Getting the shim engine exports failed with status 0x%08lx\n",
          v10);
      }
      else
      {
        BaseAddress[1] = v19;
        LODWORD(BaseAddress[0]) = 0x2000000;
        if ( ((int (__fastcall *)(PVOID *, __int64, __int64))(__ROR8__(
                                                                g_pfnSE_InitializeEngine,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
               BaseAddress,
               LdrpImageEntry + 72,
               a1) >= 0 )
        {
          LdrpLoadShimEngine((wchar_t *)BaseAddress[1]);
          if ( BaseAddress[1] != v19 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
        }
      }
    }
  }
  v7 = v17;
  if ( v17 != v16 )
    LODWORD(v7) = RtlpSysVolFree(v16);
  return (int)v7;
}
