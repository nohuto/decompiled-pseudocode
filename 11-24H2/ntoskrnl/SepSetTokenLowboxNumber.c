/*
 * XREFs of SepSetTokenLowboxNumber @ 0x140A42978
 * Callers:
 *     SepGetAnonymousToken @ 0x1403B977C (SepGetAnonymousToken.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SeExchangePrimaryToken @ 0x140792C70 (SeExchangePrimaryToken.c)
 *     SeSetSessionIdToken @ 0x140A471F8 (SeSetSessionIdToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SepGetTokenSessionMapEntry @ 0x14047A074 (SepGetTokenSessionMapEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x140794D3C (SepInitializeLowBoxNumberTable.c)
 *     SepGetLowBoxNumberEntry @ 0x140A42C4C (SepGetLowBoxNumberEntry.c)
 */

__int64 __fastcall SepSetTokenLowboxNumber(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  char v4; // r12
  char v5; // r13
  int LowBoxNumberEntry; // esi
  char *v7; // r14
  struct _KTHREAD *v8; // rax
  volatile signed __int32 *v9; // rdi
  ULONG_PTR v10; // rcx
  char *v11; // rax
  signed __int8 v12; // cf
  volatile signed __int64 *v13; // rdi
  char *v14; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v17; // rdi
  int TokenSessionMapEntry; // eax
  struct _KTHREAD *v19; // rax
  char *v20; // rax
  char *v21; // rdi
  struct _KTHREAD *v22; // rax
  volatile signed __int32 *v23; // rdi
  ULONG_PTR v24; // rcx
  char *v25; // rax
  volatile signed __int64 *v26; // rdi
  char *v27; // r15
  _QWORD v28[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+60h] BYREF

  v2 = *(unsigned int *)(a1 + 120);
  BugCheckParameter2 = 0LL;
  v28[0] = 0LL;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  LowBoxNumberEntry = 0;
  if ( (unsigned int)v2 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = (char *)KeAbPreAcquire((__int64)&LowboxSessionMapLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&LowboxSessionMapLock, 0, v17, (__int64)&LowboxSessionMapLock);
    if ( v17 )
      v17[10] = 1;
    v4 = 1;
    TokenSessionMapEntry = SepGetTokenSessionMapEntry(v2, 0, (__int64 *)&BugCheckParameter2);
    LowBoxNumberEntry = TokenSessionMapEntry;
    if ( TokenSessionMapEntry < 0 )
    {
      if ( TokenSessionMapEntry != -1073741275 )
        goto LABEL_16;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
      KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
      KeLeaveCriticalRegion();
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      v20 = (char *)KeAbPreAcquire((__int64)&LowboxSessionMapLock, 0LL);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&LowboxSessionMapLock, 0LL);
      v21 = v20;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&LowboxSessionMapLock, v20, (__int64)&LowboxSessionMapLock);
      if ( v21 )
        v21[10] = 1;
      LowBoxNumberEntry = SepGetTokenSessionMapEntry(v2, 1, (__int64 *)&BugCheckParameter2);
      v4 = 0;
      v5 = 1;
      if ( LowBoxNumberEntry < 0 )
        goto LABEL_14;
    }
    v7 = (char *)BugCheckParameter2;
  }
  else
  {
    v7 = (char *)&g_SessionLowboxArray + 40 * v2;
    BugCheckParameter2 = (ULONG_PTR)v7;
  }
  if ( !v7[32] )
  {
    v22 = KeGetCurrentThread();
    v23 = (volatile signed __int32 *)BugCheckParameter2;
    v24 = BugCheckParameter2;
    --v22->KernelApcDisable;
    v25 = (char *)KeAbPreAcquire(v24, 0LL);
    v12 = _interlockedbittestandset64(v23, 0LL);
    v26 = (volatile signed __int64 *)BugCheckParameter2;
    v27 = v25;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v25, BugCheckParameter2);
    if ( v27 )
      v27[10] = 1;
    if ( !v7[32] )
      LowBoxNumberEntry = SepInitializeLowBoxNumberTable((__int64)v26);
    if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v3 = a1;
  }
  if ( !LowBoxNumberEntry )
  {
    v8 = KeGetCurrentThread();
    v9 = (volatile signed __int32 *)BugCheckParameter2;
    v10 = BugCheckParameter2;
    --v8->KernelApcDisable;
    v11 = (char *)KeAbPreAcquire(v10, 0LL);
    v12 = _interlockedbittestandset64(v9, 0LL);
    v13 = (volatile signed __int64 *)BugCheckParameter2;
    v14 = v11;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v11, BugCheckParameter2);
    if ( v14 )
      v14[10] = 1;
    LowBoxNumberEntry = SepGetLowBoxNumberEntry(v13, a2, v28);
    if ( !LowBoxNumberEntry )
      *(_QWORD *)(v3 + 1080) = v28[0];
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
LABEL_14:
  if ( v5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
    goto LABEL_20;
  }
  if ( v4 )
  {
LABEL_16:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
LABEL_20:
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LowBoxNumberEntry;
}
