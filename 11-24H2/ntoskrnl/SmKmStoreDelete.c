/*
 * XREFs of SmKmStoreDelete @ 0x140A4DC40
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14041E1D0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmProcessDeleteRequest @ 0x140798068 (SmProcessDeleteRequest.c)
 *     SmKmCleanup @ 0x140799A4C (SmKmCleanup.c)
 *     SmProcessCreateRequest @ 0x140A38664 (SmProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SmEtwEnabled @ 0x140380D60 (SmEtwEnabled.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14041E240 (SmKmStoreRefFromStoreIndex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SmKmEtwLogStoreChange @ 0x140799AD8 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140799BF0 (SmKmEtwLogStoreStats.c)
 */

__int64 __fastcall SmKmStoreDelete(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // r15d
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 *v8; // r14
  unsigned __int64 *v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rax
  char *v12; // r13
  __int16 v13; // cx
  __int64 v14; // r13
  ULONGLONG *v15; // rax
  REGHANDLE *v16; // r15
  struct _KTHREAD *v17; // rax
  char *v18; // rax
  char *v19; // r15

  v3 = a2 & 0x3FF;
  v4 = a2 >> 10;
  v6 = SmKmStoreRefFromStoreIndex(a1, v3);
  v7 = 0;
  v8 = (__int64 *)v6;
  if ( !v6 )
    return (unsigned int)-1073741735;
  v9 = (unsigned __int64 *)(v6 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (char *)KeAbPreAcquire((__int64)v9, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v11, (__int64)v9);
  if ( v12 )
    v12[10] = 1;
  v13 = *((_WORD *)v8 + 16);
  if ( v4 != (v13 & 0x3F) )
    goto LABEL_26;
  v14 = *v8;
  if ( !*v8 )
    goto LABEL_26;
  if ( !a3 )
  {
LABEL_9:
    guard_dispatch_icall_no_overrides(a1, *v8);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v8 + 1);
    v15 = SmEtwEnabled(4);
    v16 = v15;
    if ( v15 )
    {
      SmKmEtwLogStoreStats(v15, *v8);
      SmKmEtwLogStoreChange(v16, *v8, SmEventStoreDelete);
    }
    guard_dispatch_icall_no_overrides(a1, v14);
    *v8 = 0LL;
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = (char *)KeAbPreAcquire(a1 + 416, 0LL);
    v19 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 416), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 416), v18, a1 + 416);
    if ( v19 )
      v19[10] = 1;
    if ( *(_DWORD *)(a1 + 432) == v3 )
      *(_DWORD *)(a1 + 432) = -1;
    if ( (*(_DWORD *)(a1 + 424))-- == 1 )
      guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
    KeAbPostRelease(a1 + 416);
    KeLeaveCriticalRegion();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    guard_dispatch_icall_no_overrides(a1, v14);
    return v7;
  }
  if ( (v13 & 0x40) == 0 )
  {
    if ( (v13 & 0x80u) == 0 )
      goto LABEL_9;
    v7 = -1073741790;
  }
  else
  {
LABEL_26:
    v7 = -1073741735;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  KeLeaveCriticalRegion();
  return v7;
}
