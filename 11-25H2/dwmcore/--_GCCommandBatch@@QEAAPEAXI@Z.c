/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18026D508
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180183DB8 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x18026D3E4 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CDataStreamWriter@@QEAA@XZ @ 0x180184258 (--1CDataStreamWriter@@QEAA@XZ.c)
 */

CCommandBatch *__fastcall CCommandBatch::`scalar deleting destructor'(CCommandBatch *this)
{
  CDataStreamWriter::~CDataStreamWriter(this);
  operator delete(this);
  return this;
}
