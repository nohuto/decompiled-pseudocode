/*
 * XREFs of ??1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ @ 0x140198110
 * Callers:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401980D0 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ?Destroy@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401D005C (-Destroy@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@.c)
 *     ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401D0088 (-Destroy@-$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401D1108 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::~CLeakTrackingAllocator(
        NSInstrumentation::CLeakTrackingAllocator *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    NSInstrumentation::CPointerHashTable::Destroy(v2);
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
    NSInstrumentation::CSortedVector<void *,void *>::Destroy(v3);
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
    NSInstrumentation::CBackTraceStoreExCommon<NSInstrumentation::CBackTraceStorageUnit>::Destroy(v4);
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v5 )
    NSInstrumentation::CPointerHashTable::Destroy(v5);
}
