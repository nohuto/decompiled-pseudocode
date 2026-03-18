/*
 * XREFs of ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1401D00C4
 * Callers:
 *     ?PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1401BF79C (-PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z.c)
 * Callees:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401981D0 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ??$Enumerate@P6AXPEAX00@Z@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401CFBB8 (--$Enumerate@P6AXPEAX00@Z@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSIn.c)
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401D0170 (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Dump(
        NSInstrumentation::CLeakTrackingAllocator *this,
        struct NSInstrumentation::_DUMP_CONTEXT *a2)
{
  __int64 v2; // rax
  NSInstrumentation::CPrioritizedWriterLock *v3; // rcx
  __int64 v4; // rax
  NSInstrumentation::CPointerHashTable *v5; // rcx
  __int64 v6; // rax
  struct W32_PUSH_LOCK *v7; // rcx

  v2 = *((_QWORD *)a2 + 2) - 0x48DE8AFC9B778E05LL;
  if ( *((_QWORD *)a2 + 2) == 0x48DE8AFC9B778E05LL )
    v2 = *((_QWORD *)a2 + 3) - 0x5856D701881DE4BALL;
  if ( v2 )
  {
    v4 = *((_QWORD *)a2 + 2) - 0x4D4A861A086ABD0CLL;
    if ( *((_QWORD *)a2 + 2) == 0x4D4A861A086ABD0CLL )
      v4 = *((_QWORD *)a2 + 3) + 0x6C3672022D48C047LL;
    if ( v4 )
    {
      v6 = *((_QWORD *)a2 + 2) - 0x4807D64F43CE3427LL;
      if ( *((_QWORD *)a2 + 2) == 0x4807D64F43CE3427LL )
        v6 = *((_QWORD *)a2 + 3) + 0x57D7F4F6559CF64DLL;
      if ( !v6 )
      {
        v7 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 12);
        if ( v7 )
          NSInstrumentation::CSortedVector<void *,void *>::Enumerate(v7);
      }
    }
    else
    {
      v5 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 11);
      if ( v5 )
        NSInstrumentation::CPointerHashTable::Enumerate(
          v5,
          (void (*)(void *, void *, void *))NSInstrumentation::WriteAllocTableDumpBufferCallback,
          a2);
    }
  }
  else
  {
    v3 = (NSInstrumentation::CPrioritizedWriterLock *)*((_QWORD *)this + 13);
    if ( v3 )
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Enumerate<void (*)(void *,void *,void *)>(
        v3,
        (__int64)a2,
        a2);
  }
}
