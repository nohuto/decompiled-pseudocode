/*
 * XREFs of ?Uninitialize@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1401D0B7C
 * Callers:
 *     ?Destroy@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401D005C (-Destroy@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@.c)
 * Callees:
 *     ??1?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1401CFD50 (--1-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAA@X.c)
 */

void __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(
        __int64 a1)
{
  unsigned int v1; // eax
  _QWORD ***v3; // r14
  _QWORD ***v4; // rdi
  __int64 v5; // rbp
  void *v6; // rsi
  void *v7; // rcx

  v1 = *(_DWORD *)(a1 + 32);
  v3 = *(_QWORD ****)(a1 + 48);
  if ( v1 )
  {
    v4 = v3 + 1;
    v5 = v1;
    do
    {
      v6 = *v4;
      if ( *v4 )
      {
        NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>::~CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>(*v4);
        ExFreePoolWithTag(v6, 0);
      }
      v4 += 2;
      --v5;
    }
    while ( v5 );
  }
  ExFreePoolWithTag(v3, 0);
  v7 = *(void **)(a1 + 40);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
}
