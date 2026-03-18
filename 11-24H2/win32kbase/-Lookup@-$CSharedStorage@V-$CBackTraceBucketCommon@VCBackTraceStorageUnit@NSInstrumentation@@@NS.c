/*
 * XREFs of ?Lookup@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1401D0698
 * Callers:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1400D9130 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     ?AcquireBackTrace@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x14019D3A0 (-AcquireBackTrace@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrum.c)
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140041080 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400410E4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ @ 0x1401D12B4 (-ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

volatile signed __int32 *__fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
        NSInstrumentation::CPrioritizedWriterLock *this,
        NSInstrumentation::CBackTrace *a2)
{
  int v4; // eax
  volatile signed __int32 *v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // rbp
  volatile signed __int32 *v8; // rbx

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v4 = *((_DWORD *)this + 7);
  v5 = 0LL;
  while ( v4 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    RIMLockShared((__int64)this);
    W32ReleasePushLockShared(this);
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v4 = *((_DWORD *)this + 7);
  }
  v6 = NSInstrumentation::CBackTrace::ComputeHash(a2);
  v7 = *((_QWORD *)this + 6) + 16 * (v6 % *((unsigned int *)this + 8));
  RIMLockShared(v7);
  v8 = *(volatile signed __int32 **)(v7 + 8);
  if ( v8 )
  {
    while ( 1 )
    {
      v8 = *(volatile signed __int32 **)v8;
      if ( !v8 )
        break;
      if ( *((_QWORD *)v8 + 1) == v6 && !memcmp((const void *)(v8 + 4), a2, 0xA0uLL) )
      {
        _InterlockedIncrement(v8 + 44);
        v5 = v8;
        break;
      }
    }
  }
  W32ReleasePushLockShared((struct W32_PUSH_LOCK *)v7);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
