/*
 * XREFs of ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z @ 0x1801C8770
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180289FB8 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBatchOptimizer::SkipContinuations(CBatchOptimizer *this, unsigned int a2)
{
  int *v2; // r9
  __int64 v3; // rax

  v2 = (int *)((char *)this + 4 * (int)a2 + 48);
  if ( *((_DWORD *)this + 130 * *v2 + 26) )
  {
    do
    {
      v3 = v2[1];
      ++v2;
      ++a2;
    }
    while ( *((_DWORD *)this + 130 * v3 + 26) );
  }
  return a2;
}
