/*
 * XREFs of ?Insert@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1401D0444
 * Callers:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1400D9130 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     ?AcquireBackTrace@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x14019D3A0 (-AcquireBackTrace@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrum.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140041080 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400410E4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Insert@?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1401D0390 (-Insert@-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@Q.c)
 *     ?ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ @ 0x1401D12B4 (-ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ.c)
 */

__int64 __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
        NSInstrumentation::CPrioritizedWriterLock *this,
        NSInstrumentation::CBackTrace *a2)
{
  int i; // eax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  __int64 *Pool2; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    RIMLockShared((__int64)this);
    W32ReleasePushLockShared(this);
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
  }
  v5 = NSInstrumentation::CBackTrace::ComputeHash(a2);
  v6 = *((_QWORD *)this + 6) + 16 * (v5 % *((unsigned int *)this + 8));
  GreEnterCriticalRegionAndAcquirePushLockExclusive((struct W32_PUSH_LOCK *)v6);
  Pool2 = *(__int64 **)(v6 + 8);
  if ( !Pool2 )
  {
    v8 = *((_QWORD *)this + 5);
    Pool2 = (__int64 *)ExAllocatePool2(258LL, 16LL, 826897237LL);
    if ( !Pool2 )
    {
      v9 = 0LL;
      goto LABEL_9;
    }
    *Pool2 = 0LL;
    ++*((_DWORD *)this + 9);
    *(_QWORD *)(v6 + 8) = Pool2;
    Pool2[1] = v8;
  }
  v9 = NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>::Insert(Pool2, v5, a2);
LABEL_9:
  W32ReleasePushLockExclusive((struct W32_PUSH_LOCK *)v6);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v9;
}
