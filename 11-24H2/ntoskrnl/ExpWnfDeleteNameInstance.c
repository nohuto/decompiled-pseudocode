/*
 * XREFs of ExpWnfDeleteNameInstance @ 0x140900948
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x1409002F0 (ExpWnfDeleteProcessContext.c)
 *     NtDeleteWnfStateName @ 0x140900ED0 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x140A58AB4 (ExpWnfDeleteNameInstanceCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfDeleteStateData @ 0x140A3307C (ExpWnfDeleteStateData.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstance(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3)
{
  unsigned __int64 *v3; // rsi
  char *v7; // rax
  char *v8; // rbx
  volatile signed __int64 *v9; // rdi
  char *v10; // rax
  char *v11; // rbx
  char *v12; // rax
  char *v13; // rsi
  struct _EX_RUNDOWN_REF *Count; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rdi
  char *v17; // rax
  char *v18; // rsi
  unsigned __int64 v19; // rdx
  struct _EX_RUNDOWN_REF **v20; // rcx
  unsigned __int64 v21; // r14
  unsigned __int64 *v22; // r14
  char *v23; // rax
  char *v24; // r13
  char *v25; // rax
  char *v26; // r13
  struct _EX_RUNDOWN_REF v28; // rcx
  struct _EX_RUNDOWN_REF **v29; // rax

  v3 = (unsigned __int64 *)(a1 + 48);
  v7 = (char *)KeAbPreAcquire(a1 + 48, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    v8[10] = 1;
  if ( a2[6].Count )
  {
    v9 = (volatile signed __int64 *)&a2[14];
    v10 = (char *)KeAbPreAcquire((__int64)&a2[14], 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&a2[14], 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v10, (__int64)&a2[14]);
    if ( v11 )
      v11[10] = 1;
    if ( a3 )
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), (__int64)&a2[2]);
    a2[6].Count = 0LL;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    v12 = (char *)KeAbPreAcquire((__int64)&a2[14], 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v12, (__int64)&a2[14]);
    if ( v13 )
      v13[10] = 1;
    while ( 1 )
    {
      Count = (struct _EX_RUNDOWN_REF *)a2[15].Count;
      if ( Count == &a2[15] )
        break;
      ExAcquireRundownProtection_0(Count - 7);
      v21 = Count[-3].Count;
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
      KeAbPostRelease((ULONG_PTR)&a2[14]);
      v22 = (unsigned __int64 *)(*(_QWORD *)(v21 + 1512) + 80LL);
      v23 = (char *)KeAbPreAcquire((__int64)v22, 0LL);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
        ExfAcquirePushLockExclusiveEx(v22, v23, (__int64)v22);
      if ( v24 )
        v24[10] = 1;
      v25 = (char *)KeAbPreAcquire((__int64)&a2[14], 0LL);
      v26 = v25;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(&a2[14].Count, v25, (__int64)&a2[14]);
      if ( v26 )
        v26[10] = 1;
      if ( Count[-2].Count )
      {
        v28.Count = Count->Count;
        if ( *(struct _EX_RUNDOWN_REF **)(Count->Count + 8) != Count )
          goto LABEL_30;
        v29 = (struct _EX_RUNDOWN_REF **)Count[1].Count;
        if ( *v29 != Count )
          goto LABEL_30;
        *v29 = (struct _EX_RUNDOWN_REF *)v28.Count;
        *(_QWORD *)(v28.Count + 8) = v29;
        Count[-2].Count = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v22);
      KeAbPostRelease((ULONG_PTR)v22);
      ExReleaseRundownProtection_0(Count - 7);
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    v15 = a2[19].Count;
    if ( v15 )
    {
      v16 = (unsigned __int64 *)(*(_QWORD *)(v15 + 1512) + 56LL);
      v17 = (char *)KeAbPreAcquire((__int64)v16, 0LL);
      v18 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
        ExfAcquirePushLockExclusiveEx(v16, v17, (__int64)v16);
      if ( v18 )
        v18[10] = 1;
      v19 = a2[17].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v19 + 8) != &a2[17]
        || (v20 = (struct _EX_RUNDOWN_REF **)a2[18].Count, *v20 != &a2[17]) )
      {
LABEL_30:
        __fastfail(3u);
      }
      *v20 = (struct _EX_RUNDOWN_REF *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      a2[19].Count = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v16);
      KeAbPostRelease((ULONG_PTR)v16);
    }
    ExReleaseRundownProtection_0(a2 + 1);
    ExWaitForRundownProtectionRelease(a2 + 1);
    ExpWnfDeleteStateData(a2);
    ObDereferenceSecurityDescriptor(a2[9].Count, 1u);
    ExFreePoolWithTag(a2, 0x20666E57u);
    return 1LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    return 0LL;
  }
}
