/*
 * XREFs of ??1CBackTraceBucket@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C
 * Callers:
 *     ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C01701F4 (-Uninitialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CBackTraceBucket::~CBackTraceBucket(NSInstrumentation::CBackTraceBucket *this)
{
  _QWORD *i; // rcx

  for ( i = *(_QWORD **)this; i; i = *(_QWORD **)this )
  {
    *(_QWORD *)this = *i;
    ExFreePoolWithTag(i, 0);
  }
}
