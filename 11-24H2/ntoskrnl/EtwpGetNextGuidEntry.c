/*
 * XREFs of EtwpGetNextGuidEntry @ 0x140839C10
 * Callers:
 *     EtwpGetGuidList @ 0x1408399A0 (EtwpGetGuidList.c)
 *     EtwpDisableTraceProviders @ 0x140A0F8B4 (EtwpDisableTraceProviders.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     EtwpTracingProvEnableCallback @ 0x140AA5F50 (EtwpTracingProvEnableCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AEBCE0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpGetNextGuidEntry(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // r13
  char v4; // r14
  ULONG_PTR v5; // rbx
  _QWORD *v6; // r15
  __int64 v7; // rdx
  signed __int64 *v8; // rsi
  __int64 v9; // rax
  _QWORD **v10; // rbp
  __int64 i; // r12
  struct _KTHREAD *CurrentThread; // rax
  char *v13; // rdi
  _QWORD **v14; // rax
  _QWORD *v15; // r8
  signed __int64 j; // rcx
  signed __int64 v17; // rax

  v3 = a1 + 720;
  v4 = 0;
  v5 = (ULONG_PTR)a2;
  v6 = 0LL;
  if ( a2 )
    v7 = v3 + 56LL * (((unsigned __int8)a2[10] ^ (unsigned __int8)(a2[11] ^ a2[12] ^ a2[13])) & 0x3F);
  else
    v7 = a1 + 720;
  v8 = (signed __int64 *)(v7 + 48);
  v9 = 16LL * a3;
  v10 = (_QWORD **)(v9 + v7);
  for ( i = v9 - 48; ; v10 = (_QWORD **)((char *)v8 + i) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = (char *)KeAbPreAcquire((__int64)v8, 0LL);
    if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8, 0, v13, (__int64)v8);
    if ( v13 )
      v13[10] = 1;
    v14 = v10;
    if ( v5 )
      v14 = (_QWORD **)v5;
    v15 = *v14;
LABEL_11:
    if ( v15 != v10 )
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
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KeLeaveCriticalRegionThread();
    if ( v5 )
      EtwpUnreferenceGuidEntry(v5);
    if ( v4 )
      return v6;
    v8 += 7;
    if ( v8 == (signed __int64 *)(v3 + 3632) )
      break;
    v5 = 0LL;
  }
  return 0LL;
}
