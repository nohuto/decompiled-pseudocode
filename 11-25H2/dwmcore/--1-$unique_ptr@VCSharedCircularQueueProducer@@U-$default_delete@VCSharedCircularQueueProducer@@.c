/*
 * XREFs of ??1?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@XZ @ 0x18027F828
 * Callers:
 *     ??1CSuperWetSource@@UEAA@XZ @ 0x1801FDFD8 (--1CSuperWetSource@@UEAA@XZ.c)
 *     ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ @ 0x1802A33A4 (-CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
