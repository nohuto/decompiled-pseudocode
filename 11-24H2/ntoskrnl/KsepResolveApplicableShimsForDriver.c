/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x14073D7B8
 * Callers:
 *     KsepGetShimsForDriver @ 0x140941A34 (KsepGetShimsForDriver.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KsepLogInfo @ 0x140488AF8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140488B28 (KsepLogError.c)
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     KsepLoadShimProvider @ 0x1405C7C3C (KsepLoadShimProvider.c)
 *     KsepResolveShimHooks @ 0x14073D0EC (KsepResolveShimHooks.c)
 *     KsepGetLoadedModulesList @ 0x14073DFB0 (KsepGetLoadedModulesList.c)
 *     KsepIsShimRegistered @ 0x140AB0DC0 (KsepIsShimRegistered.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r15
  int ShimProvider; // edi
  int v6; // ebp
  int v7; // r12d
  char *v8; // rax
  __int64 v9; // r8
  signed __int8 v10; // cf
  char *v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // r14
  int v15; // eax
  __int64 i; // rbp
  unsigned int *v17; // rsi
  __int64 v18; // rax
  struct _KTHREAD *v19; // rax
  char *v20; // rax
  __int64 v21; // r8
  char *v22; // rsi
  __int64 j; // rsi
  unsigned int *v24; // r14
  __int64 v25; // rax
  struct _KTHREAD *v26; // rax
  char *v27; // rax
  char *v28; // rsi
  __int64 k; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  int v33; // [rsp+70h] [rbp+18h]
  void *v34; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  ShimProvider = 0;
  v34 = 0LL;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v33 = 0;
  v7 = 0;
  v8 = (char *)KeAbPreAcquire((__int64)&qword_140E66C40, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66C40, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_140E66C40, v8, (__int64)&qword_140E66C40);
  if ( v11 )
    v11[10] = 1;
  if ( (_DWORD)v3 )
  {
    v12 = a1 + 72;
    v13 = a1;
    v14 = v3;
    do
    {
      if ( (unsigned int)KsepIsShimRegistered(&KseEngine, v13, v9, v13 + 72) == 1 )
      {
        v15 = *(_DWORD *)(*(_QWORD *)v12 + 24LL);
        if ( !v15 )
          v7 = 1;
        *(_DWORD *)(*(_QWORD *)v12 + 24LL) = v15 + 1;
      }
      else
      {
        *(_QWORD *)v12 = 0LL;
        v7 = 1;
        v33 = 1;
      }
      v13 += 80LL;
      v12 += 80LL;
      --v14;
    }
    while ( v14 );
    v6 = v33;
    ShimProvider = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66C40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66C40);
  KeAbPostRelease((ULONG_PTR)&qword_140E66C40);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v3; i = (unsigned int)(i + 1) )
    {
      v17 = (unsigned int *)(a1 + 80 * i);
      if ( !*((_QWORD *)v17 + 9) )
      {
        ShimProvider = KsepLoadShimProvider(a1 + 80 * i);
        if ( ShimProvider < 0 )
        {
          v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F684[2 * v18] = ShimProvider;
          KsepHistoryErrors[2 * v18] = 459211;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(
              6LL,
              (int)"KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
              *v17,
              (unsigned int)ShimProvider);
          KsepLogError(
            6LL,
            (__int64)"KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
            *v17,
            (unsigned int)ShimProvider);
          goto LABEL_62;
        }
      }
    }
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = (char *)KeAbPreAcquire((__int64)&qword_140E66C40, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66C40, 0LL);
    v22 = v20;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140E66C40, v20, (__int64)&qword_140E66C40);
    if ( v22 )
      v22[10] = 1;
    for ( j = 0LL; (unsigned int)j < (unsigned int)v3; j = (unsigned int)(j + 1) )
    {
      v24 = (unsigned int *)(a1 + 80 * j);
      if ( !(unsigned int)KsepIsShimRegistered(&KseEngine, v24, v21, v24 + 18) )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66C40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66C40);
        KeAbPostRelease((ULONG_PTR)&qword_140E66C40);
        KeLeaveCriticalRegion();
        ShimProvider = -1073740782;
        v25 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        dword_140F0F684[2 * v25] = -1073740782;
        KsepHistoryErrors[2 * v25] = 459240;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(6LL, (int)"KSE: The provider did not register shim [0x%08X] in time\n", *v24);
        KsepLogError(6LL, (__int64)"KSE: The provider did not register shim [0x%08X] in time\n", *v24);
        goto LABEL_62;
      }
      ++*(_DWORD *)(*((_QWORD *)v24 + 9) + 24LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66C40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66C40);
    KeAbPostRelease((ULONG_PTR)&qword_140E66C40);
    KeLeaveCriticalRegion();
  }
  if ( v7 )
  {
    ShimProvider = KsepGetLoadedModulesList(&v34);
    if ( ShimProvider < 0 )
      goto LABEL_62;
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v27 = (char *)KeAbPreAcquire((__int64)&qword_140E66C40, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66C40, 0LL);
    v28 = v27;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140E66C40, v27, (__int64)&qword_140E66C40);
    if ( v28 )
      v28[10] = 1;
    for ( k = 0LL; (unsigned int)k < (unsigned int)v3; k = (unsigned int)(k + 1) )
    {
      ShimProvider = KsepResolveShimHooks(
                       (__int64)v34,
                       *(int **)(*(_QWORD *)(*(_QWORD *)(a1 + 80 * k + 72) + 16LL) + 48LL));
      if ( ShimProvider < 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66C40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66C40);
        KeAbPostRelease((ULONG_PTR)&qword_140E66C40);
        KeLeaveCriticalRegion();
        v30 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        dword_140F0F684[2 * v30] = ShimProvider;
        KsepHistoryErrors[2 * v30] = 459288;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(
            6LL,
            (int)"KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            *(unsigned int *)(a1 + 80 * k),
            (unsigned int)ShimProvider);
        KsepLogError(
          6LL,
          (__int64)"KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          *(unsigned int *)(a1 + 80 * k),
          (unsigned int)ShimProvider);
        goto LABEL_62;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66C40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66C40);
    KeAbPostRelease((ULONG_PTR)&qword_140E66C40);
    KeLeaveCriticalRegion();
  }
  v31 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
  HIDWORD(KsepHistoryMessages[v31]) = 0;
  LODWORD(KsepHistoryMessages[v31]) = 459302;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(6LL, (int)"KSE: Successfully resolved %d shim(s).\n", (unsigned int)v3);
  KsepLogInfo(6LL, (__int64)"KSE: Successfully resolved %d shim(s).\n", v3);
LABEL_62:
  KsepPoolFreePaged(v34);
  return (unsigned int)ShimProvider;
}
