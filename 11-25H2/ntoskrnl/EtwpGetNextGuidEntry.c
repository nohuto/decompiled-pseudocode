/*
 * XREFs of EtwpGetNextGuidEntry @ 0x14089E1C0
 * Callers:
 *     EtwpGetGuidList @ 0x14089DF60 (EtwpGetGuidList.c)
 *     EtwpDisableTraceProviders @ 0x1409E45FC (EtwpDisableTraceProviders.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409FEC84 (EtwpSetProviderBinaryTracking.c)
 *     EtwpEnumerateTraceGuids @ 0x140A475DC (EtwpEnumerateTraceGuids.c)
 *     EtwpTracingProvEnableCallback @ 0x140AA5760 (EtwpTracingProvEnableCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AD6740 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpGetNextGuidEntry(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // r13
  char v4; // r14
  _QWORD **v5; // rbx
  _QWORD *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD **v9; // rbp
  signed __int64 *v10; // rdi
  __int64 i; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v13; // rsi
  _QWORD **v14; // rax
  _QWORD *v15; // r8
  signed __int64 j; // rcx
  signed __int64 v17; // rax

  v3 = a1 + 464;
  v4 = 0;
  v5 = (_QWORD **)a2;
  v6 = 0LL;
  if ( a2 )
    v7 = v3 + 56LL * (((unsigned __int8)a2[10] ^ (unsigned __int8)(a2[11] ^ a2[12] ^ a2[13])) & 0x3F);
  else
    v7 = a1 + 464;
  v8 = 16LL * a3;
  v9 = (_QWORD **)(v8 + v7);
  v10 = (signed __int64 *)(v7 + 48);
  for ( i = v8 - 48; ; v9 = (_QWORD **)((char *)v10 + i) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = KeAbPreAcquire((__int64)v10, 0LL);
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v10, 0, v13, (unsigned __int64)v10);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    v14 = v9;
    if ( v5 )
      v14 = v5;
    v15 = *v14;
LABEL_11:
    if ( v15 != v9 )
    {
      v6 = v15;
      _m_prefetchw(v15 + 4);
      for ( j = v15[4]; ; j = v17 )
      {
        if ( !j )
        {
          v15 = (_QWORD *)*v15;
          goto LABEL_11;
        }
        v17 = _InterlockedCompareExchange64(v15 + 4, j + 1, j);
        if ( j == v17 )
          break;
      }
      if ( j < 0 )
        KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)v15, 0LL, 0LL);
      v4 = 1;
    }
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v5 )
      EtwpUnreferenceGuidEntry(v5);
    if ( v4 )
      return v6;
    v10 += 7;
    if ( v10 == (signed __int64 *)(v3 + 3632) )
      break;
    v5 = 0LL;
  }
  return 0LL;
}
