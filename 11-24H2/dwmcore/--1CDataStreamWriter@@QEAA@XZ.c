/*
 * XREFs of ??1CDataStreamWriter@@QEAA@XZ @ 0x180132210
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x1801319FC (--1CRenderData@@MEAA@XZ.c)
 *     ?ReleaseCommandBatch@CChannel@@UEAAXXZ @ 0x1801B57A0 (-ReleaseCommandBatch@CChannel@@UEAAXXZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1802614B8 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x1801326E4 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 */

void __fastcall CDataStreamWriter::~CDataStreamWriter(CDataStreamWriter *this)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rcx

  CDataStreamWriter::FreeResources(this);
  v2 = (_QWORD **)((char *)this + 16);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    operator delete(v4);
  }
}
