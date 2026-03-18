/*
 * XREFs of SepSetTokenLowboxNumber @ 0x140A0DB74
 * Callers:
 *     SepGetAnonymousToken @ 0x1402905D8 (SepGetAnonymousToken.c)
 *     SeExchangePrimaryToken @ 0x14078384C (SeExchangePrimaryToken.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x140A4CF28 (SeSetSessionIdToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x14047E744 (SepGetTokenSessionMapEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x1407858E4 (SepInitializeLowBoxNumberTable.c)
 *     SepGetLowBoxNumberEntry @ 0x140A0DE40 (SepGetLowBoxNumberEntry.c)
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
  __int64 *v11; // rax
  signed __int8 v12; // cf
  volatile signed __int64 *v13; // rdi
  __int64 *v14; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v17; // rdi
  int TokenSessionMapEntry; // eax
  struct _KTHREAD *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rdi
  struct _KTHREAD *v22; // rax
  volatile signed __int32 *v23; // rdi
  ULONG_PTR v24; // rcx
  __int64 *v25; // rax
  volatile signed __int64 *v26; // rdi
  __int64 *v27; // r15
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
    v17 = KeAbPreAcquire((__int64)&LowboxSessionMapLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&LowboxSessionMapLock,
        0,
        v17,
        (unsigned __int64)&LowboxSessionMapLock);
    if ( v17 )
      *((_BYTE *)v17 + 10) = 1;
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
      v20 = KeAbPreAcquire((__int64)&LowboxSessionMapLock, 0LL);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&LowboxSessionMapLock, 0LL);
      v21 = v20;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&LowboxSessionMapLock, v20, (__int64)&LowboxSessionMapLock);
      if ( v21 )
        *((_BYTE *)v21 + 10) = 1;
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
    v25 = KeAbPreAcquire(v24, 0LL);
    v12 = _interlockedbittestandset64(v23, 0LL);
    v26 = (volatile signed __int64 *)BugCheckParameter2;
    v27 = v25;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v25, BugCheckParameter2);
    if ( v27 )
      *((_BYTE *)v27 + 10) = 1;
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
    v11 = KeAbPreAcquire(v10, 0LL);
    v12 = _interlockedbittestandset64(v9, 0LL);
    v13 = (volatile signed __int64 *)BugCheckParameter2;
    v14 = v11;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v11, BugCheckParameter2);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
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
    goto LABEL_18;
  }
  if ( v4 )
  {
LABEL_16:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
LABEL_18:
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LowBoxNumberEntry;
}
