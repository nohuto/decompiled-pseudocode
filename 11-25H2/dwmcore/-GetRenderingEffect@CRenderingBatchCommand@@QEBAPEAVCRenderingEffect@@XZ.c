/*
 * XREFs of ?GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x1801D6630
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180295158 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     <none>
 */

struct CRenderingEffect *__fastcall CRenderingBatchCommand::GetRenderingEffect(CRenderingBatchCommand *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  if ( *((_BYTE *)this + 92) )
    return *(struct CRenderingEffect **)(v1 + 80);
  else
    return *(struct CRenderingEffect **)(v1 + 24);
}
