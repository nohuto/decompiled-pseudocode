/*
 * XREFs of ExpWnfSubscribeNameInstance @ 0x1409CFDD4
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140A13B0C (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfUpdateSubscription @ 0x1409D02B0 (ExpWnfUpdateSubscription.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 *v18; // r14
  int updated; // r14d
  char *Pool2; // rax
  char *v21; // r15
  signed __int64 v22; // r12
  unsigned __int64 *v23; // rsi
  __int64 *v24; // rax
  __int64 *v25; // r14
  volatile signed __int64 *v26; // r14
  __int64 *v27; // rax
  signed __int8 v28; // cf
  _QWORD *v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rdx
  unsigned int v32; // esi
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  signed __int32 v36; // ecx
  int v37; // eax
  int v38; // [rsp+50h] [rbp-20h] BYREF
  int v39; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v40; // [rsp+58h] [rbp-18h] BYREF
  __int64 v41; // [rsp+60h] [rbp-10h]
  __int64 *v42; // [rsp+68h] [rbp-8h]
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
    v18 = KeAbPreAcquire((__int64)v17, 0LL);
    if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v17, 0, v18, (unsigned __int64)v17);
    if ( v18 )
      *((_BYTE *)v18 + 10) = 1;
    updated = ExpWnfUpdateSubscription(a1, v41, a3, a4, a6, (__int64)&v40, (__int64)&v38, (__int64)&v39, (__int64)a8);
    if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v17);
    KeAbPostRelease((ULONG_PTR)v17);
    if ( updated >= 0 )
      goto LABEL_35;
    v11 = v41;
    v14 = a3;
  }
  Pool2 = (char *)ExAllocatePool2((PsInitialSystemProcess != (PEPROCESS)a2) + 256LL);
  v21 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0(Pool2, 0, 0x88uLL);
  *(_DWORD *)v21 = 8915205;
  *((_DWORD *)v21 + 24) = a5;
  *((_DWORD *)v21 + 25) = a6;
  *((_QWORD *)v21 + 10) = v14;
  *((_QWORD *)v21 + 11) = a4;
  *((_QWORD *)v21 + 1) = 0LL;
  *((_QWORD *)v21 + 7) = *(_QWORD *)(a1 + 40);
  if ( a7 )
  {
    do
      v22 = _InterlockedIncrement64(&ExpWnfSubcriptionIdCounter);
    while ( !v22 );
    if ( a8 )
      *a8 = v22;
  }
  else
  {
    v22 = (signed __int64)v21;
    if ( a9 )
      *a9 = v21;
  }
  v23 = (unsigned __int64 *)(v11 + 80);
  v24 = KeAbPreAcquire((__int64)v23, 0LL);
  v25 = v24;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
    ExfAcquirePushLockExclusiveEx(v23, v24, (__int64)v23);
  if ( v25 )
    *((_BYTE *)v25 + 10) = 1;
  v26 = (volatile signed __int64 *)(a1 + 112);
  v27 = KeAbPreAcquire(a1 + 112, 0LL);
  v28 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v42 = v27;
  if ( v28 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v27, a1 + 112);
    v27 = v42;
  }
  if ( v27 )
    *((_BYTE *)v27 + 10) = 1;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)ExpWnfUpdateSubscription(a1, v41, a3, v45, a6, (__int64)&v40, (__int64)&v38, (__int64)&v39, (__int64)a8) < 0 )
    {
      *((_QWORD *)v21 + 5) = a2;
      *((_QWORD *)v21 + 6) = a1;
      *((_QWORD *)v21 + 2) = v22;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v21 + 1);
      if ( a9 )
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v21 + 1);
      v29 = v21 + 24;
      v30 = v41 + 88;
      v31 = *(_QWORD **)(v41 + 96);
      if ( *v31 != v41 + 88
        || (*v29 = v30,
            *((_QWORD *)v21 + 4) = v31,
            *v31 = v29,
            *(_QWORD *)(v30 + 8) = v29,
            v34 = *(_QWORD **)(a1 + 128),
            v35 = v21 + 64,
            *v34 != a1 + 120) )
      {
        __fastfail(3u);
      }
      *v35 = a1 + 120;
      *((_QWORD *)v21 + 9) = v34;
      *v34 = v35;
      *(_QWORD *)(a1 + 128) = v35;
      if ( (v21[100] & 1) != 0 )
      {
        v36 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v37 = v38;
        if ( !v36 )
          v37 = 1;
        v38 = v37;
      }
      if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v23);
      KeAbPostRelease((ULONG_PTR)v23);
      *a10 = v21;
      goto LABEL_36;
    }
    if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v23);
    KeAbPostRelease((ULONG_PTR)v23);
    ExFreePoolWithTag(v21, 0x20666E57u);
LABEL_35:
    *a10 = v40;
LABEL_36:
    v32 = 0;
    if ( v39 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v32 = 8;
    if ( v38 > 0 )
    {
      v32 |= 2u;
    }
    else if ( v38 < 0 )
    {
      v32 |= 4u;
    }
    if ( v32 )
    {
      LOBYTE(v12) = a7 != 0;
      ExpWnfNotifyNameSubscribers(a1, v32, 1, v12);
      *a11 = v32;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v23);
  KeAbPostRelease((ULONG_PTR)v23);
  ExFreePoolWithTag(v21, 0x20666E57u);
  return 3221225524LL;
}
