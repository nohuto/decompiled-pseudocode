/*
 * XREFs of LdrpLoadDllInternal @ 0x180037E60
 * Callers:
 *     LdrpLoadDll @ 0x180037BF0 (LdrpLoadDll.c)
 *     LdrpLoadForwardedDll @ 0x180038380 (LdrpLoadForwardedDll.c)
 *     LdrpLoadPatchImage @ 0x18015CFBC (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpPrepareModuleForExecution @ 0x1800315A4 (LdrpPrepareModuleForExecution.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003C2E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180046270 (LdrpFastpthReloadedDll.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180049230 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     LdrpDetectDetour @ 0x180089480 (LdrpDetectDetour.c)
 *     LdrpPinModule @ 0x180089BC8 (LdrpPinModule.c)
 *     LdrpFreeUnicodeString @ 0x180092B3C (LdrpFreeUnicodeString.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800ACA84 (LdrpDropLastInProgressCount.c)
 *     LdrpQueryCurrentPatch @ 0x1800AE798 (LdrpQueryCurrentPatch.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800D4388 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeReplacedModule @ 0x1800D4518 (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x1800D4550 (LdrpHandleReplacedModule.c)
 *     LdrpBuildForwarderLink @ 0x1800DA890 (LdrpBuildForwarderLink.c)
 *     LdrpCondenseGraph @ 0x1800E5B60 (LdrpCondenseGraph.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800EB3E0 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800F3FB8 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpLogError @ 0x1800F633C (LdrpLogError.c)
 *     LdrpApplyPatchImage @ 0x1801127D0 (LdrpApplyPatchImage.c)
 */

__int64 __fastcall LdrpLoadDllInternal(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        char *a5,
        char *a6,
        __int64 *a7,
        int *a8,
        __int64 a9,
        char a10)
{
  __int64 *v13; // r15
  char *v14; // r13
  int v15; // eax
  int *v16; // rbx
  char *v17; // r14
  char v19; // bl
  int v20; // eax
  __int64 v21; // rdx
  char *v22; // rsi
  __int64 v23; // rax
  void *v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int LoadedDllByHandle; // eax
  PVOID BaseAddress[9]; // [rsp+40h] [rbp-48h] BYREF
  char v31; // [rsp+A8h] [rbp+20h]

  a10 = 0;
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 1671LL, "LdrpLoadDllInternal", 3LL, "DLL name: %wZ\n", a1);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 1672LL, "LdrpLoadDllInternal", 5LL, "%wZ\n", a1);
  v13 = a7;
  *a7 = 0LL;
  BaseAddress[0] = 0LL;
  v14 = a6;
  if ( a4 != 9 )
  {
    v15 = LdrpFastpthReloadedDll(a1, a3, a6, v13);
    if ( (int)(v15 + 0x80000000) < 0 || v15 == -1073740608 )
    {
      v16 = a8;
      *a8 = v15;
      v17 = a5;
      goto LABEL_4;
    }
  }
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v19 = 1;
    v31 = 1;
  }
  else
  {
    v19 = 0;
    v31 = 0;
    LdrpDrainWorkQueue(0LL);
  }
  if ( a4 == 9 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a9, &a5, 0LL);
    LODWORD(a7) = LoadedDllByHandle;
    v17 = a5;
    if ( LoadedDllByHandle >= 0 )
    {
      if ( *((_DWORD *)a5 + 76) == 4 )
      {
        LoadedDllByHandle = -1073740628;
        LODWORD(a7) = -1073740628;
      }
      else
      {
        v14 = a5;
        LoadedDllByHandle = LdrpQueryCurrentPatch(*((_QWORD *)a5 + 6), &a10);
        LODWORD(a7) = LoadedDllByHandle;
        if ( LoadedDllByHandle >= 0 && a10 )
        {
          LdrpLogInternal(
            "minkernel\\ldr\\ldrapi.c",
            1796LL,
            "LdrpLoadDllInternal",
            2LL,
            "Loading patch image for the following base image: %wZ\n",
            v17 + 88);
          goto LABEL_11;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      LdrpFreeUnicodeString(a1);
      LoadedDllByHandle = (int)a7;
    }
    v16 = a8;
    *a8 = LoadedDllByHandle;
    if ( !v31 )
      goto LABEL_48;
    goto LABEL_4;
  }
  v17 = a5;
LABEL_11:
  LdrpThreadTokenSetMainThreadToken();
  if ( !v14 || v19 || *(_DWORD *)(*((_QWORD *)v14 + 19) + 24LL) )
  {
    LdrpDetectDetour();
    v16 = a8;
    v20 = LdrpFindOrPrepareLoadingModule(a1, a2, a3, a4, (__int64)v17, (__int64)BaseAddress, (__int64)a8);
    if ( v20 == -1073741515 )
    {
      LOBYTE(v21) = 1;
      LdrpProcessWork(*((_QWORD *)BaseAddress[0] + 22), v21);
    }
    else if ( v20 != -1073741267 && v20 < 0 )
    {
      *v16 = v20;
    }
  }
  else
  {
    v16 = a8;
    *a8 = -1073741515;
  }
  LdrpDrainWorkQueue(1LL);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v22 = (char *)BaseAddress[0];
  if ( BaseAddress[0] )
  {
    v23 = LdrpHandleReplacedModule(BaseAddress[0]);
    *v13 = v23;
    if ( v22 != (char *)v23 )
    {
      LdrpFreeReplacedModule(v24);
      v22 = (char *)*v13;
      BaseAddress[0] = v22;
      if ( *((_DWORD *)v22 + 67) == 9 && a4 != 9 )
        *v16 = -1073740608;
    }
    if ( *((_QWORD *)v22 + 22) )
    {
      LdrpCondenseGraph(*((_QWORD *)v22 + 19));
      *(_QWORD *)(*((_QWORD *)v22 + 22) + 200LL) = 0LL;
    }
    if ( *v16 < 0 )
      goto LABEL_28;
    v25 = LdrpPrepareModuleForExecution((__int64)v22, (__int64)v16);
    *v16 = v25;
    if ( v25 >= 0 )
    {
      v26 = LdrpBuildForwarderLink(v14, v22);
      *v16 = v26;
      if ( v26 >= 0 && !LdrInitState )
        LdrpPinModule(v22);
    }
    if ( a4 == 9 )
    {
      v17 = a5;
      if ( *((_QWORD *)a5 + 37) != *((_QWORD *)v22 + 6) )
      {
        if ( *((_DWORD *)v22 + 76) == 4 || *((_DWORD *)a5 + 76) == 4 )
        {
          *v16 = -1073741502;
        }
        else
        {
          v27 = LdrpApplyPatchImage(v22);
          *v16 = v27;
          if ( v27 < 0 )
            LdrpLogInternal(
              "minkernel\\ldr\\ldrapi.c",
              1997LL,
              "LdrpLoadDllInternal",
              0LL,
              "Applying patch \"%wZ\" failed\n",
              v22 + 72);
        }
      }
    }
    else
    {
LABEL_28:
      v17 = a5;
    }
    LdrpFreeLoadContextOfNode(*((_QWORD *)v22 + 19), v16);
    if ( *v16 < 0 && (a4 != 9 || *((_DWORD *)v22 + 76) != 2) )
    {
      *v13 = 0LL;
      LdrpDecrementModuleLoadCountEx(v22, 0LL);
      LdrpDereferenceModule(v22);
    }
  }
  else
  {
    *v16 = -1073741801;
    v17 = a5;
  }
  if ( !v31 )
LABEL_48:
    LdrpDropLastInProgressCount();
LABEL_4:
  if ( a4 == 9 && v17 )
    LdrpDereferenceModule(v17);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2122LL, "LdrpLoadDllInternal", 4LL, "Status: 0x%08lx\n", *v16);
  return LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2123LL, "LdrpLoadDllInternal", 6LL, "%x\n", *v16);
}
