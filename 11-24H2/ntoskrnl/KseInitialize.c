/*
 * XREFs of KseInitialize @ 0x140C2D51C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogInfo @ 0x140488AF8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140488B28 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     KseRegisterShim @ 0x14073CB00 (KseRegisterShim.c)
 *     KsepCacheUninitialize @ 0x14073E600 (KsepCacheUninitialize.c)
 *     KseShimDatabaseClose @ 0x140943D3C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x140943EEC (KseShimDatabaseOpen.c)
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 *     KsepEngineInitialize @ 0x140C2D410 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140C2DF2C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140C2E094 (KseShimDatabaseBootInitialize.c)
 *     KseVersionLieInitialize @ 0x140C2E5BC (KseVersionLieInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, unsigned int a2)
{
  int matched; // edi
  signed __int32 v5; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  char v13; // al
  int v14; // eax
  __int64 v15; // rcx
  char v16; // al
  int v17; // eax
  __int64 v18; // rcx
  char v19; // al
  int v20; // eax
  __int64 v21; // rcx
  char v22; // al
  int v23; // eax
  __int64 v24; // rcx
  char v25; // al
  int v26; // eax
  __int64 v27; // rcx
  char v28; // al
  int v29; // eax
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v34 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v34);
      if ( matched >= 0 && v34 )
      {
        KseShimDatabaseClose(v34);
        KseVersionLieInitialize();
        v11 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v11 < 0 )
        {
          v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F684[2 * v12] = v11;
          v13 = KsepDebugFlag;
          KsepHistoryErrors[2 * v12] = 852115;
          if ( (v13 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12LL, (__int64)"Built-in SkipDriverUnload shims: failed to register.\n");
        }
        v14 = KseRegisterShim((__int64)&KseZeroPoolShim, 0LL, 0LL);
        if ( v14 < 0 )
        {
          v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F684[2 * v15] = v14;
          v16 = KsepDebugFlag;
          KsepHistoryErrors[2 * v15] = 1048692;
          if ( (v16 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"ZeroPool shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ZeroPool shim: failed to register.\n");
        }
        v17 = KseRegisterShim((__int64)&KseClearPCIDBitsShim, 0LL, 0LL);
        if ( v17 < 0 )
        {
          v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F684[2 * v18] = v17;
          v19 = KsepDebugFlag;
          KsepHistoryErrors[2 * v18] = 917629;
          if ( (v19 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"ClearPCIDBits shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ClearPCIDBits shim: failed to register.\n");
        }
        v20 = KseRegisterShim((__int64)&KseKasperskyShim, 0LL, 0LL);
        if ( v20 < 0 )
        {
          v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F684[2 * v21] = v20;
          v22 = KsepDebugFlag;
          KsepHistoryErrors[2 * v21] = 983165;
          if ( (v22 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Kaspersky shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Kaspersky shim: failed to register.\n");
        }
        v23 = KseRegisterShim((__int64)&KseMemcpyShim, 0LL, 0LL);
        if ( v23 < 0 )
        {
          v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F684[2 * v24] = v23;
          v25 = KsepDebugFlag;
          KsepHistoryErrors[2 * v24] = 1114208;
          if ( (v25 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Memcpy shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Memcpy shim: failed to register.\n");
        }
        v26 = KseRegisterShim((__int64)&KseKernelPadSectionsOverrideShim, 0LL, 0LL);
        if ( v26 < 0 )
        {
          v27 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F684[2 * v27] = v26;
          v28 = KsepDebugFlag;
          KsepHistoryErrors[2 * v27] = 1179753;
          if ( (v28 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"KernelPadSectionsOverride shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"KernelPadSectionsOverride shim: failed to register.\n");
        }
        v29 = KseRegisterShim((__int64)&KseUserCetBasicModeAllowRetTargetNotCetCompatShim, 0LL, 0LL);
        if ( v29 < 0 )
        {
          v30 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F684[2 * v30] = v29;
          v31 = KsepDebugFlag;
          KsepHistoryErrors[2 * v30] = 1245275;
          if ( (v31 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
        }
      }
      else
      {
        dword_140E66C18 |= 0x80u;
        matched = -1073741637;
      }
    }
LABEL_54:
    v32 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v32]) = 0;
    LODWORD(KsepHistoryMessages[v32]) = 327934;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(1LL, (int)"KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_59;
  }
  v5 = _InterlockedCompareExchange(&dword_140E66C14, 1, 0);
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
  v8 = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(v8 + 64) && *(_DWORD *)(v8 + 72) )
  {
    matched = KsepEngineInitialize(&KseEngine);
    if ( matched >= 0 )
    {
      matched = KsepMatchInitMachineInfo(a1);
      if ( matched >= 0 )
      {
        dword_140E66C14 = 2;
        if ( (int)KseRegisterShim((__int64)&KseDsShim, 0LL, 0LL) >= 0 )
        {
          v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v9]) = 0;
          LODWORD(KsepHistoryMessages[v9]) = 721040;
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
      dword_140E66C18 |= 0x40u;
    v10 = *(_QWORD *)(a1 + 240);
    if ( !*(_QWORD *)(v10 + 64) || !*(_DWORD *)(v10 + 72) )
      dword_140E66C18 |= 0x80u;
    matched = -1073741637;
  }
LABEL_59:
  dword_140E66C14 = 0;
  if ( qword_140E66C58 )
  {
    KsepCacheUninitialize(qword_140E66C58, v7);
    qword_140E66C58 = 0LL;
  }
  KseEngine |= 3u;
  dword_140E66C18 |= 0x400u;
  v33 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  if ( matched == -1073741637 )
  {
    dword_140F0F684[2 * v33] = -1073741637;
    KsepHistoryErrors[2 * v33] = 327962;
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
    dword_140F0F684[2 * v33] = matched;
    KsepHistoryErrors[2 * v33] = 327966;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(1LL, (int)"KSE: Initialization failed: 0x%x\n", (unsigned int)matched);
    KsepLogError(1LL, (__int64)"KSE: Initialization failed: 0x%x\n", matched);
  }
  return (unsigned int)matched;
}
