/*
 * XREFs of ??1?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1401CFD50
 * Callers:
 *     ?Uninitialize@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1401D0B7C (-Uninitialize@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentatio.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>::~CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>(
        _QWORD **a1)
{
  _QWORD *i; // rcx

  for ( i = *a1; i; i = *a1 )
  {
    *a1 = (_QWORD *)*i;
    ExFreePoolWithTag(i, 0);
  }
}
