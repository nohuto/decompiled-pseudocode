/*
 * XREFs of LdrpInitializeKernel32Functions @ 0x1800032B8
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800035B0 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpFindLoadedDllInternal @ 0x1800036C0 (LdrpFindLoadedDllInternal.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     LdrLoadDll @ 0x180059200 (LdrLoadDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180070920 (LdrpSnapKernelBaseExtensions.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeKernel32Functions(_QWORD *a1)
{
  int v2; // eax
  int Dll; // ebx
  int ProcedureAddressForCaller; // eax
  int v5; // eax
  int v7; // [rsp+40h] [rbp-C0h]
  __int64 (*v8)(void); // [rsp+58h] [rbp-A8h] BYREF
  int v9; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v10; // [rsp+68h] [rbp-98h]
  __int16 v11; // [rsp+70h] [rbp-90h] BYREF
  __int64 retaddr; // [rsp+198h] [rbp+98h]

  v8 = 0LL;
  v7 = 0;
  memset_thunk_772440563353939046(&v9, 0, 0x110uLL);
  v10 = &v11;
  *a1 = 0LL;
  v9 = 0x1000000;
  v11 = 0;
  LdrpAppendUnicodeStringToFilenameBuffer(&v9, &LdrpKernel32DllName);
  if ( (int)LdrpFindLoadedDllInternal((char)&v9, 32) >= 0 )
  {
    v7 = MEMORY[0x30];
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 )
      goto LABEL_4;
LABEL_6:
    Dll = LdrLoadDll(1);
    if ( Dll < 0 )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        2255,
        (int)"LdrpInitializeKernel32Functions",
        0,
        "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        (char)&LdrpKernelbaseDllName);
    }
    else
    {
      Dll = LdrpCodeAuthzInitialize();
      if ( (int)(Dll + 0x80000000) < 0 || Dll == -1073741515 )
      {
        ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                      v7,
                                      (unsigned int)&unk_180173300,
                                      0,
                                      (unsigned int)&v8,
                                      0,
                                      retaddr);
        Dll = ProcedureAddressForCaller;
        if ( ProcedureAddressForCaller < 0 )
        {
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrinit.c",
            2289,
            (int)"LdrpInitializeKernel32Functions",
            0,
            "Finding KernelbasePostInit failed with status 0x%08lx\n",
            ProcedureAddressForCaller);
        }
        else
        {
          v5 = v8();
          Dll = v5;
          if ( v5 < 0 )
            LdrpLogInternal(
              (int)"minkernel\\ldr\\ldrinit.c",
              2298,
              (int)"LdrpInitializeKernel32Functions",
              0,
              "Calling KernelbasePostInit failed with status 0x%08lx\n",
              v5);
        }
      }
      else
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrinit.c",
          2271,
          (int)"LdrpInitializeKernel32Functions",
          0,
          "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
          Dll);
      }
    }
    return (unsigned int)Dll;
  }
  v2 = LdrLoadDll(1);
  Dll = v2;
  if ( v2 == -1073741515 )
    goto LABEL_6;
  if ( v2 < 0 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      2167,
      (int)"LdrpInitializeKernel32Functions",
      0,
      "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
      (char)&LdrpKernel32DllName);
    return (unsigned int)Dll;
  }
LABEL_4:
  Dll = LdrGetProcedureAddressForCaller(
          v7,
          (unsigned int)&byte_180173000,
          0,
          (unsigned int)&Kernel32ThreadInitThunkFunction,
          0,
          retaddr);
  if ( Dll < 0 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      2190,
      (int)"LdrpInitializeKernel32Functions",
      0,
      "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
      (char)&byte_180173000);
    return (unsigned int)Dll;
  }
  LdrGetProcedureAddressForCaller(v7, (unsigned int)&unk_180173310, 0, (_DWORD)a1, 0, retaddr);
  Dll = LdrpSnapKernelBaseExtensions();
  if ( Dll >= 0 )
    goto LABEL_6;
  return (unsigned int)Dll;
}
