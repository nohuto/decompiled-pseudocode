/*
 * XREFs of EtwpAddGuidEntry @ 0x1408995E0
 * Callers:
 *     EtwpAddGuidEntry @ 0x1408995E0 (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14089B79C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpAddGuidEntry @ 0x1408995E0 (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x1408998F8 (EtwpAllocGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x14089BAD0 (EtwpReferenceGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x14089D208 (EtwpFreeGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // rsi
  _QWORD *GuidEntryByGuid; // r13
  _QWORD *v7; // r15
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  struct _KTHREAD *v10; // rax
  unsigned __int64 *v11; // rbp
  __int64 *v12; // rax
  __int64 *v13; // rbx
  _QWORD *i; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v24; // rax
  __int64 *v25; // rbp
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v7 = (_QWORD *)EtwpAllocGuidEntry();
  if ( !v7 )
    return 0LL;
  if ( a1 == EtwpHostSiloState
    || (GuidEntryByGuid = (_QWORD *)EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, (unsigned int)v3)) != 0LL
    || (GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3)) != 0LL )
  {
    v8 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
    v9 = (_QWORD *)(v8 + 16 * v3);
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v24 = KeAbPreAcquire((__int64)(GuidEntryByGuid + 51), 0LL);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 102, 0LL) )
        ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 51, v24, (__int64)(GuidEntryByGuid + 51));
      if ( v25 )
        *((_BYTE *)v25 + 10) = 1;
      v26 = GuidEntryByGuid + 2;
      GuidEntryByGuid[52] = KeGetCurrentThread();
      v27 = v7 + 2;
      v7[50] = GuidEntryByGuid;
      v28 = GuidEntryByGuid[2];
      if ( *(_QWORD **)(v28 + 8) != GuidEntryByGuid + 2 )
        goto LABEL_15;
      *v27 = v28;
      v7[3] = v26;
      *(_QWORD *)(v28 + 8) = v27;
      *v26 = v27;
    }
    v10 = KeGetCurrentThread();
    v11 = (unsigned __int64 *)(v8 + 48);
    --v10->KernelApcDisable;
    v12 = KeAbPreAcquire(v8 + 48, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    for ( i = (_QWORD *)*v9; ; i = (_QWORD *)*i )
    {
      if ( i == v9 )
        goto LABEL_14;
      v15 = *(_QWORD *)a2 - i[5];
      if ( *(_QWORD *)a2 == i[5] )
        v15 = *((_QWORD *)a2 + 1) - i[6];
      if ( !v15 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
        break;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( !GuidEntryByGuid )
        goto LABEL_37;
      v17 = v7[2];
      if ( *(_QWORD **)(v17 + 8) == v7 + 2 )
      {
        v18 = (_QWORD *)v7[3];
        if ( (_QWORD *)*v18 == v7 + 2 )
        {
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          v7[50] = 0LL;
LABEL_24:
          GuidEntryByGuid[52] = 0LL;
          _m_prefetchw(GuidEntryByGuid + 51);
          v19 = GuidEntryByGuid[51];
          v20 = v19 - 16;
          if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v20 = 0LL;
          if ( (v19 & 2) != 0
            || (v21 = GuidEntryByGuid[51], v21 != _InterlockedCompareExchange64(GuidEntryByGuid + 51, v20, v19)) )
          {
            ExfReleasePushLock(GuidEntryByGuid + 51);
          }
          KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 51));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( !v7 )
            return i;
          EtwpUnreferenceGuidEntry(GuidEntryByGuid);
LABEL_37:
          --v7[4];
          EtwpFreeGuidEntry(v7);
          return i;
        }
      }
    }
    else
    {
LABEL_14:
      v16 = (_QWORD *)*v9;
      if ( *(_QWORD **)(*v9 + 8LL) == v9 )
      {
        *v7 = v16;
        i = v7;
        v7[1] = v9;
        v16[1] = v7;
        *v9 = v7;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v11);
        KeAbPostRelease((ULONG_PTR)v11);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v7 = 0LL;
        if ( !GuidEntryByGuid )
          return i;
        goto LABEL_24;
      }
    }
LABEL_15:
    __fastfail(3u);
  }
  --v7[4];
  EtwpFreeGuidEntry(v7);
  return 0LL;
}
