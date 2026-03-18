/*
 * XREFs of SmKmStoreAdd @ 0x1409C1B9C
 * Callers:
 *     SmProcessCreateRequest @ 0x1409C16A4 (SmProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     SmAllocEx @ 0x14039350C (SmAllocEx.c)
 *     SmEtwEnabled @ 0x14039E900 (SmEtwEnabled.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     SmKmEtwLogStoreChange @ 0x14078A600 (SmKmEtwLogStoreChange.c)
 */

__int64 __fastcall SmKmStoreAdd(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // rdi
  __int64 i; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 *v9; // rsi
  struct _KTHREAD *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // r15
  struct _KTHREAD *v13; // rax
  volatile signed __int64 *v14; // rsi
  __int64 *v15; // rax
  __int64 *v16; // r15
  __int16 v17; // ax
  __int16 v18; // cx
  int v19; // ecx
  ULONGLONG *v20; // rax
  struct _PRIVILEGE_SET *v23; // rbp
  struct _EX_RUNDOWN_REF *Privilege; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v26; // rax
  __int64 *v27; // rsi
  unsigned __int64 v28; // [rsp+20h] [rbp-48h]
  _DWORD *v29; // [rsp+28h] [rbp-40h]

  v4 = 0;
  v29 = *(_DWORD **)a3;
  v5 = 0LL;
  for ( i = 0LL; (unsigned int)i < 0x20; i = (unsigned int)(i + 1) )
  {
    if ( !*(_QWORD *)(a1 + 8 * i) )
    {
      v23 = (struct _PRIVILEGE_SET *)SmAllocEx(1280LL, 1632857459LL, -1);
      if ( !v23 )
        return (unsigned int)-1073741670;
      if ( v23 < &v23[64] )
      {
        Privilege = (struct _EX_RUNDOWN_REF *)v23->Privilege;
        do
        {
          Privilege[-1].Count = 0LL;
          Privilege[1].Count = 0LL;
          Privilege[2].Count = 0LL;
          Privilege[3].Count = 0LL;
          Privilege->Count = 0LL;
          ExWaitForRundownProtectionRelease(Privilege);
          Privilege[1].Count = 0LL;
          Privilege += 5;
        }
        while ( &Privilege[-1] < (struct _EX_RUNDOWN_REF *)&v23[64] );
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v26 = KeAbPreAcquire(a1 + 416, 0LL);
      v27 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 416), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 416), v26, a1 + 416);
      if ( v27 )
        *((_BYTE *)v27 + 10) = 1;
      if ( !*(_QWORD *)(a1 + 8 * i) )
      {
        *(_QWORD *)(a1 + 8 * i) = v23;
        v23 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      if ( v23 )
        CmSiFreeMemory(v23);
    }
    v5 = *(_QWORD *)(a1 + 8 * i);
    v8 = v5 + 1280;
    v28 = v5 + 1280;
    v9 = (unsigned __int64 *)(v5 + 16);
    while ( v5 < v8 )
    {
      if ( !*(_QWORD *)v5 )
      {
        v10 = KeGetCurrentThread();
        --v10->KernelApcDisable;
        v11 = KeAbPreAcquire((__int64)v9, 0LL);
        v12 = v11;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
          ExfAcquirePushLockExclusiveEx(v9, v11, (__int64)v9);
        if ( v12 )
          *((_BYTE *)v12 + 10) = 1;
        if ( !*(_QWORD *)v5 )
          goto LABEL_13;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v9);
        KeAbPostRelease((ULONG_PTR)v9);
        KeLeaveCriticalRegion();
        v8 = v28;
      }
      v5 += 40LL;
      v9 += 5;
      ++v4;
    }
  }
LABEL_13:
  if ( v4 >= 0x400 )
    return (unsigned int)-1073741671;
  v13 = KeGetCurrentThread();
  v14 = (volatile signed __int64 *)(a1 + 416);
  --v13->KernelApcDisable;
  v15 = KeAbPreAcquire(a1 + 416, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 416), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 416), v15, a1 + 416);
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  if ( (*v29 & 0x100) == 0 )
    goto LABEL_19;
  if ( *(_DWORD *)(a1 + 432) == -1 )
  {
    *(_DWORD *)(a1 + 432) = v4;
LABEL_19:
    *(_BYTE *)(v5 + 34) &= ~1u;
    v17 = *(_WORD *)(v5 + 32);
    *(_BYTE *)(v5 + 34) &= ~2u;
    *(_WORD *)(v5 + 32) = v17 ^ (v17 ^ (*v29 >> 17 << 7)) & 0x80;
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(a3 + 16);
    ++*(_DWORD *)(a1 + 424);
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
    KeAbPostRelease(a1 + 416);
    KeLeaveCriticalRegion();
    *(_QWORD *)v5 = a2;
    do
    {
      v18 = *(_WORD *)(v5 + 32) ^ (*(_WORD *)(v5 + 32) ^ (*(_WORD *)(v5 + 32) + 1)) & 0x3F;
      *(_WORD *)(v5 + 32) = v18;
      v19 = v4 | ((v18 & 0x3F) << 10);
      *a4 = v19;
    }
    while ( v19 == 66559 );
    v20 = SmEtwEnabled(4);
    if ( v20 )
      SmKmEtwLogStoreChange(v20, *(_QWORD *)v5, SmEventStoreCreate);
    _InterlockedExchange64((volatile __int64 *)(v5 + 8), 0LL);
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 8));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 16));
    KeAbPostRelease(v5 + 16);
    KeLeaveCriticalRegion();
    return 0;
  }
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
  KeAbPostRelease(a1 + 416);
  KeLeaveCriticalRegion();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 16));
  KeAbPostRelease(v5 + 16);
  KeLeaveCriticalRegion();
  return (unsigned int)-1073740757;
}
