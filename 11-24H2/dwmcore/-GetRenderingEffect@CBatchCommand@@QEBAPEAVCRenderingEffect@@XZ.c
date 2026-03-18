/*
 * XREFs of ?GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x1801C8C20
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18022EE74 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

struct CRenderingEffect *__fastcall CBatchCommand::GetRenderingEffect(CBatchCommand *this)
{
  __int64 v1; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)this == 1 )
  {
    v1 = *((_QWORD *)this + 1);
    if ( !*((_BYTE *)this + 92) )
      return *(struct CRenderingEffect **)(v1 + 24);
    return *(struct CRenderingEffect **)(v1 + 80);
  }
  if ( *(_DWORD *)this != 2 )
  {
    if ( *(_DWORD *)this == 3 )
      return (struct CRenderingEffect *)*((_QWORD *)this + 1);
    if ( (unsigned int)(*(_DWORD *)this - 4) > 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    v1 = *((_QWORD *)this + 1);
    if ( !*((_BYTE *)this + 92) )
      return *(struct CRenderingEffect **)(v1 + 24);
    return *(struct CRenderingEffect **)(v1 + 80);
  }
  return 0LL;
}
