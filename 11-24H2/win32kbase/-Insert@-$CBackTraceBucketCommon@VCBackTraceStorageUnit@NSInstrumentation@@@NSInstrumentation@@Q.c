/*
 * XREFs of ?Insert@?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1401D0390
 * Callers:
 *     ?Insert@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1401D0444 (-Insert@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 * Callees:
 *     ?Create@?$CBackTraceStorageUnitBaseT@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@PEAV32@@Z @ 0x1401CFE04 (-Create@-$CBackTraceStorageUnitBaseT@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentatio.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

__int64 __fastcall NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>::Insert(
        __int64 *a1,
        __int64 a2,
        void *a3)
{
  __int64 v3; // rbp
  __int64 i; // rbx
  __int64 result; // rax
  volatile signed __int32 *v9; // rdx

  v3 = *a1;
  for ( i = *a1; i; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 8) == a2 && !memcmp((const void *)(i + 16), a3, 0xA0uLL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(i + 176));
      return i;
    }
  }
  result = NSInstrumentation::CBackTraceStorageUnitBaseT<NSInstrumentation::CBackTraceStorageUnit>::Create(
             a2,
             (__int128 *)a3,
             v3);
  if ( result )
  {
    v9 = (volatile signed __int32 *)a1[1];
    *a1 = result;
    if ( v9 )
      *(_DWORD *)(result + 180) = _InterlockedIncrement(v9);
  }
  return result;
}
