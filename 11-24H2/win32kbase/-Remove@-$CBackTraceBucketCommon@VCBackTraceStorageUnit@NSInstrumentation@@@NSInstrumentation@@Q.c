/*
 * XREFs of ?Remove@?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1401D09F8
 * Callers:
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x140198FAC (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>::Remove(
        _DWORD *a1,
        _DWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *i; // r9
  __int64 v6; // rax

  v2 = a1;
  for ( i = 0LL; ; i = a1 )
  {
    a1 = *(_DWORD **)a1;
    if ( !a1 )
      return 0;
    if ( a1 == a2 )
      break;
  }
  if ( a1[44]-- == 1 )
  {
    v6 = *(_QWORD *)a1;
    if ( a1 == (_DWORD *)*v2 )
      *v2 = v6;
    else
      *i = v6;
    ExFreePoolWithTag(a1, 0);
  }
  return 1;
}
