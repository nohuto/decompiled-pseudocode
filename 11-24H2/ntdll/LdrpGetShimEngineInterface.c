/*
 * XREFs of LdrpGetShimEngineInterface @ 0x180036888
 * Callers:
 *     LdrpGetProcApphelpCheckModule @ 0x180037690 (LdrpGetProcApphelpCheckModule.c)
 *     LdrInitShimEngineDynamic @ 0x1800ACB80 (LdrInitShimEngineDynamic.c)
 *     LdrpInitShimEngine @ 0x1800AD3A8 (LdrpInitShimEngine.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     strlen @ 0x1801660A0 (strlen.c)
 */

__int64 LdrpGetShimEngineInterface()
{
  size_t v0; // rax
  NTSTATUS ProcedureAddressForCaller; // ebx
  size_t v2; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  _STRING ProcedureName; // [rsp+30h] [rbp-29h] BYREF
  PVOID v15; // [rsp+40h] [rbp-19h] BYREF
  PVOID v16; // [rsp+48h] [rbp-11h] BYREF
  PVOID v17; // [rsp+50h] [rbp-9h] BYREF
  PVOID v18; // [rsp+58h] [rbp-1h] BYREF
  PVOID v19; // [rsp+60h] [rbp+7h] BYREF
  PVOID v20; // [rsp+68h] [rbp+Fh] BYREF
  PVOID v21; // [rsp+70h] [rbp+17h] BYREF
  PVOID v22; // [rsp+78h] [rbp+1Fh] BYREF
  PVOID *Callback; // [rsp+B8h] [rbp+5Fh]
  PVOID ProcedureAddress; // [rsp+C0h] [rbp+67h] BYREF
  PVOID v25; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID v26; // [rsp+D0h] [rbp+77h] BYREF
  PVOID v27; // [rsp+D8h] [rbp+7Fh] BYREF

  ProcedureAddress = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_InitializeEngine";
  v0 = strlen("SE_InitializeEngine");
  if ( v0 >= 0xFFFF )
    LOWORD(v0) = -2;
  ProcedureName.Length = v0;
  ProcedureName.MaximumLength = v0 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                g_pShimEngineModule,
                                &ProcedureName,
                                0,
                                &ProcedureAddress,
                                0,
                                Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_ShimDllLoaded";
  v2 = strlen("SE_ShimDllLoaded");
  if ( v2 >= 0xFFFF )
    LOWORD(v2) = -2;
  ProcedureName.Length = v2;
  ProcedureName.MaximumLength = v2 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v25, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_InstallBeforeInit";
  v4 = strlen("SE_InstallBeforeInit");
  if ( v4 >= 0xFFFF )
    LOWORD(v4) = -2;
  ProcedureName.Length = v4;
  ProcedureName.MaximumLength = v4 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v26, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_InstallAfterInit";
  v5 = strlen("SE_InstallAfterInit");
  if ( v5 >= 0xFFFF )
    LOWORD(v5) = -2;
  ProcedureName.Length = v5;
  ProcedureName.MaximumLength = v5 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v27, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_DllLoaded";
  v6 = strlen("SE_DllLoaded");
  if ( v6 >= 0xFFFF )
    LOWORD(v6) = -2;
  ProcedureName.Length = v6;
  ProcedureName.MaximumLength = v6 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v15, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_DllUnloaded";
  v7 = strlen("SE_DllUnloaded");
  if ( v7 >= 0xFFFF )
    LOWORD(v7) = -2;
  ProcedureName.Length = v7;
  ProcedureName.MaximumLength = v7 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v16, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_LdrEntryRemoved";
  v8 = strlen("SE_LdrEntryRemoved");
  if ( v8 >= 0xFFFF )
    LOWORD(v8) = -2;
  ProcedureName.Length = v8;
  ProcedureName.MaximumLength = v8 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v17, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_ProcessDying";
  v9 = strlen("SE_ProcessDying");
  if ( v9 >= 0xFFFF )
    LOWORD(v9) = -2;
  ProcedureName.Length = v9;
  ProcedureName.MaximumLength = v9 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v18, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_LdrResolveDllName";
  v10 = strlen("SE_LdrResolveDllName");
  if ( v10 >= 0xFFFF )
    LOWORD(v10) = -2;
  ProcedureName.Length = v10;
  ProcedureName.MaximumLength = v10 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v20, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_GetProcAddressForCaller";
  v11 = strlen("SE_GetProcAddressForCaller");
  if ( v11 >= 0xFFFF )
    LOWORD(v11) = -2;
  ProcedureName.Length = v11;
  ProcedureName.MaximumLength = v11 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v19, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "ApphelpCheckModule";
  v12 = strlen("ApphelpCheckModule");
  if ( v12 >= 0xFFFF )
    LOWORD(v12) = -2;
  ProcedureName.Length = v12;
  ProcedureName.MaximumLength = v12 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v21, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "ApphelpQueryModSettingsAlloc";
  v13 = strlen("ApphelpQueryModSettingsAlloc");
  if ( v13 >= 0xFFFF )
    LOWORD(v13) = -2;
  ProcedureName.Length = v13;
  ProcedureName.MaximumLength = v13 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &ProcedureName, 0, &v22, 0, Callback);
  if ( ProcedureAddressForCaller < 0 )
  {
LABEL_7:
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      3285LL,
      "LdrpGetShimEngineInterface",
      0LL,
      "Could not locate procedure \"%s\" in the shim engine DLL\n",
      ProcedureName.Buffer);
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  else
  {
    LdrProtectMrdata(0);
    g_pfnSE_InitializeEngine = __ROR8__(
                                 (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                 MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ShimDllLoaded = __ROR8__((unsigned __int64)v25 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallBeforeInit = __ROR8__((unsigned __int64)v26 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallAfterInit = __ROR8__((unsigned __int64)v27 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllLoaded = __ROR8__((unsigned __int64)v15 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllUnloaded = __ROR8__((unsigned __int64)v16 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrEntryRemoved = __ROR8__((unsigned __int64)v17 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ProcessDying = __ROR8__((unsigned __int64)v18 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_GetProcAddressForCaller = __ROR8__((unsigned __int64)v19 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrResolveDllName = __ROR8__((unsigned __int64)v20 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnApphelpCheckModuleProc = __ROR8__((unsigned __int64)v21 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnApphelpQueryModSettingsAllocProc = __ROR8__(
                                              (unsigned __int64)v22 ^ MEMORY[0x7FFE0330],
                                              MEMORY[0x7FFE0330] & 0x3F);
    LdrProtectMrdata(1);
  }
  return (unsigned int)ProcedureAddressForCaller;
}
