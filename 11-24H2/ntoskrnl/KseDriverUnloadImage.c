/*
 * XREFs of KseDriverUnloadImage @ 0x140959CDC
 * Callers:
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KsepDebugPrint @ 0x1402CA2D8 (KsepDebugPrint.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KsepLogInfo @ 0x14048E6C8 (KsepLogInfo.c)
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1405E9340 (RtlAssert.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     KsepDbFreeDriverShims @ 0x140959C50 (KsepDbFreeDriverShims.c)
 *     KsepIsModuleShimmed @ 0x14095A46C (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  signed __int8 v7; // cf
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  unsigned int *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 *v15; // rsi
  __int64 v16; // rax
  int v17; // eax
  int v18; // ecx
  __int64 *v19; // rcx
  __int64 **v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rbx
  void *v27; // rcx
  __int64 v28; // rax
  void *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // [rsp+50h] [rbp+8h] BYREF

  v31 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140E66AE4 != 2 || (KseEngine & 1) != 0 )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, *(_QWORD *)(a1 + 48), &v31) && v31 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = KeAbPreAcquire((__int64)&qword_140E66B10, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66B10, 0LL);
    v8 = v4;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&qword_140E66B10, (__int64)v4, (__int64)&qword_140E66B10);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v9 = (_QWORD *)v31;
    v10 = 0LL;
    v11 = (unsigned int *)(v31 + 24);
    v12 = *(_DWORD *)(v31 + 24);
    if ( v12 )
    {
      do
      {
        v13 = *(_QWORD *)(v9[4] + 80 * v10 + 72);
        if ( (*(_DWORD *)(v13 + 28) & 4) == 0 && *(_QWORD *)(*(_QWORD *)(v13 + 16) + 32LL) )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 48), v13, v5, v6);
        v12 = *v11;
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < *v11 );
    }
    v14 = 0LL;
    if ( v12 )
    {
      do
      {
        v15 = *(__int64 **)(v9[4] + 80 * v14 + 72);
        if ( !*((_DWORD *)v15 + 6) )
        {
          v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F384[2 * v16] = -1073740768;
          KsepHistoryErrors[2 * v16] = 460171;
          if ( (KsepDebugFlag & 4) != 0 )
            RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x58Bu, 0LL);
        }
        v17 = *((_DWORD *)v15 + 7);
        v18 = *((_DWORD *)v15 + 6) - 1;
        *((_DWORD *)v15 + 6) = v18;
        if ( (v17 & 4) != 0 && !v18 )
        {
          v19 = (__int64 *)*v15;
          if ( *(__int64 **)(*v15 + 8) != v15 )
            goto LABEL_47;
          v20 = (__int64 **)v15[1];
          if ( *v20 != v15 )
            goto LABEL_47;
          *v20 = v19;
          v19[1] = (__int64)v20;
        }
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < *v11 );
      v9 = (_QWORD *)v31;
    }
    v21 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v22 = (_QWORD *)v9[1], (_QWORD *)*v22 != v9) )
LABEL_47:
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66B10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66B10);
    KeAbPostRelease((ULONG_PTR)&qword_140E66B10);
    KeLeaveCriticalRegion();
    v23 = *v11;
    v24 = 0LL;
    if ( *v11 )
    {
      v25 = v31;
      do
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v25 + 32) + 80 * v24 + 72);
        v27 = *(void **)(v26 + 32);
        if ( v27 )
          ObfDereferenceObject(v27);
        if ( (*(_DWORD *)(v26 + 28) & 4) != 0 && !*(_DWORD *)(v26 + 24) )
        {
          KsepPoolFreePaged((void *)v26);
          v28 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v28]) = 0;
          LODWORD(KsepHistoryMessages[v28]) = 460228;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(
              5LL,
              (int)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
              v26);
          KsepLogInfo(
            5LL,
            (__int64)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
            v26);
        }
        v23 = *v11;
        v24 = (unsigned int)(v24 + 1);
      }
      while ( (unsigned int)v24 < *v11 );
    }
    v29 = (void *)v31;
    KsepDbFreeDriverShims(*(_QWORD **)(v31 + 32), v23);
    KsepPoolFreePaged(v29);
    v30 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v30]) = 0;
    LODWORD(KsepHistoryMessages[v30]) = 460236;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(5LL, (int)"KSE: Shimmed driver unload notification processed\n");
    KsepLogInfo(5LL, (__int64)"KSE: Shimmed driver unload notification processed\n");
  }
  return 0LL;
}
