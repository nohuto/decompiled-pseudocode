/*
 * XREFs of SmKmStoreDelete @ 0x140A55CF0
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14042B640 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmProcessDeleteRequest @ 0x140797F58 (SmProcessDeleteRequest.c)
 *     SmKmCleanup @ 0x14079993C (SmKmCleanup.c)
 *     SmProcessCreateRequest @ 0x140A42DD4 (SmProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SmEtwEnabled @ 0x140387420 (SmEtwEnabled.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14042B6B0 (SmKmStoreRefFromStoreIndex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SmKmEtwLogStoreChange @ 0x1407999C8 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140799AE0 (SmKmEtwLogStoreStats.c)
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
  _QWORD *v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // r13
  __int16 v14; // cx
  __int64 v15; // r13
  ULONGLONG *v16; // rax
  __int64 v17; // r9
  REGHANDLE *v18; // r15
  struct _KTHREAD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r9
  _QWORD *v22; // r15
  __int64 v24; // r9

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
  v11 = KeAbPreAcquire((__int64)v9, 0LL);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, (__int64)v11, (__int64)v9);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  v14 = *((_WORD *)v8 + 16);
  if ( v4 != (v14 & 0x3F) )
    goto LABEL_26;
  v15 = *v8;
  if ( !*v8 )
    goto LABEL_26;
  if ( !a3 )
  {
LABEL_9:
    guard_dispatch_icall_no_overrides(a1, *v8, 7LL, v12);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v8 + 1);
    v16 = SmEtwEnabled(4);
    v18 = v16;
    if ( v16 )
    {
      SmKmEtwLogStoreStats(v16, *v8);
      SmKmEtwLogStoreChange(v18, *v8, SmEventStoreDelete);
    }
    guard_dispatch_icall_no_overrides(a1, v15, 2LL, v17);
    *v8 = 0LL;
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = KeAbPreAcquire(a1 + 416, 0LL);
    v22 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 416), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 416), (__int64)v20, a1 + 416);
    if ( v22 )
      *((_BYTE *)v22 + 10) = 1;
    if ( *(_DWORD *)(a1 + 432) == v3 )
      *(_DWORD *)(a1 + 432) = -1;
    if ( (*(_DWORD *)(a1 + 424))-- == 1 )
      guard_dispatch_icall_no_overrides(a1, 0LL, 4LL, v21);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
    KeAbPostRelease(a1 + 416);
    KeLeaveCriticalRegion();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    guard_dispatch_icall_no_overrides(a1, v15, 1LL, v24);
    return v7;
  }
  if ( (v14 & 0x40) == 0 )
  {
    if ( (v14 & 0x80u) == 0 )
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
