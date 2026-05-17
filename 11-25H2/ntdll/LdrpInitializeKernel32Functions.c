/*
 * XREFs of LdrpInitializeKernel32Functions @ 0x1800CB874
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     LdrLoadDll @ 0x180014E40 (LdrLoadDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800CBB70 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpFindLoadedDllInternal @ 0x1800CBC80 (LdrpFindLoadedDllInternal.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeKernel32Functions(_QWORD *a1)
{
  int v2; // eax
  int v3; // ebx
  int ProcedureAddressForCaller; // eax
  int v5; // eax
  unsigned __int64 v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (*v10)(void); // [rsp+58h] [rbp-A8h] BYREF
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v12; // [rsp+68h] [rbp-98h]
  __int16 v13; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 retaddr; // [rsp+198h] [rbp+98h]

  v10 = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  memset_thunk_772440563353939046(&v11, 0, 0x110uLL);
  v8 = 0;
  v12 = &v13;
  *a1 = 0LL;
  v11 = 0x1000000;
  v13 = 0;
  LdrpAppendUnicodeStringToFilenameBuffer(&v11, &LdrpKernel32DllName);
  if ( (int)LdrpFindLoadedDllInternal((unsigned int)&v11, 0, (unsigned int)&v9, (unsigned int)&v8, 32) >= 0 )
  {
    v7 = *(_QWORD *)(v9 + 48);
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 )
      goto LABEL_4;
LABEL_6:
    v3 = LdrLoadDll(16385LL, 0LL, (__int64)&LdrpKernelbaseDllName, &v7);
    if ( v3 < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        2255,
        (__int64)"LdrpInitializeKernel32Functions",
        0,
        "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        (char)&LdrpKernelbaseDllName);
    }
    else
    {
      v3 = LdrpCodeAuthzInitialize();
      if ( (int)(v3 + 0x80000000) < 0 || v3 == -1073741515 )
      {
        ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v7, &qword_180175BA0, 0, &v10, 0, retaddr);
        v3 = ProcedureAddressForCaller;
        if ( ProcedureAddressForCaller < 0 )
        {
          LdrpLogInternal(
            (__int64)"minkernel\\ldr\\ldrinit.c",
            2289,
            (__int64)"LdrpInitializeKernel32Functions",
            0,
            "Finding KernelbasePostInit failed with status 0x%08lx\n",
            ProcedureAddressForCaller);
        }
        else
        {
          v5 = v10();
          v3 = v5;
          if ( v5 < 0 )
            LdrpLogInternal(
              (__int64)"minkernel\\ldr\\ldrinit.c",
              2298,
              (__int64)"LdrpInitializeKernel32Functions",
              0,
              "Calling KernelbasePostInit failed with status 0x%08lx\n",
              v5);
        }
      }
      else
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrinit.c",
          2271,
          (__int64)"LdrpInitializeKernel32Functions",
          0,
          "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
          v3);
      }
    }
    return (unsigned int)v3;
  }
  v2 = LdrLoadDll(16385LL, 0LL, (__int64)&LdrpKernel32DllName, &v7);
  v3 = v2;
  if ( v2 == -1073741515 )
    goto LABEL_6;
  if ( v2 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      2167,
      (__int64)"LdrpInitializeKernel32Functions",
      0,
      "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
      (char)&LdrpKernel32DllName);
    return (unsigned int)v3;
  }
LABEL_4:
  v3 = LdrGetProcedureAddressForCaller(v7, &byte_180175B90, 0, &Kernel32ThreadInitThunkFunction, 0, retaddr);
  if ( v3 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      2190,
      (__int64)"LdrpInitializeKernel32Functions",
      0,
      "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
      (char)&byte_180175B90);
    return (unsigned int)v3;
  }
  LdrGetProcedureAddressForCaller(v7, &qword_180175BB0, 0, a1, 0, retaddr);
  v3 = LdrpSnapKernelBaseExtensions();
  if ( v3 >= 0 )
    goto LABEL_6;
  return (unsigned int)v3;
}
