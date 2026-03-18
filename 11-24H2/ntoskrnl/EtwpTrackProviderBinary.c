/*
 * XREFs of EtwpTrackProviderBinary @ 0x1408338BC
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpProviderArrivalCallback @ 0x140838564 (EtwpProviderArrivalCallback.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 */

NTSTATUS __fastcall EtwpTrackProviderBinary(__int64 a1, void **a2)
{
  void *v3; // rcx
  NTSTATUS result; // eax
  NTSTATUS v5; // ebp
  _QWORD *v6; // rbx
  struct _KTHREAD *v7; // rax
  unsigned __int64 *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rbx
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  __int64 v19; // rtt
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rsi
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
      v23 = (unsigned __int64 *)(*(_QWORD *)(v6[4] + 656LL) + 664LL);
      v24 = KeAbPreAcquire((__int64)v23, 0LL);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
        ExfAcquirePushLockExclusiveEx(v23, (__int64)v24, (__int64)v23);
      if ( v25 )
        *((_BYTE *)v25 + 10) = 1;
      *(_QWORD *)(*(_QWORD *)(v6[4] + 656LL) + 672LL) = KeGetCurrentThread();
    }
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    v8 = (unsigned __int64 *)(v6[4] + 664LL);
    v9 = KeAbPreAcquire((__int64)v8, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, (__int64)v9, (__int64)v8);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    *(_QWORD *)(v6[4] + 672LL) = KeGetCurrentThread();
    if ( (*((_BYTE *)Object + 98) & 0x10) != 0 )
    {
      v5 = 0;
    }
    else
    {
      _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x10u);
      v11 = 0LL;
      v12 = 16LL;
      do
      {
        v13 = v6[4];
        if ( *(_DWORD *)(v11 + v13 + 128) )
        {
          v26 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v11 + v13 + 134), 0LL);
          v28 = v26;
          if ( v26 )
          {
            LOBYTE(v27) = 1;
            EtwpProviderArrivalCallback(v26, v27, Object);
            EtwpReleaseLoggerContext(v28, 0LL);
          }
        }
        v14 = v6[4];
        v15 = *(_QWORD *)(v14 + 656);
        if ( v15 )
        {
          if ( *(_DWORD *)(v15 + v11 + 128) )
          {
            v29 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v11 + v14 + 134), 0LL);
            v31 = v29;
            if ( v29 )
            {
              LOBYTE(v30) = 1;
              EtwpProviderArrivalCallback(v29, v30, Object);
              EtwpReleaseLoggerContext(v31, 0LL);
            }
          }
        }
        v11 += 32LL;
        --v12;
      }
      while ( v12 );
    }
    *(_QWORD *)(v6[4] + 672LL) = 0LL;
    v16 = (__int64 *)(v6[4] + 664LL);
    _m_prefetchw(v16);
    v17 = *v16;
    v18 = *v16 - 16;
    if ( (*v16 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v18 = 0LL;
    if ( (v17 & 2) != 0 || (v19 = *v16, v19 != _InterlockedCompareExchange64(v16, v18, v17)) )
      ExfReleasePushLock(v16);
    KeAbPostRelease((ULONG_PTR)v16);
    KeLeaveCriticalRegion();
    v20 = Object;
    v21 = *(_QWORD *)(*((_QWORD *)Object + 4) + 656LL);
    if ( v21 )
    {
      *(_QWORD *)(v21 + 672) = 0LL;
      v32 = (__int64 *)(*(_QWORD *)(v20[4] + 656LL) + 664LL);
      _m_prefetchw(v32);
      v33 = *v32;
      v34 = *v32 - 16;
      if ( (*v32 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v34 = 0LL;
      if ( (v33 & 2) != 0 || (v35 = *v32, v35 != _InterlockedCompareExchange64(v32, v34, v33)) )
        ExfReleasePushLock(v32);
      KeAbPostRelease((ULONG_PTR)v32);
      KeLeaveCriticalRegion();
      v20 = Object;
    }
    ObfDereferenceObject(v20);
    return v5;
  }
  return result;
}
