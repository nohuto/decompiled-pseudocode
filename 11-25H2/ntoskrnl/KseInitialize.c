/*
 * XREFs of KseInitialize @ 0x140C1A2FC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogInfo @ 0x14048E720 (KsepLogInfo.c)
 *     KsepLogError @ 0x14048E750 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1404D3784 (KsepDebugPrint.c)
 *     KseRegisterShim @ 0x140732BB0 (KseRegisterShim.c)
 *     KsepCacheUninitialize @ 0x1407346B0 (KsepCacheUninitialize.c)
 *     KseShimDatabaseClose @ 0x14082A294 (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14082A43C (KseShimDatabaseOpen.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 *     KsepEngineInitialize @ 0x140C1A1F0 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140C1AD0C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140C1AE74 (KseShimDatabaseBootInitialize.c)
 *     KseVersionLieInitialize @ 0x140C1B39C (KseVersionLieInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, unsigned int a2)
{
  int matched; // edi
  signed __int32 v5; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  char v12; // al
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
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v33 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v33);
      if ( matched >= 0 && v33 )
      {
        KseShimDatabaseClose(v33);
        KseVersionLieInitialize();
        v10 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v10 < 0 )
        {
          v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0ECA4[2 * v11] = v10;
          v12 = KsepDebugFlag;
          KsepHistoryErrors[2 * v11] = 852115;
          if ( (v12 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12LL, (__int64)"Built-in SkipDriverUnload shims: failed to register.\n");
        }
        v13 = KseRegisterShim((__int64)&KseZeroPoolShim, 0LL, 0LL);
        if ( v13 < 0 )
        {
          v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0ECA4[2 * v14] = v13;
          v15 = KsepDebugFlag;
          KsepHistoryErrors[2 * v14] = 1048692;
          if ( (v15 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"ZeroPool shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ZeroPool shim: failed to register.\n");
        }
        v16 = KseRegisterShim((__int64)&KseClearPCIDBitsShim, 0LL, 0LL);
        if ( v16 < 0 )
        {
          v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0ECA4[2 * v17] = v16;
          v18 = KsepDebugFlag;
          KsepHistoryErrors[2 * v17] = 917629;
          if ( (v18 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"ClearPCIDBits shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ClearPCIDBits shim: failed to register.\n");
        }
        v19 = KseRegisterShim((__int64)&KseKasperskyShim, 0LL, 0LL);
        if ( v19 < 0 )
        {
          v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0ECA4[2 * v20] = v19;
          v21 = KsepDebugFlag;
          KsepHistoryErrors[2 * v20] = 983165;
          if ( (v21 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Kaspersky shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Kaspersky shim: failed to register.\n");
        }
        v22 = KseRegisterShim((__int64)&KseMemcpyShim, 0LL, 0LL);
        if ( v22 < 0 )
        {
          v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0ECA4[2 * v23] = v22;
          v24 = KsepDebugFlag;
          KsepHistoryErrors[2 * v23] = 1114208;
          if ( (v24 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Memcpy shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Memcpy shim: failed to register.\n");
        }
        v25 = KseRegisterShim((__int64)&KseKernelPadSectionsOverrideShim, 0LL, 0LL);
        if ( v25 < 0 )
        {
          v26 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0ECA4[2 * v26] = v25;
          v27 = KsepDebugFlag;
          KsepHistoryErrors[2 * v26] = 1179753;
          if ( (v27 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"KernelPadSectionsOverride shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"KernelPadSectionsOverride shim: failed to register.\n");
        }
        v28 = KseRegisterShim((__int64)&KseUserCetBasicModeAllowRetTargetNotCetCompatShim, 0LL, 0LL);
        if ( v28 < 0 )
        {
          v29 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0ECA4[2 * v29] = v28;
          v30 = KsepDebugFlag;
          KsepHistoryErrors[2 * v29] = 1245275;
          if ( (v30 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
        }
      }
      else
      {
        dword_140E66818 |= 0x80u;
        matched = -1073741637;
      }
    }
LABEL_54:
    v31 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v31]) = 0;
    LODWORD(KsepHistoryMessages[v31]) = 327934;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(1LL, (int)"KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_59;
  }
  v5 = _InterlockedCompareExchange(&dword_140E66814, 1, 0);
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
  v7 = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(v7 + 64) && *(_DWORD *)(v7 + 72) )
  {
    matched = KsepEngineInitialize(&KseEngine);
    if ( matched >= 0 )
    {
      matched = KsepMatchInitMachineInfo(a1);
      if ( matched >= 0 )
      {
        dword_140E66814 = 2;
        if ( (int)KseRegisterShim((__int64)&KseDsShim, 0LL, 0LL) >= 0 )
        {
          v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v8]) = 0;
          LODWORD(KsepHistoryMessages[v8]) = 721040;
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
      dword_140E66818 |= 0x40u;
    v9 = *(_QWORD *)(a1 + 240);
    if ( !*(_QWORD *)(v9 + 64) || !*(_DWORD *)(v9 + 72) )
      dword_140E66818 |= 0x80u;
    matched = -1073741637;
  }
LABEL_59:
  dword_140E66814 = 0;
  if ( qword_140E66858 )
  {
    KsepCacheUninitialize(qword_140E66858);
    qword_140E66858 = 0LL;
  }
  KseEngine |= 3u;
  dword_140E66818 |= 0x400u;
  v32 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  if ( matched == -1073741637 )
  {
    dword_140F0ECA4[2 * v32] = -1073741637;
    KsepHistoryErrors[2 * v32] = 327962;
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
    dword_140F0ECA4[2 * v32] = matched;
    KsepHistoryErrors[2 * v32] = 327966;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(1LL, (int)"KSE: Initialization failed: 0x%x\n", (unsigned int)matched);
    KsepLogError(1LL, (__int64)"KSE: Initialization failed: 0x%x\n", matched);
  }
  return (unsigned int)matched;
}
