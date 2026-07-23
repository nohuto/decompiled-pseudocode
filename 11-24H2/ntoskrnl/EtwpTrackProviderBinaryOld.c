/*
 * XREFs of EtwpTrackProviderBinaryOld @ 0x1407AAC88
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 */

NTSTATUS __fastcall EtwpTrackProviderBinaryOld(__int64 a1, void **a2)
{
  void *v3; // rcx
  NTSTATUS result; // eax
  NTSTATUS v5; // ebp
  _QWORD *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rdi
  char *v9; // rax
  char *v10; // rsi
  struct _KTHREAD *v11; // rax
  unsigned __int64 *v12; // rdi
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 *v26; // rbx
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  __int64 v29; // rtt
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 *v32; // rbx
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  __int64 v35; // rtt
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v3 = *a2;
  Object = 0LL;
  result = ObReferenceObjectByHandle(v3, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v5 = result;
  if ( result >= 0 )
  {
    v6 = Object;
    if ( *(_QWORD *)(*((_QWORD *)Object + 4) + 656LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = (unsigned __int64 *)(*(_QWORD *)(v6[4] + 656LL) + 664LL);
      v9 = (char *)KeAbPreAcquire((__int64)v8, 0LL);
      v10 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
      if ( v10 )
        v10[10] = 1;
      *(_QWORD *)(*(_QWORD *)(v6[4] + 656LL) + 672LL) = KeGetCurrentThread();
    }
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = (unsigned __int64 *)(v6[4] + 664LL);
    v13 = (char *)KeAbPreAcquire((__int64)v12, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12, v13, (__int64)v12);
    if ( v14 )
      v14[10] = 1;
    *(_QWORD *)(v6[4] + 672LL) = KeGetCurrentThread();
    if ( (*((_BYTE *)Object + 98) & 0x10) != 0 )
    {
      v5 = 0;
    }
    else
    {
      _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x10u);
      v15 = 0LL;
      v16 = 16LL;
      do
      {
        v17 = v6[4];
        if ( *(_DWORD *)(v15 + v17 + 128) )
        {
          v18 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v15 + v17 + 134), 0LL);
          v20 = v18;
          if ( v18 )
          {
            LOBYTE(v19) = 1;
            EtwpProviderArrivalCallback(v18, v19, Object);
            EtwpReleaseLoggerContext(v20, 0LL);
          }
        }
        v21 = v6[4];
        v22 = *(_QWORD *)(v21 + 656);
        if ( v22 )
        {
          if ( *(_DWORD *)(v22 + v15 + 128) )
          {
            v23 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v15 + v21 + 134), 0LL);
            v25 = v23;
            if ( v23 )
            {
              LOBYTE(v24) = 1;
              EtwpProviderArrivalCallback(v23, v24, Object);
              EtwpReleaseLoggerContext(v25, 0LL);
            }
          }
        }
        v15 += 32LL;
        --v16;
      }
      while ( v16 );
    }
    *(_QWORD *)(v6[4] + 672LL) = 0LL;
    v26 = (__int64 *)(v6[4] + 664LL);
    _m_prefetchw(v26);
    v27 = *v26;
    v28 = *v26 - 16;
    if ( (*v26 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v28 = 0LL;
    if ( (v27 & 2) != 0 || (v29 = *v26, v29 != _InterlockedCompareExchange64(v26, v28, v27)) )
      ExfReleasePushLock(v26);
    KeAbPostRelease((ULONG_PTR)v26);
    KeLeaveCriticalRegion();
    v30 = Object;
    v31 = *(_QWORD *)(*((_QWORD *)Object + 4) + 656LL);
    if ( v31 )
    {
      *(_QWORD *)(v31 + 672) = 0LL;
      v32 = (__int64 *)(*(_QWORD *)(v30[4] + 656LL) + 664LL);
      _m_prefetchw(v32);
      v33 = *v32;
      v34 = *v32 - 16;
      if ( (*v32 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v34 = 0LL;
      if ( (v33 & 2) != 0 || (v35 = *v32, v35 != _InterlockedCompareExchange64(v32, v34, v33)) )
        ExfReleasePushLock(v32);
      KeAbPostRelease((ULONG_PTR)v32);
      KeLeaveCriticalRegion();
      v30 = Object;
    }
    ObfDereferenceObject(v30);
    return v5;
  }
  return result;
}
