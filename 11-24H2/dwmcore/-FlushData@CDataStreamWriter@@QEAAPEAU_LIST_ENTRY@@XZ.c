/*
 * XREFs of ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180130D30
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180130ED4 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1801315F0 (-CheckPrimitives@CRenderData@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CDataStreamWriter::FlushData(CDataStreamWriter *this)
{
  CDataStreamWriter *v1; // rax
  CDataStreamWriter **v2; // rdx

  v1 = (CDataStreamWriter *)*((_QWORD *)this + 4);
  if ( v1 )
  {
    v2 = (CDataStreamWriter **)*((_QWORD *)this + 1);
    if ( *v2 != this )
      __fastfail(3u);
    *(_QWORD *)v1 = this;
    *((_QWORD *)v1 + 1) = v2;
    *v2 = v1;
    *((_QWORD *)this + 1) = v1;
    *((_QWORD *)this + 4) = 0LL;
  }
  return (struct _LIST_ENTRY *)this;
}
