/*
 * XREFs of EtwpAddGuidEntry @ 0x1408367C0
 * Callers:
 *     EtwpAddGuidEntry @ 0x1408367C0 (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083866C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpAddGuidEntry @ 0x1408367C0 (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x140836A58 (EtwpAllocGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x140838980 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x14083ADD4 (EtwpFreeGuidEntry.c)
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
  char *v12; // rax
  char *v13; // rbx
  _QWORD *i; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rtt
  struct _KTHREAD *CurrentThread; // rax
  char *v24; // rax
  char *v25; // rbp
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
    v8 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 720;
    v9 = (_QWORD *)(v8 + 16 * v3);
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v24 = (char *)KeAbPreAcquire((__int64)(GuidEntryByGuid + 83), 0LL);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 166, 0LL) )
        ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 83, v24, (__int64)(GuidEntryByGuid + 83));
      if ( v25 )
        v25[10] = 1;
      v26 = GuidEntryByGuid + 2;
      GuidEntryByGuid[84] = KeGetCurrentThread();
      v27 = v7 + 2;
      v7[82] = GuidEntryByGuid;
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
    v12 = (char *)KeAbPreAcquire(v8 + 48, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
    if ( v13 )
      v13[10] = 1;
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
      KeLeaveCriticalRegionThread();
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
          v7[82] = 0LL;
LABEL_24:
          GuidEntryByGuid[84] = 0LL;
          _m_prefetchw(GuidEntryByGuid + 83);
          v19 = GuidEntryByGuid[83];
          v20 = v19 - 16;
          if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v20 = 0LL;
          if ( (v19 & 2) != 0
            || (v21 = GuidEntryByGuid[83], v21 != _InterlockedCompareExchange64(GuidEntryByGuid + 83, v20, v19)) )
          {
            ExfReleasePushLock(GuidEntryByGuid + 83);
          }
          KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 83));
          KeLeaveCriticalRegionThread();
          if ( !v7 )
            return i;
          EtwpUnreferenceGuidEntry((ULONG_PTR)GuidEntryByGuid);
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
        KeLeaveCriticalRegionThread();
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
