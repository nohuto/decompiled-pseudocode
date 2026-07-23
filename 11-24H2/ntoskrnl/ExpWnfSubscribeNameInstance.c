/*
 * XREFs of ExpWnfSubscribeNameInstance @ 0x1409C32E4
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140A125DC (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfUpdateSubscription @ 0x1409C3770 (ExpWnfUpdateSubscription.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfSubscribeNameInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        signed __int64 *a8,
        _QWORD *a9,
        _QWORD *a10,
        unsigned int *a11)
{
  __int64 v11; // rsi
  int v12; // edi
  __int64 v14; // r14
  signed __int64 *v17; // rsi
  char *v18; // r14
  char *Pool2; // rax
  char *v20; // r15
  signed __int64 v21; // r12
  unsigned __int64 *v22; // rsi
  char *v23; // rax
  char *v24; // r14
  volatile signed __int64 *v25; // r14
  char *v26; // rax
  signed __int8 v27; // cf
  _QWORD *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rdx
  unsigned int v31; // esi
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  signed __int32 v35; // ecx
  int v36; // eax
  int updated; // r14d
  int v38; // [rsp+50h] [rbp-20h] BYREF
  int v39; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v40; // [rsp+58h] [rbp-18h] BYREF
  __int64 v41; // [rsp+60h] [rbp-10h]
  char *v42; // [rsp+68h] [rbp-8h]
  int v45; // [rsp+C8h] [rbp+58h]

  v45 = a4;
  v11 = *(_QWORD *)(a2 + 1512);
  v12 = 0;
  v14 = a3;
  v40 = 0LL;
  v41 = v11;
  *a11 = 0;
  v38 = 0;
  v39 = 0;
  if ( a7 == 1 )
  {
    v17 = (signed __int64 *)(v11 + 80);
    v18 = (char *)KeAbPreAcquire((__int64)v17, 0LL);
    if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v17, 0, v18, (__int64)v17);
    if ( v18 )
      v18[10] = 1;
    updated = ExpWnfUpdateSubscription(a1, v41, a3, a4, a6, (__int64)&v40, (__int64)&v38, (__int64)&v39, (__int64)a8);
    if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v17);
    KeAbPostRelease((ULONG_PTR)v17);
    if ( updated >= 0 )
      goto LABEL_33;
    v11 = v41;
    v14 = a3;
  }
  Pool2 = (char *)ExAllocatePool2((PsInitialSystemProcess != (PEPROCESS)a2) + 256LL, 0x88uLL, 0x20666E57u);
  v20 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0(Pool2, 0, 0x88uLL);
  *(_DWORD *)v20 = 8915205;
  *((_DWORD *)v20 + 24) = a5;
  *((_DWORD *)v20 + 25) = a6;
  *((_QWORD *)v20 + 10) = v14;
  *((_QWORD *)v20 + 11) = a4;
  *((_QWORD *)v20 + 1) = 0LL;
  *((_QWORD *)v20 + 7) = *(_QWORD *)(a1 + 40);
  if ( a7 )
  {
    do
      v21 = _InterlockedIncrement64(&ExpWnfSubcriptionIdCounter);
    while ( !v21 );
    if ( a8 )
      *a8 = v21;
  }
  else
  {
    v21 = (signed __int64)v20;
    if ( a9 )
      *a9 = v20;
  }
  v22 = (unsigned __int64 *)(v11 + 80);
  v23 = (char *)KeAbPreAcquire((__int64)v22, 0LL);
  v24 = v23;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
    ExfAcquirePushLockExclusiveEx(v22, v23, (__int64)v22);
  if ( v24 )
    v24[10] = 1;
  v25 = (volatile signed __int64 *)(a1 + 112);
  v26 = (char *)KeAbPreAcquire(a1 + 112, 0LL);
  v27 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v42 = v26;
  if ( v27 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v26, a1 + 112);
    v26 = v42;
  }
  if ( v26 )
    v26[10] = 1;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)ExpWnfUpdateSubscription(a1, v41, a3, v45, a6, (__int64)&v40, (__int64)&v38, (__int64)&v39, (__int64)a8) < 0 )
    {
      *((_QWORD *)v20 + 5) = a2;
      *((_QWORD *)v20 + 6) = a1;
      *((_QWORD *)v20 + 2) = v21;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v20 + 1);
      if ( a9 )
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v20 + 1);
      v28 = v20 + 24;
      v29 = v41 + 88;
      v30 = *(_QWORD **)(v41 + 96);
      if ( *v30 != v41 + 88
        || (*v28 = v29,
            *((_QWORD *)v20 + 4) = v30,
            *v30 = v28,
            *(_QWORD *)(v29 + 8) = v28,
            v33 = *(_QWORD **)(a1 + 128),
            v34 = v20 + 64,
            *v33 != a1 + 120) )
      {
        __fastfail(3u);
      }
      *v34 = a1 + 120;
      *((_QWORD *)v20 + 9) = v33;
      *v33 = v34;
      *(_QWORD *)(a1 + 128) = v34;
      if ( (v20[100] & 1) != 0 )
      {
        v35 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v36 = v38;
        if ( !v35 )
          v36 = 1;
        v38 = v36;
      }
      if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v22);
      KeAbPostRelease((ULONG_PTR)v22);
      *a10 = v20;
      goto LABEL_34;
    }
    if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v22);
    KeAbPostRelease((ULONG_PTR)v22);
    ExFreePoolWithTag(v20, 0x20666E57u);
LABEL_33:
    *a10 = v40;
LABEL_34:
    v31 = 0;
    if ( v39 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v31 = 8;
    if ( v38 > 0 )
    {
      v31 |= 2u;
    }
    else if ( v38 < 0 )
    {
      v31 |= 4u;
    }
    if ( v31 )
    {
      LOBYTE(v12) = a7 != 0;
      ExpWnfNotifyNameSubscribers(a1, v31, 1, v12);
      *a11 = v31;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v22);
  KeAbPostRelease((ULONG_PTR)v22);
  ExFreePoolWithTag(v20, 0x20666E57u);
  return 3221225524LL;
}
