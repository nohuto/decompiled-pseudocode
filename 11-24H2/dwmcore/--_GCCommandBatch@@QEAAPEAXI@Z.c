/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1802614B8
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1801304D8 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180261394 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CDataStreamWriter@@QEAA@XZ @ 0x180132210 (--1CDataStreamWriter@@QEAA@XZ.c)
 */

CCommandBatch *__fastcall CCommandBatch::`scalar deleting destructor'(CCommandBatch *this)
{
  CDataStreamWriter::~CDataStreamWriter(this);
  operator delete(this);
  return this;
}
