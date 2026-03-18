/*
 * XREFs of ExpWnfDeleteSubscription @ 0x1408E1CA8
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x1408E19F0 (ExpWnfDeleteProcessContext.c)
 *     NtUnsubscribeWnfStateChange @ 0x1408E2920 (NtUnsubscribeWnfStateChange.c)
 *     ExUnsubscribeWnfStateChange @ 0x140A63170 (ExUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, __int64 a2)
{
  __int64 v2; // r15
  int v4; // esi
  __int64 *v5; // rax
  __int64 *v6; // rbp
  unsigned __int64 Count; // rbp
  __int64 *v8; // rax
  __int64 *v9; // r13
  struct _EX_RUNDOWN_REF **v10; // rdx
  PVOID *v11; // rcx
  int Ptr_high; // eax
  struct _EX_RUNDOWN_REF **v13; // rdx
  PVOID *v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // r13
  int v17; // ecx
  BOOL v18; // r13d
  int v19; // r12d
  struct _EX_RUNDOWN_REF **v20; // rdx
  PVOID *v21; // rcx
  BOOL v22; // [rsp+78h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 1512);
  v4 = 1;
  if ( v2 )
  {
    v5 = KeAbPreAcquire(v2 + 80, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 80), v5, v2 + 80);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
  }
  if ( P[5].Count )
  {
    v22 = 0;
    Count = P[6].Count;
    if ( Count )
    {
      v8 = KeAbPreAcquire(Count + 112, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 112), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 112), v8, Count + 112);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      v10 = (struct _EX_RUNDOWN_REF **)P[8].Count;
      if ( v10[1] != &P[8] || (v11 = (PVOID *)P[9].Count, *v11 != &P[8]) )
LABEL_14:
        __fastfail(3u);
      *v11 = v10;
      v10[1] = (struct _EX_RUNDOWN_REF *)v11;
      Ptr_high = HIDWORD(P[12].Ptr);
      P[6].Count = 0LL;
      if ( (Ptr_high & 1) != 0 )
        v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 160), 0xFFFFFFFF) == 1;
    }
    v13 = (struct _EX_RUNDOWN_REF **)P[3].Count;
    if ( v13[1] != &P[3] )
      goto LABEL_14;
    v14 = (PVOID *)P[4].Count;
    if ( *v14 != &P[3] )
      goto LABEL_14;
    *v14 = v13;
    v13[1] = (struct _EX_RUNDOWN_REF *)v14;
    v15 = KeAbPreAcquire(v2 + 104, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 104), v15, v2 + 104);
    if ( v16 )
      *((_BYTE *)v16 + 10) = 1;
    v17 = P[15].Count;
    if ( v17 != 1 && ((PEPROCESS)P[5].Count == PsInitialSystemProcess || !v17) )
      goto LABEL_26;
    v20 = (struct _EX_RUNDOWN_REF **)P[13].Count;
    if ( v20[1] != &P[13] )
      goto LABEL_14;
    v21 = (PVOID *)P[14].Count;
    if ( *v21 != &P[13] )
      goto LABEL_14;
    *v21 = v20;
    v20[1] = (struct _EX_RUNDOWN_REF *)v21;
    if ( Count && (BYTE4(P[12].Ptr) & 1) != 0 && ((BYTE4(P[15].Ptr) & 1) != 0 || (P[16].Count & 1) != 0) )
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 164), 0xFFFFFFFF) == 1;
    else
LABEL_26:
      v18 = 0;
    P[5].Count = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 104));
    KeAbPostRelease(v2 + 104);
    if ( Count )
    {
      v19 = 0;
      if ( v22 || v18 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8)) )
        {
          v19 = 1;
        }
        else
        {
          v22 = 0;
          v18 = 0;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(Count + 112));
      KeAbPostRelease(Count + 112);
      if ( v2 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
        KeAbPostRelease(v2 + 80);
        v2 = 0LL;
      }
      if ( v18 )
        ExpWnfNotifyNameSubscribers(Count, 8LL, 1LL);
      if ( v22 )
        ExpWnfNotifyNameSubscribers(Count, 4LL, 1LL);
      if ( v19 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8));
    }
  }
  else
  {
    v4 = 0;
  }
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
    KeAbPostRelease(v2 + 80);
  }
  ExReleaseRundownProtection_0(P + 1);
  if ( v4 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
