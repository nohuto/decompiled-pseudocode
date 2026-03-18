/*
 * XREFs of CcForEachPartition @ 0x140470EE8
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1404D6B8C (MiFlushAllFilesystemPages.c)
 *     CcNotifyWriteBehind @ 0x14057A440 (CcNotifyWriteBehind.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14057AEA0 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140A71200 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x140246D98 (PsGetNextPartitionUnsafe.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x1402A7F20 (CcDereferencePartition.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1402CE9E0 (CcForEachPrivateVolumeCacheMap.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **__fastcall CcForEachPartition(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rbx
  char v5; // di
  _QWORD *i; // rcx
  _UNKNOWN **result; // rax
  _QWORD *v12; // rsi
  KIRQL v13; // al
  __int64 v14; // rcx
  KIRQL v15; // dl
  __int64 v16; // r9
  char v17; // al
  char v18; // bp
  signed __int64 v19; // rax
  signed __int64 v20; // rtt

  v4 = 0LL;
  v5 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    result = PsGetNextPartitionUnsafe(i);
    v12 = result;
    if ( !result )
      break;
    v13 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v14 = v12[1];
    v15 = v13;
    if ( v14 )
    {
      v4 = v12[1];
      if ( *(_BYTE *)(v14 + 1294) >= 2u )
      {
        if ( a3 )
        {
          _m_prefetchw((const void *)(v14 + 1296));
          v19 = *(_QWORD *)(v14 + 1296);
          while ( (unsigned __int64)(v19 + 1) > 1 )
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 1296), v19 + 1, v19);
            if ( v20 == v19 )
              goto LABEL_6;
          }
          if ( v19 )
            __fastfail(0xEu);
          v5 = 0;
        }
      }
      else
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 1296)) <= 1 )
          __fastfail(0xEu);
LABEL_6:
        v5 = 1;
      }
    }
    KeReleaseSpinLock(&CcGlobalPartitionLock, v15);
    if ( v5 )
    {
      v17 = CcEnablePerVolumeLazyWriter && !a4
          ? CcForEachPrivateVolumeCacheMap(v4, a1, a2)
          : guard_dispatch_icall_no_overrides(v4, 0LL, a2, v16);
      v18 = v17;
      CcDereferencePartition(v4);
      v5 = 0;
      if ( !v18 )
        return (_UNKNOWN **)ObfDereferenceObjectWithTag(v12, 0x6E457350u);
    }
  }
  return result;
}
