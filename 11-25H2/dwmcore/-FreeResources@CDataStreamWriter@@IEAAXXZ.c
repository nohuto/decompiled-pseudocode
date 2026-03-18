/*
 * XREFs of ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x180184370
 * Callers:
 *     ??1CDataStreamWriter@@QEAA@XZ @ 0x180184258 (--1CDataStreamWriter@@QEAA@XZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18018433C (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::FreeResources(void **this)
{
  CDataStreamWriter *v1; // rbx
  CDataStreamWriter *v3; // rcx

  v1 = (CDataStreamWriter *)*this;
  if ( *this != this )
  {
    do
    {
      v3 = v1;
      v1 = *(CDataStreamWriter **)v1;
      operator delete(v3);
    }
    while ( v1 != (CDataStreamWriter *)this );
  }
  operator delete(this[4]);
}
