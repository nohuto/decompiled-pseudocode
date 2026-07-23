/*
 * XREFs of EtwpTrackProviderBinaryKm @ 0x1407AA9F0
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     EtwSetInformation @ 0x140AD9290 (EtwSetInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackProviderBinaryKm(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rdi
  char *v7; // rax
  char *v8; // rsi
  struct _KTHREAD *v9; // rax
  unsigned __int64 *v10; // rdi
  char *v11; // rax
  char *v12; // rsi
  unsigned __int16 v13; // cx
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  signed __int64 *v25; // rdi
  signed __int64 v26; // rax
  signed __int64 v27; // rdx
  signed __int64 v28; // rtt
  __int64 v29; // rcx
  signed __int64 *v30; // rbx
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  signed __int64 v33; // rtt

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 656LL) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 656LL) + 664LL);
    v7 = (char *)KeAbPreAcquire((__int64)v6, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
    if ( v8 )
      v8[10] = 1;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 656LL) + 672LL) = KeGetCurrentThread();
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  v10 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 664LL);
  v11 = (char *)KeAbPreAcquire((__int64)v10, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
  if ( v12 )
    v12[10] = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 672LL) = KeGetCurrentThread();
  v13 = a3 != 0 ? 1024 : 16;
  if ( (v13 & *(_WORD *)(a1 + 98)) == 0 )
  {
    _InterlockedOr16((volatile signed __int16 *)(a1 + 98), v13);
    v14 = 0LL;
    v15 = 16LL;
    do
    {
      v16 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v14 + v16 + 128) )
      {
        v17 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(v16 + 648), *(unsigned __int16 *)(v14 + v16 + 134), 0LL);
        v19 = v17;
        if ( v17 )
        {
          LOBYTE(v18) = 1;
          EtwpProviderArrivalCallback(v17, v18, a1);
          EtwpReleaseLoggerContext(v19, 0LL);
        }
      }
      v20 = *(_QWORD *)(a1 + 32);
      v21 = *(_QWORD *)(v20 + 656);
      if ( v21 )
      {
        if ( *(_DWORD *)(v21 + v14 + 128) )
        {
          v22 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(v20 + 648), *(unsigned __int16 *)(v14 + v20 + 134), 0LL);
          v24 = v22;
          if ( v22 )
          {
            LOBYTE(v23) = 1;
            EtwpProviderArrivalCallback(v22, v23, a1);
            EtwpReleaseLoggerContext(v24, 0LL);
          }
        }
      }
      v14 += 32LL;
      --v15;
    }
    while ( v15 );
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 672LL) = 0LL;
  v25 = (signed __int64 *)(*(_QWORD *)(a1 + 32) + 664LL);
  _m_prefetchw(v25);
  v26 = *v25;
  v27 = *v25 - 16;
  if ( (*v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v27 = 0LL;
  if ( (v26 & 2) != 0 || (v28 = *v25, v28 != _InterlockedCompareExchange64(v25, v27, v26)) )
    ExfReleasePushLock(v25);
  KeAbPostRelease((ULONG_PTR)v25);
  KeLeaveCriticalRegion();
  v29 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 656LL);
  if ( v29 )
  {
    *(_QWORD *)(v29 + 672) = 0LL;
    v30 = (signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 656LL) + 664LL);
    _m_prefetchw(v30);
    v31 = *v30;
    v32 = *v30 - 16;
    if ( (*v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v32 = 0LL;
    if ( (v31 & 2) != 0 || (v33 = *v30, v33 != _InterlockedCompareExchange64(v30, v32, v31)) )
      ExfReleasePushLock(v30);
    KeAbPostRelease((ULONG_PTR)v30);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
