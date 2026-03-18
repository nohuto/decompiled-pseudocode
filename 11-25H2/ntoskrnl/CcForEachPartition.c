/*
 * XREFs of CcForEachPartition @ 0x14035EBE4
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1404D7D5C (MiFlushAllFilesystemPages.c)
 *     CcNotifyWriteBehind @ 0x140577140 (CcNotifyWriteBehind.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140577B90 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140A6F330 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PsGetNextPartitionUnsafe @ 0x14035E34C (PsGetNextPartitionUnsafe.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403A6590 (CcForEachPrivateVolumeCacheMap.c)
 *     CcDereferencePartition @ 0x1403AC770 (CcDereferencePartition.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  char v16; // al
  char v17; // bp
  signed __int64 v18; // rax
  signed __int64 v19; // rtt

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
          v18 = *(_QWORD *)(v14 + 1296);
          while ( (unsigned __int64)(v18 + 1) > 1 )
          {
            v19 = v18;
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 1296), v18 + 1, v18);
            if ( v19 == v18 )
              goto LABEL_6;
          }
          if ( v18 )
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
      v16 = CcEnablePerVolumeLazyWriter && !a4
          ? CcForEachPrivateVolumeCacheMap(v4, a1, a2)
          : guard_dispatch_icall_no_overrides(v4, 0LL);
      v17 = v16;
      CcDereferencePartition(v4);
      v5 = 0;
      if ( !v17 )
        return (_UNKNOWN **)ObfDereferenceObjectWithTag(v12, 0x6E457350u);
    }
  }
  return result;
}
