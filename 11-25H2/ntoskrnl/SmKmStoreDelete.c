/*
 * XREFs of SmKmStoreDelete @ 0x140A51F20
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1404323B0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmProcessDeleteRequest @ 0x140788B88 (SmProcessDeleteRequest.c)
 *     SmKmCleanup @ 0x14078A574 (SmKmCleanup.c)
 *     SmProcessCreateRequest @ 0x1409C16A4 (SmProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     SmEtwEnabled @ 0x14039E900 (SmEtwEnabled.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140432420 (SmKmStoreRefFromStoreIndex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SmKmEtwLogStoreChange @ 0x14078A600 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14078A718 (SmKmEtwLogStoreStats.c)
 */

__int64 __fastcall SmKmStoreDelete(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // r15d
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // r14
  unsigned __int64 *v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rax
  __int64 *v12; // r13
  __int16 v13; // cx
  ULONGLONG *v14; // rax
  REGHANDLE *v15; // r15
  struct _KTHREAD *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // r15

  v3 = a2 & 0x3FF;
  v4 = a2 >> 10;
  v6 = SmKmStoreRefFromStoreIndex(a1, v3);
  v7 = 0;
  v8 = v6;
  if ( !v6 )
    return (unsigned int)-1073741735;
  v9 = (unsigned __int64 *)(v6 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((__int64)v9, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v11, (__int64)v9);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  v13 = *(_WORD *)(v8 + 32);
  if ( v4 != (v13 & 0x3F) || !*(_QWORD *)v8 )
    goto LABEL_26;
  if ( !a3 )
  {
LABEL_9:
    guard_dispatch_icall_no_overrides(a1);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v8 + 8));
    v14 = SmEtwEnabled(4);
    v15 = v14;
    if ( v14 )
    {
      SmKmEtwLogStoreStats(v14, *(_QWORD *)v8);
      SmKmEtwLogStoreChange(v15, *(_QWORD *)v8, SmEventStoreDelete);
    }
    guard_dispatch_icall_no_overrides(a1);
    *(_QWORD *)v8 = 0LL;
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = KeAbPreAcquire(a1 + 416, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 416), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 416), v17, a1 + 416);
    if ( v18 )
      *((_BYTE *)v18 + 10) = 1;
    if ( *(_DWORD *)(a1 + 432) == v3 )
      *(_DWORD *)(a1 + 432) = -1;
    if ( (*(_DWORD *)(a1 + 424))-- == 1 )
      guard_dispatch_icall_no_overrides(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
    KeAbPostRelease(a1 + 416);
    KeLeaveCriticalRegion();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    guard_dispatch_icall_no_overrides(a1);
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
