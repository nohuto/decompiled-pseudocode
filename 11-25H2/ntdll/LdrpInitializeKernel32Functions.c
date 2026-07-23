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

__int64 __fastcall LdrpInitializeKernel32Functions(PVOID *ProcedureAddress)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  NTSTATUS ProcedureAddressForCaller; // eax
  int v7; // eax
  PVOID *Callback; // [rsp+28h] [rbp-D8h]
  PVOID *Callbacka; // [rsp+28h] [rbp-D8h]
  NTSTATUS v11; // [rsp+30h] [rbp-D0h]
  NTSTATUS v12; // [rsp+30h] [rbp-D0h]
  NTSTATUS v13; // [rsp+38h] [rbp-C8h]
  PVOID DllHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+48h] [rbp-B8h]
  __int64 v16; // [rsp+50h] [rbp-B0h]
  PVOID ProcedureAddressa; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v19; // [rsp+70h] [rbp-90h] BYREF
  PVOID *retaddr; // [rsp+198h] [rbp+98h]

  ProcedureAddressa = 0LL;
  v16 = 0LL;
  DllHandle = 0LL;
  memset_thunk_772440563353939046(&Source, 0, 0x110uLL);
  v15 = 0;
  Source.Buffer = (wchar_t *)&v19;
  *ProcedureAddress = 0LL;
  *(_DWORD *)&Source.Length = 0x1000000;
  v19 = 0;
  LdrpAppendUnicodeStringToFilenameBuffer(&Source, &LdrpKernel32DllName);
  if ( (int)LdrpFindLoadedDllInternal(&Source, 32) >= 0 )
  {
    DllHandle = *(PVOID *)(v16 + 48);
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 )
      goto LABEL_4;
LABEL_6:
    v5 = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
    v3 = v5;
    if ( v5 < 0 )
    {
      v11 = v5;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        2255,
        (__int64)"LdrpInitializeKernel32Functions",
        0,
        "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        &LdrpKernelbaseDllName,
        v11);
    }
    else
    {
      v3 = LdrpCodeAuthzInitialize();
      if ( (int)(v3 + 0x80000000) < 0 || v3 == -1073741515 )
      {
        ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                      DllHandle,
                                      (PANSI_STRING)&stru_180175BA0,
                                      0,
                                      &ProcedureAddressa,
                                      0,
                                      retaddr);
        v3 = ProcedureAddressForCaller;
        if ( ProcedureAddressForCaller < 0 )
        {
          LODWORD(Callbacka) = ProcedureAddressForCaller;
          LdrpLogInternal(
            "minkernel\\ldr\\ldrinit.c",
            2289,
            (__int64)"LdrpInitializeKernel32Functions",
            0,
            "Finding KernelbasePostInit failed with status 0x%08lx\n",
            Callbacka);
        }
        else
        {
          v7 = ((__int64 (*)(void))ProcedureAddressa)();
          v3 = v7;
          if ( v7 < 0 )
          {
            LODWORD(Callbacka) = v7;
            LdrpLogInternal(
              "minkernel\\ldr\\ldrinit.c",
              2298,
              (__int64)"LdrpInitializeKernel32Functions",
              0,
              "Calling KernelbasePostInit failed with status 0x%08lx\n",
              Callbacka);
          }
        }
      }
      else
      {
        LODWORD(Callback) = v3;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          2271,
          (__int64)"LdrpInitializeKernel32Functions",
          0,
          "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
          Callback);
      }
    }
    return v3;
  }
  v2 = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
  v3 = v2;
  if ( v2 == -1073741515 )
    goto LABEL_6;
  if ( v2 < 0 )
  {
    v12 = v2;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      2167,
      (__int64)"LdrpInitializeKernel32Functions",
      0,
      "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
      &LdrpKernel32DllName,
      v12);
    return v3;
  }
LABEL_4:
  v4 = LdrGetProcedureAddressForCaller(
         DllHandle,
         (PANSI_STRING)&stru_180175B90,
         0,
         &Kernel32ThreadInitThunkFunction,
         0,
         retaddr);
  v3 = v4;
  if ( v4 < 0 )
  {
    v13 = v4;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      2190,
      (__int64)"LdrpInitializeKernel32Functions",
      0,
      "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
      &stru_180175B90,
      &LdrpKernel32DllName,
      v13);
    return v3;
  }
  LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_180175BB0, 0, ProcedureAddress, 0, retaddr);
  v3 = (unsigned int)LdrpSnapKernelBaseExtensions();
  if ( (v3 & 0x80000000) == 0 )
    goto LABEL_6;
  return v3;
}
