/*
 * XREFs of LdrpGetShimEngineInterface @ 0x1800D11F0
 * Callers:
 *     LdrpGetProcApphelpCheckModule @ 0x180049B30 (LdrpGetProcApphelpCheckModule.c)
 *     LdrInitShimEngineDynamic @ 0x1800D01B0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitShimEngine @ 0x1800D0BF0 (LdrpInitShimEngine.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     strlen @ 0x180169260 (strlen.c)
 */

__int64 LdrpGetShimEngineInterface()
{
  size_t v0; // rax
  int ProcedureAddressForCaller; // ebx
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
  const void *v14; // [rsp+30h] [rbp-29h] BYREF
  char v15[8]; // [rsp+38h] [rbp-21h]
  __int64 v16; // [rsp+40h] [rbp-19h] BYREF
  __int64 v17; // [rsp+48h] [rbp-11h] BYREF
  __int64 v18; // [rsp+50h] [rbp-9h] BYREF
  __int64 v19; // [rsp+58h] [rbp-1h] BYREF
  __int64 v20; // [rsp+60h] [rbp+7h] BYREF
  __int64 v21; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v23[7]; // [rsp+78h] [rbp+1Fh] BYREF
  unsigned __int64 retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v25; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+7Fh] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v23[0] = 0LL;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "SE_InitializeEngine";
  v0 = strlen("SE_InitializeEngine");
  if ( v0 >= 0xFFFF )
    LOWORD(v0) = -2;
  LOWORD(v14) = v0;
  WORD1(v14) = v0 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v25, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "SE_ShimDllLoaded";
  v2 = strlen("SE_ShimDllLoaded");
  if ( v2 >= 0xFFFF )
    LOWORD(v2) = -2;
  LOWORD(v14) = v2;
  WORD1(v14) = v2 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v26, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "SE_InstallBeforeInit";
  v4 = strlen("SE_InstallBeforeInit");
  if ( v4 >= 0xFFFF )
    LOWORD(v4) = -2;
  LOWORD(v14) = v4;
  WORD1(v14) = v4 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v27, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "SE_InstallAfterInit";
  v5 = strlen("SE_InstallAfterInit");
  if ( v5 >= 0xFFFF )
    LOWORD(v5) = -2;
  LOWORD(v14) = v5;
  WORD1(v14) = v5 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v28, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "SE_DllLoaded";
  v6 = strlen("SE_DllLoaded");
  if ( v6 >= 0xFFFF )
    LOWORD(v6) = -2;
  LOWORD(v14) = v6;
  WORD1(v14) = v6 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v16, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "SE_DllUnloaded";
  v7 = strlen("SE_DllUnloaded");
  if ( v7 >= 0xFFFF )
    LOWORD(v7) = -2;
  LOWORD(v14) = v7;
  WORD1(v14) = v7 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v17, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "SE_LdrEntryRemoved";
  v8 = strlen("SE_LdrEntryRemoved");
  if ( v8 >= 0xFFFF )
    LOWORD(v8) = -2;
  LOWORD(v14) = v8;
  WORD1(v14) = v8 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v18, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "SE_ProcessDying";
  v9 = strlen("SE_ProcessDying");
  if ( v9 >= 0xFFFF )
    LOWORD(v9) = -2;
  LOWORD(v14) = v9;
  WORD1(v14) = v9 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v19, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "SE_LdrResolveDllName";
  v10 = strlen("SE_LdrResolveDllName");
  if ( v10 >= 0xFFFF )
    LOWORD(v10) = -2;
  LOWORD(v14) = v10;
  WORD1(v14) = v10 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v21, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "SE_GetProcAddressForCaller";
  v11 = strlen("SE_GetProcAddressForCaller");
  if ( v11 >= 0xFFFF )
    LOWORD(v11) = -2;
  LOWORD(v14) = v11;
  WORD1(v14) = v11 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v20, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "ApphelpCheckModule";
  v12 = strlen("ApphelpCheckModule");
  if ( v12 >= 0xFFFF )
    LOWORD(v12) = -2;
  LOWORD(v14) = v12;
  WORD1(v14) = v12 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, &v22, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_7;
  HIDWORD(v14) = 0;
  *(_QWORD *)v15 = "ApphelpQueryModSettingsAlloc";
  v13 = strlen("ApphelpQueryModSettingsAlloc");
  if ( v13 >= 0xFFFF )
    LOWORD(v13) = -2;
  LOWORD(v14) = v13;
  WORD1(v14) = v13 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(g_pShimEngineModule, &v14, 0, v23, 0, retaddr);
  if ( ProcedureAddressForCaller < 0 )
  {
LABEL_7:
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      3287,
      (__int64)"LdrpGetShimEngineInterface",
      0,
      "Could not locate procedure \"%s\" in the shim engine DLL\n",
      v15[0]);
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  else
  {
    LdrProtectMrdata(0);
    g_pfnSE_InitializeEngine = __ROR8__(v25 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ShimDllLoaded = __ROR8__(v26 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallBeforeInit = __ROR8__(v27 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallAfterInit = __ROR8__(v28 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllLoaded = __ROR8__(v16 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllUnloaded = __ROR8__(v17 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrEntryRemoved = __ROR8__(v18 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ProcessDying = __ROR8__(v19 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_GetProcAddressForCaller = __ROR8__(v20 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrResolveDllName = __ROR8__(v21 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnApphelpCheckModuleProc = __ROR8__(v22 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnApphelpQueryModSettingsAllocProc = __ROR8__(v23[0] ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    LdrProtectMrdata(1);
  }
  return (unsigned int)ProcedureAddressForCaller;
}
