/*
 * XREFs of ExpWnfDeliverThreadNotifications @ 0x1408E2CA0
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x1408E2AC0 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpWnfReadStateData @ 0x1408E32C8 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfDeliverThreadNotifications(__int64 a1, __int64 a2, int a3)
{
  signed __int64 *v3; // r14
  __int64 *v4; // rdi
  volatile signed __int64 *v5; // r12
  __int64 *v6; // rax
  __int64 *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  unsigned int v10; // r13d
  __int64 v11; // rsi
  int *v12; // r8
  unsigned int v13; // r13d
  __int64 v14; // rcx
  _OWORD *v15; // rax
  int v16; // eax
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // [rsp+34h] [rbp-94h]
  int v23; // [rsp+38h] [rbp-90h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-88h]
  unsigned int v25; // [rsp+48h] [rbp-80h]
  __int64 v26; // [rsp+58h] [rbp-70h]
  int *v27; // [rsp+60h] [rbp-68h]
  _DWORD *v28; // [rsp+68h] [rbp-60h]
  ULONG_PTR v29; // [rsp+78h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-48h]
  _QWORD *v31; // [rsp+88h] [rbp-40h]
  int v34; // [rsp+E0h] [rbp+18h]
  int v35; // [rsp+E8h] [rbp+20h] BYREF

  v23 = 0;
  v34 = -2147483622;
  v22 = 0;
  v35 = 0;
  v25 = a3 - 48;
LABEL_2:
  v3 = (signed __int64 *)(a1 + 80);
  v29 = a1 + 80;
  v4 = KeAbPreAcquire(a1 + 80, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v4, (unsigned __int64)v3);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = (volatile signed __int64 *)(a1 + 104);
  BugCheckParameter2 = a1 + 104;
  v6 = KeAbPreAcquire(a1 + 104, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v6, a1 + 104);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = (_QWORD *)(a1 + 112);
  v24 = (_QWORD *)(a1 + 112);
  v9 = *(_QWORD **)(a1 + 112);
  v10 = v34;
  while ( 1 )
  {
    v31 = v9;
    if ( v9 == v8 )
      break;
    v28 = v9 + 2;
    if ( *((_DWORD *)v9 + 4) != 1 )
      goto LABEL_41;
    v11 = *(v9 - 7);
    v26 = v11;
    if ( v11 )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8)) )
        v11 = 0LL;
      v26 = v11;
    }
    v12 = (int *)v9 + 5;
    v27 = (int *)v9 + 5;
    v13 = *((_DWORD *)v9 + 5) & *((_DWORD *)v9 - 1) & 0xFFFFFFFE;
    if ( v11 )
      v13 = *((_DWORD *)v9 + 5) & *((_DWORD *)v9 - 1);
    if ( !v13 )
      goto LABEL_43;
    v14 = a2;
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 8) = *(v9 - 6) ^ 0x41C64E6DA3BC0074LL;
    *(_QWORD *)a2 = *(v9 - 11);
    if ( (v13 & 1) == 0 )
      goto LABEL_25;
    v15 = *(_OWORD **)(v11 + 64);
    if ( v15 )
      *(_OWORD *)(a2 + 28) = *v15;
    v16 = ExpWnfReadStateData(v11, &v35, a2 + 48, v25, &v23);
    v22 = v16;
    if ( v16 >= 0 )
    {
      v14 = a2;
      *(_DWORD *)(a2 + 16) = v35;
      *(_DWORD *)(a2 + 20) = v23;
LABEL_25:
      *(_DWORD *)(v14 + 44) = 48;
      *(_DWORD *)(v14 + 24) = v13;
      v16 = v22;
    }
    if ( v11 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
      v11 = 0LL;
      v16 = v22;
    }
    if ( v16 >= 0 )
    {
      if ( !v35 )
        v13 &= ~1u;
      if ( v13 )
      {
        *((_DWORD *)v9 + 6) = v13;
        *v27 = 0;
        *v28 = 2;
        v10 = 0;
        break;
      }
      v12 = v27;
LABEL_43:
      v18 = (_QWORD *)v9[1];
      v9 = v18;
      v19 = v31;
      v20 = *v31;
      if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v18 != v31 )
        __fastfail(3u);
      *v18 = v20;
      *(_QWORD *)(v20 + 8) = v18;
      *v28 = 0;
      v21 = *v12;
      *v12 = 0;
      *((_DWORD *)v19 + 6) = 0;
      if ( v11 )
      {
        if ( (v21 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 164), 0xFFFFFFFF) == 1 )
        {
          if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v5);
          KeAbPostRelease((ULONG_PTR)v5);
          if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v3);
          KeAbPostRelease((ULONG_PTR)v3);
          ExpWnfNotifyNameSubscribers(v11, 8LL, 1LL);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
          goto LABEL_2;
        }
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
        v10 = v34;
      }
      else
      {
        v10 = v34;
      }
      goto LABEL_40;
    }
    v10 = v34;
    if ( v34 == -2147483622 )
    {
      v10 = v16;
      v34 = v16;
    }
LABEL_40:
    v8 = v24;
LABEL_41:
    v9 = (_QWORD *)*v9;
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return v10;
}
