/*
 * XREFs of KseDriverUnloadImage @ 0x14094179C
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KsepLogInfo @ 0x140488AF8 (KsepLogInfo.c)
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KsepDbFreeDriverShims @ 0x140941710 (KsepDbFreeDriverShims.c)
 *     KsepIsModuleShimmed @ 0x140941F2C (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rdi
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  unsigned int *v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 *v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbx
  void *v25; // rcx
  __int64 v26; // rax
  void *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF

  v29 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140E66C14 != 2 || (KseEngine & 1) != 0 )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, *(_QWORD *)(a1 + 48), &v29) && v29 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = (char *)KeAbPreAcquire((__int64)&qword_140E66C40, 0LL);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66C40, 0LL);
    v6 = v4;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&qword_140E66C40, v4, (__int64)&qword_140E66C40);
    if ( v6 )
      v6[10] = 1;
    v7 = (_QWORD *)v29;
    v8 = 0LL;
    v9 = (unsigned int *)(v29 + 24);
    v10 = *(_DWORD *)(v29 + 24);
    if ( v10 )
    {
      do
      {
        v11 = *(_QWORD *)(v7[4] + 80 * v8 + 72);
        if ( (*(_DWORD *)(v11 + 28) & 4) == 0 && *(_QWORD *)(*(_QWORD *)(v11 + 16) + 32LL) )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 48), v11);
        v10 = *v9;
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *v9 );
    }
    v12 = 0LL;
    if ( v10 )
    {
      do
      {
        v13 = *(__int64 **)(v7[4] + 80 * v12 + 72);
        if ( !*((_DWORD *)v13 + 6) )
        {
          v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F684[2 * v14] = -1073740768;
          KsepHistoryErrors[2 * v14] = 460171;
          if ( (KsepDebugFlag & 4) != 0 )
            RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x58Bu, 0LL);
        }
        v15 = *((_DWORD *)v13 + 7);
        v16 = *((_DWORD *)v13 + 6) - 1;
        *((_DWORD *)v13 + 6) = v16;
        if ( (v15 & 4) != 0 && !v16 )
        {
          v17 = (__int64 *)*v13;
          if ( *(__int64 **)(*v13 + 8) != v13 )
            goto LABEL_47;
          v18 = (__int64 **)v13[1];
          if ( *v18 != v13 )
            goto LABEL_47;
          *v18 = v17;
          v17[1] = (__int64)v18;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *v9 );
      v7 = (_QWORD *)v29;
    }
    v19 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v20 = (_QWORD *)v7[1], (_QWORD *)*v20 != v7) )
LABEL_47:
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66C40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66C40);
    KeAbPostRelease((ULONG_PTR)&qword_140E66C40);
    KeLeaveCriticalRegion();
    v21 = *v9;
    v22 = 0LL;
    if ( *v9 )
    {
      v23 = v29;
      do
      {
        v24 = *(_QWORD *)(*(_QWORD *)(v23 + 32) + 80 * v22 + 72);
        v25 = *(void **)(v24 + 32);
        if ( v25 )
          ObfDereferenceObject(v25);
        if ( (*(_DWORD *)(v24 + 28) & 4) != 0 && !*(_DWORD *)(v24 + 24) )
        {
          KsepPoolFreePaged((void *)v24);
          v26 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v26]) = 0;
          LODWORD(KsepHistoryMessages[v26]) = 460228;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(
              5LL,
              (int)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
              v24);
          KsepLogInfo(
            5LL,
            (__int64)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
            v24);
        }
        v21 = *v9;
        v22 = (unsigned int)(v22 + 1);
      }
      while ( (unsigned int)v22 < *v9 );
    }
    v27 = (void *)v29;
    KsepDbFreeDriverShims(*(_QWORD **)(v29 + 32), v21);
    KsepPoolFreePaged(v27);
    v28 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v28]) = 0;
    LODWORD(KsepHistoryMessages[v28]) = 460236;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(5LL, (int)"KSE: Shimmed driver unload notification processed\n");
    KsepLogInfo(5LL, (__int64)"KSE: Shimmed driver unload notification processed\n");
  }
  return 0LL;
}
