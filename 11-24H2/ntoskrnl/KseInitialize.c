/*
 * XREFs of KseInitialize @ 0x140C2B3FC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepDebugPrint @ 0x1402CA2D8 (KsepDebugPrint.c)
 *     KsepLogInfo @ 0x14048E6C8 (KsepLogInfo.c)
 *     KsepLogError @ 0x14048E6F8 (KsepLogError.c)
 *     KseRegisterShim @ 0x14073EBD0 (KseRegisterShim.c)
 *     KsepCacheUninitialize @ 0x1407406D0 (KsepCacheUninitialize.c)
 *     KseShimDatabaseClose @ 0x14095C27C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14095C42C (KseShimDatabaseOpen.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     KsepEngineInitialize @ 0x140C2B2F0 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140C2BE0C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140C2BF74 (KseShimDatabaseBootInitialize.c)
 *     KseVersionLieInitialize @ 0x140C2C49C (KseVersionLieInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, unsigned int a2)
{
  int matched; // edi
  signed __int32 v5; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  char v15; // al
  int v16; // eax
  __int64 v17; // rcx
  char v18; // al
  int v19; // eax
  __int64 v20; // rcx
  char v21; // al
  int v22; // eax
  __int64 v23; // rcx
  char v24; // al
  int v25; // eax
  __int64 v26; // rcx
  char v27; // al
  int v28; // eax
  __int64 v29; // rcx
  char v30; // al
  int v31; // eax
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v36 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v36);
      if ( matched >= 0 && v36 )
      {
        KseShimDatabaseClose(v36);
        KseVersionLieInitialize();
        v13 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v13 < 0 )
        {
          v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F384[2 * v14] = v13;
          v15 = KsepDebugFlag;
          KsepHistoryErrors[2 * v14] = 852115;
          if ( (v15 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12LL, (__int64)"Built-in SkipDriverUnload shims: failed to register.\n");
        }
        v16 = KseRegisterShim((__int64)&KseZeroPoolShim, 0LL, 0LL);
        if ( v16 < 0 )
        {
          v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F384[2 * v17] = v16;
          v18 = KsepDebugFlag;
          KsepHistoryErrors[2 * v17] = 1048692;
          if ( (v18 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"ZeroPool shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ZeroPool shim: failed to register.\n");
        }
        v19 = KseRegisterShim((__int64)&KseClearPCIDBitsShim, 0LL, 0LL);
        if ( v19 < 0 )
        {
          v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F384[2 * v20] = v19;
          v21 = KsepDebugFlag;
          KsepHistoryErrors[2 * v20] = 917629;
          if ( (v21 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"ClearPCIDBits shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ClearPCIDBits shim: failed to register.\n");
        }
        v22 = KseRegisterShim((__int64)&KseKasperskyShim, 0LL, 0LL);
        if ( v22 < 0 )
        {
          v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F384[2 * v23] = v22;
          v24 = KsepDebugFlag;
          KsepHistoryErrors[2 * v23] = 983165;
          if ( (v24 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Kaspersky shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Kaspersky shim: failed to register.\n");
        }
        v25 = KseRegisterShim((__int64)&KseMemcpyShim, 0LL, 0LL);
        if ( v25 < 0 )
        {
          v26 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F384[2 * v26] = v25;
          v27 = KsepDebugFlag;
          KsepHistoryErrors[2 * v26] = 1114208;
          if ( (v27 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Memcpy shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Memcpy shim: failed to register.\n");
        }
        v28 = KseRegisterShim((__int64)&KseKernelPadSectionsOverrideShim, 0LL, 0LL);
        if ( v28 < 0 )
        {
          v29 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F384[2 * v29] = v28;
          v30 = KsepDebugFlag;
          KsepHistoryErrors[2 * v29] = 1179753;
          if ( (v30 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"KernelPadSectionsOverride shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"KernelPadSectionsOverride shim: failed to register.\n");
        }
        v31 = KseRegisterShim((__int64)&KseUserCetBasicModeAllowRetTargetNotCetCompatShim, 0LL, 0LL);
        if ( v31 < 0 )
        {
          v32 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F384[2 * v32] = v31;
          v33 = KsepDebugFlag;
          KsepHistoryErrors[2 * v32] = 1245275;
          if ( (v33 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
        }
      }
      else
      {
        dword_140E66AE8 |= 0x80u;
        matched = -1073741637;
      }
    }
LABEL_54:
    v34 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v34]) = 0;
    LODWORD(KsepHistoryMessages[v34]) = 327934;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(1LL, (int)"KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_59;
  }
  v5 = _InterlockedCompareExchange(&dword_140E66AE4, 1, 0);
  if ( v5 == 2 )
    return 0LL;
  if ( v5 == 1 )
    return 259LL;
  if ( (int)KseShimDatabaseBootInitialize(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL),
              *(void **)(*(_QWORD *)(a1 + 240) + 80LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 88LL)) < 0 )
    return 3221225473LL;
  v10 = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(v10 + 64) && *(_DWORD *)(v10 + 72) )
  {
    matched = KsepEngineInitialize(&KseEngine);
    if ( matched >= 0 )
    {
      matched = KsepMatchInitMachineInfo(a1);
      if ( matched >= 0 )
      {
        dword_140E66AE4 = 2;
        if ( (int)KseRegisterShim((__int64)&KseDsShim, 0LL, 0LL) >= 0 )
        {
          v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v11]) = 0;
          LODWORD(KsepHistoryMessages[v11]) = 721040;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(11LL, (int)"KSE-DS: driver scope shim registered.\n");
          KsepLogInfo(11LL, (__int64)"KSE-DS: driver scope shim registered.\n");
        }
        goto LABEL_54;
      }
    }
  }
  else
  {
    if ( ViVerifierEnabled )
      dword_140E66AE8 |= 0x40u;
    v12 = *(_QWORD *)(a1 + 240);
    if ( !*(_QWORD *)(v12 + 64) || !*(_DWORD *)(v12 + 72) )
      dword_140E66AE8 |= 0x80u;
    matched = -1073741637;
  }
LABEL_59:
  dword_140E66AE4 = 0;
  if ( qword_140E66B28 )
  {
    KsepCacheUninitialize(qword_140E66B28, v7, v8, v9);
    qword_140E66B28 = 0LL;
  }
  KseEngine |= 3u;
  dword_140E66AE8 |= 0x400u;
  v35 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  if ( matched == -1073741637 )
  {
    dword_140F0F384[2 * v35] = -1073741637;
    KsepHistoryErrors[2 * v35] = 327962;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(
        1LL,
        (int)"KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    KsepLogError(
      1LL,
      (__int64)"KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
  }
  else
  {
    dword_140F0F384[2 * v35] = matched;
    KsepHistoryErrors[2 * v35] = 327966;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(1LL, (int)"KSE: Initialization failed: 0x%x\n", (unsigned int)matched);
    KsepLogError(1LL, (__int64)"KSE: Initialization failed: 0x%x\n", matched);
  }
  return (unsigned int)matched;
}
