/*
 * XREFs of ExpWnfDeliverThreadNotifications @ 0x1409016A0
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x1409014C0 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpWnfReadStateData @ 0x140901C9C (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfDeliverThreadNotifications(_QWORD *a1, __int64 a2, int a3)
{
  char *v3; // rdi
  volatile signed __int64 *v4; // r12
  char *v5; // rax
  char *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  int *v10; // r8
  unsigned int v11; // r14d
  _OWORD *v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  signed __int64 *v15; // r14
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  signed __int64 *v21; // rdi
  int v22; // [rsp+34h] [rbp-94h]
  int v23; // [rsp+38h] [rbp-90h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-88h]
  unsigned int v25; // [rsp+48h] [rbp-80h]
  __int64 v26; // [rsp+58h] [rbp-70h]
  int *v27; // [rsp+60h] [rbp-68h]
  _DWORD *v28; // [rsp+68h] [rbp-60h]
  ULONG_PTR v29; // [rsp+70h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-48h]
  _QWORD *v31; // [rsp+88h] [rbp-40h]
  int v34; // [rsp+E0h] [rbp+18h] BYREF
  int v35; // [rsp+E8h] [rbp+20h]

  v23 = 0;
  v35 = -2147483622;
  v22 = 0;
  v34 = 0;
  v25 = a3 - 48;
LABEL_2:
  v29 = (ULONG_PTR)(a1 + 10);
  v3 = (char *)KeAbPreAcquire((__int64)(a1 + 10), 0LL);
  if ( _InterlockedCompareExchange64(a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, 0, v3, (__int64)(a1 + 10));
  if ( v3 )
    v3[10] = 1;
  v4 = a1 + 13;
  BugCheckParameter2 = (ULONG_PTR)(a1 + 13);
  v5 = (char *)KeAbPreAcquire((__int64)(a1 + 13), 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v5, (__int64)(a1 + 13));
  if ( v6 )
    v6[10] = 1;
  v7 = a1 + 14;
  v24 = a1 + 14;
  v8 = (_QWORD *)a1[14];
  while ( 1 )
  {
    v31 = v8;
    if ( v8 == v7 )
      break;
    v28 = v8 + 2;
    if ( *((_DWORD *)v8 + 4) != 1 )
      goto LABEL_41;
    v9 = *(v8 - 7);
    v26 = v9;
    if ( v9 )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 8)) )
        v9 = 0LL;
      v26 = v9;
    }
    v10 = (int *)v8 + 5;
    v27 = (int *)v8 + 5;
    v11 = *((_DWORD *)v8 + 5) & *((_DWORD *)v8 - 1) & 0xFFFFFFFE;
    if ( v9 )
      v11 = *((_DWORD *)v8 + 5) & *((_DWORD *)v8 - 1);
    if ( !v11 )
      goto LABEL_44;
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 8) = *(v8 - 6) ^ 0x41C64E6DA3BC0074LL;
    *(_QWORD *)a2 = *(v8 - 11);
    if ( (v11 & 1) != 0 )
    {
      v12 = *(_OWORD **)(v9 + 64);
      if ( v12 )
        *(_OWORD *)(a2 + 28) = *v12;
      v13 = ExpWnfReadStateData(v9, &v34, a2 + 48, v25, &v23);
      v22 = v13;
      if ( v13 < 0 )
        goto LABEL_26;
      *(_DWORD *)(a2 + 16) = v34;
      *(_DWORD *)(a2 + 20) = v23;
    }
    *(_DWORD *)(a2 + 44) = 48;
    *(_DWORD *)(a2 + 24) = v11;
    v13 = v22;
LABEL_26:
    if ( v9 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 8));
      v9 = 0LL;
      v13 = v22;
    }
    if ( v13 < 0 )
    {
      if ( v35 == -2147483622 )
        v35 = v13;
      goto LABEL_40;
    }
    if ( !v34 )
      v11 &= ~1u;
    if ( v11 )
    {
      *((_DWORD *)v8 + 6) = v11;
      *v27 = 0;
      *v28 = 2;
      v14 = 0;
      goto LABEL_33;
    }
    v10 = v27;
LABEL_44:
    v17 = (_QWORD *)v8[1];
    v8 = v17;
    v18 = v31;
    v19 = *v31;
    if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v17 != v31 )
      __fastfail(3u);
    *v17 = v19;
    *(_QWORD *)(v19 + 8) = v17;
    *v28 = 0;
    v20 = *v10;
    *v10 = 0;
    *((_DWORD *)v18 + 6) = 0;
    if ( v9 )
    {
      if ( (v20 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 164), 0xFFFFFFFF) == 1 )
      {
        if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v4);
        KeAbPostRelease((ULONG_PTR)v4);
        v21 = (signed __int64 *)v29;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v29, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v21);
        KeAbPostRelease((ULONG_PTR)v21);
        ExpWnfNotifyNameSubscribers(v9, 8LL, 1LL);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 8));
        goto LABEL_2;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 8));
      v7 = v24;
      v8 = (_QWORD *)*v8;
    }
    else
    {
LABEL_40:
      v7 = v24;
LABEL_41:
      v8 = (_QWORD *)*v8;
    }
  }
  v14 = v35;
LABEL_33:
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v15 = (signed __int64 *)v29;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v29, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  return v14;
}
