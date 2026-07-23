/*
 * XREFs of EtwpTracingProvEnableCallback @ 0x140AA5F50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpEventWriteEnableInfo @ 0x1407A73EC (EtwpEventWriteEnableInfo.c)
 *     EtwpEventWriteGuidEntry @ 0x1407A74E4 (EtwpEventWriteGuidEntry.c)
 *     EtwpEventWriteRegEntry @ 0x1407A7648 (EtwpEventWriteRegEntry.c)
 *     EtwpGetNextGuidEntry @ 0x140839C10 (EtwpGetNextGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwpEventWriteTemplateSession @ 0x1409D26F0 (EtwpEventWriteTemplateSession.c)
 */

void __fastcall EtwpTracingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx
  char v5; // r14
  unsigned int i; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int *v9; // rdi
  _DWORD *j; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int32 *v12; // rdi
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // esi
  _DWORD *v17; // rbp
  __int64 v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  signed __int64 v21; // rtt
  _QWORD *NextGuidEntry; // rax
  __int64 v23; // rbx
  _DWORD *k; // rdx
  __int64 v25; // rax
  struct _KTHREAD *v26; // rax
  char *v27; // rax
  char *v28; // rsi
  __int64 v29; // rcx
  unsigned int v30; // edi
  _DWORD *v31; // rsi
  __int64 v32; // rcx
  _QWORD *m; // rdi
  __int64 v34; // rcx
  signed __int64 v35; // rax
  signed __int64 v36; // rdx
  __int64 v37; // rtt
  _QWORD *v38; // rax
  _QWORD *v39; // rbx

  if ( ControlCode == 2 )
  {
    v4 = EtwpHostSiloState;
    v5 = 0;
    for ( i = 0; i < *(_DWORD *)(EtwpHostSiloState + 16); ++i )
    {
      v7 = EtwpAcquireLoggerContextByLoggerId(v4, i, 0);
      v9 = (unsigned int *)v7;
      if ( v7 )
      {
        EtwpEventWriteTemplateSession(v8, (const EVENT_DESCRIPTOR *)ETW_EVENT_SESSION_INFO, v7);
        EtwpReleaseLoggerContext(v9, 0);
      }
      v4 = EtwpHostSiloState;
    }
    for ( j = 0LL; ; j = (_DWORD *)v23 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry(v4, j, 2u);
      v23 = (__int64)NextGuidEntry;
      if ( !NextGuidEntry )
        break;
      CurrentThread = KeGetCurrentThread();
      v12 = (volatile signed __int32 *)(NextGuidEntry + 83);
      --CurrentThread->KernelApcDisable;
      v13 = (char *)KeAbPreAcquire((__int64)(NextGuidEntry + 83), 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64(v12, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v23 + 664), v13, v23 + 664);
      if ( v14 )
        v14[10] = 1;
      *(_QWORD *)(v23 + 672) = KeGetCurrentThread();
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v15, &ETW_EVENT_GROUP_ENTRY_INFO, v23);
      v16 = 0;
      v17 = (_DWORD *)(v23 + 128);
      do
      {
        if ( *v17 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO) )
          EtwpEventWriteEnableInfo(v18, v23, v16);
        ++v16;
        v17 += 8;
      }
      while ( v16 < 0x10 );
      *(_QWORD *)(v23 + 672) = 0LL;
      _m_prefetchw((const void *)v12);
      v19 = *(_QWORD *)v12;
      v20 = *(_QWORD *)v12 - 16LL;
      if ( (*(_QWORD *)v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v20 = 0LL;
      if ( (v19 & 2) != 0
        || (v21 = *(_QWORD *)v12, v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v20, v19)) )
      {
        ExfReleasePushLock((_QWORD *)(v23 + 664));
      }
      KeAbPostRelease(v23 + 664);
      KeLeaveCriticalRegion();
      v4 = EtwpHostSiloState;
    }
    for ( k = 0LL; ; k = v39 )
    {
      v38 = EtwpGetNextGuidEntry(EtwpHostSiloState, k, 0);
      v39 = v38;
      if ( !v38 )
        break;
      v25 = v38[5] - *(_QWORD *)&EventTracingProvGuid.Data1;
      if ( !v25 )
        v25 = v39[6] - *(_QWORD *)EventTracingProvGuid.Data4;
      if ( v25 )
      {
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        v27 = (char *)KeAbPreAcquire((__int64)(v39 + 83), 0LL);
        v28 = v27;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v39 + 166, 0LL) )
          ExfAcquirePushLockExclusiveEx(v39 + 83, v27, (__int64)(v39 + 83));
        if ( v28 )
          v28[10] = 1;
        v5 = 1;
        v39[84] = KeGetCurrentThread();
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GUID_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v29, &ETW_EVENT_GUID_ENTRY_INFO, (__int64)v39);
      v30 = 0;
      v31 = v39 + 16;
      do
      {
        if ( *v31 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO) )
          EtwpEventWriteEnableInfo(v32, (__int64)v39, v30);
        ++v30;
        v31 += 8;
      }
      while ( v30 < 0x10 );
      for ( m = (_QWORD *)v39[7]; m != v39 + 7; m = (_QWORD *)*m )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_REG_ENTRY_INFO) )
          EtwpEventWriteRegEntry(v34, (__int64)m);
      }
      if ( v5 )
      {
        v39[84] = 0LL;
        _m_prefetchw(v39 + 83);
        v35 = v39[83];
        v36 = v35 - 16;
        if ( (v35 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v36 = 0LL;
        if ( (v35 & 2) != 0 || (v37 = v39[83], v37 != _InterlockedCompareExchange64(v39 + 83, v36, v35)) )
          ExfReleasePushLock(v39 + 83);
        KeAbPostRelease((ULONG_PTR)(v39 + 83));
        KeLeaveCriticalRegion();
        v5 = 0;
      }
    }
  }
}
