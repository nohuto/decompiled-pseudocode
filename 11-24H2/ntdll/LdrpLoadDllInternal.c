/*
 * XREFs of LdrpLoadDllInternal @ 0x18000B460
 * Callers:
 *     LdrpLoadDll @ 0x18000B1F0 (LdrpLoadDll.c)
 *     LdrpLoadForwardedDll @ 0x18000B980 (LdrpLoadForwardedDll.c)
 *     LdrpLoadPatchImage @ 0x18015EBFC (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     LdrpPrepareModuleForExecution @ 0x180004BA4 (LdrpPrepareModuleForExecution.c)
 *     LdrpFindLoadedDllByHandle @ 0x18000F8E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180019870 (LdrpFastpthReloadedDll.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18001C830 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     LdrpQueryCurrentPatch @ 0x1800665B8 (LdrpQueryCurrentPatch.c)
 *     LdrpDetectDetour @ 0x18006CBA0 (LdrpDetectDetour.c)
 *     LdrpPinModule @ 0x18006D2E8 (LdrpPinModule.c)
 *     LdrpFreeUnicodeString @ 0x18007625C (LdrpFreeUnicodeString.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800D9018 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeReplacedModule @ 0x1800D91A8 (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x1800D91E0 (LdrpHandleReplacedModule.c)
 *     LdrpBuildForwarderLink @ 0x1800DF720 (LdrpBuildForwarderLink.c)
 *     LdrpCondenseGraph @ 0x1800EA3D0 (LdrpCondenseGraph.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800F0760 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800F93E8 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpLogError @ 0x1800FB40C (LdrpLogError.c)
 *     LdrpApplyPatchImage @ 0x180117730 (LdrpApplyPatchImage.c)
 */

__int64 __fastcall LdrpLoadDllInternal(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int *a8,
        __int64 a9,
        char a10)
{
  __int64 *v13; // r15
  __int64 v14; // r13
  int v15; // eax
  int *v16; // rbx
  __int64 v17; // r14
  char v19; // bl
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int LoadedDllByHandle; // eax
  __int64 v27[9]; // [rsp+40h] [rbp-48h] BYREF
  char v29; // [rsp+A8h] [rbp+20h]

  a10 = 0;
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1671, (int)"LdrpLoadDllInternal", 3, "DLL name: %wZ\n", a1);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1672, (int)"LdrpLoadDllInternal", 5, "%wZ\n", a1);
  v13 = a7;
  *a7 = 0LL;
  v27[0] = 0LL;
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
    v29 = 1;
  }
  else
  {
    v19 = 0;
    v29 = 0;
    LdrpDrainWorkQueue(0);
  }
  if ( a4 == 9 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a9, &a5, 0LL);
    LODWORD(a7) = LoadedDllByHandle;
    v17 = a5;
    if ( LoadedDllByHandle >= 0 )
    {
      if ( *(_DWORD *)(a5 + 304) == 4 )
      {
        LoadedDllByHandle = -1073740628;
        LODWORD(a7) = -1073740628;
      }
      else
      {
        v14 = a5;
        LoadedDllByHandle = LdrpQueryCurrentPatch(*(_QWORD *)(a5 + 48), &a10);
        LODWORD(a7) = LoadedDllByHandle;
        if ( LoadedDllByHandle >= 0 && a10 )
        {
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrapi.c",
            1796,
            (int)"LdrpLoadDllInternal",
            2,
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
    if ( !v29 )
      goto LABEL_48;
    goto LABEL_4;
  }
  v17 = a5;
LABEL_11:
  LdrpThreadTokenSetMainThreadToken();
  if ( !v14 || v19 || *(_DWORD *)(*(_QWORD *)(v14 + 152) + 24LL) )
  {
    LdrpDetectDetour();
    v16 = a8;
    v20 = LdrpFindOrPrepareLoadingModule(a1, a2, a3, a4, v17, (__int64)v27, (__int64)a8);
    if ( v20 == -1073741515 )
    {
      LdrpProcessWork(*(_QWORD *)(v27[0] + 176));
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
  LdrpDrainWorkQueue(1);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v21 = v27[0];
  if ( v27[0] )
  {
    v22 = LdrpHandleReplacedModule(v27[0]);
    *v13 = v22;
    if ( v21 != v22 )
    {
      LdrpFreeReplacedModule();
      v21 = *v13;
      v27[0] = v21;
      if ( *(_DWORD *)(v21 + 268) == 9 && a4 != 9 )
        *v16 = -1073740608;
    }
    if ( *(_QWORD *)(v21 + 176) )
    {
      LdrpCondenseGraph(*(_QWORD *)(v21 + 152));
      *(_QWORD *)(*(_QWORD *)(v21 + 176) + 200LL) = 0LL;
    }
    if ( *v16 < 0 )
      goto LABEL_28;
    v23 = LdrpPrepareModuleForExecution(v21, (__int64)v16);
    *v16 = v23;
    if ( v23 >= 0 )
    {
      v24 = LdrpBuildForwarderLink(v14, v21);
      *v16 = v24;
      if ( v24 >= 0 && !LdrInitState )
        LdrpPinModule(v21);
    }
    if ( a4 == 9 )
    {
      v17 = a5;
      if ( *(_QWORD *)(a5 + 296) != *(_QWORD *)(v21 + 48) )
      {
        if ( *(_DWORD *)(v21 + 304) == 4 || *(_DWORD *)(a5 + 304) == 4 )
        {
          *v16 = -1073741502;
        }
        else
        {
          v25 = LdrpApplyPatchImage(v21);
          *v16 = v25;
          if ( v25 < 0 )
            LdrpLogInternal(
              (int)"minkernel\\ldr\\ldrapi.c",
              1997,
              (int)"LdrpLoadDllInternal",
              0,
              "Applying patch \"%wZ\" failed\n",
              v21 + 72);
        }
      }
    }
    else
    {
LABEL_28:
      v17 = a5;
    }
    LdrpFreeLoadContextOfNode(*(_QWORD *)(v21 + 152), v16);
    if ( *v16 < 0 && (a4 != 9 || *(_DWORD *)(v21 + 304) != 2) )
    {
      *v13 = 0LL;
      LdrpDecrementModuleLoadCountEx(v21, 0LL);
      LdrpDereferenceModule(v21);
    }
  }
  else
  {
    *v16 = -1073741801;
    v17 = a5;
  }
  if ( !v29 )
LABEL_48:
    LdrpDropLastInProgressCount();
LABEL_4:
  if ( a4 == 9 && v17 )
    LdrpDereferenceModule(v17);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2122, (int)"LdrpLoadDllInternal", 4, "Status: 0x%08lx\n", *v16);
  return LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2123, (int)"LdrpLoadDllInternal", 6, "%x\n", *v16);
}
