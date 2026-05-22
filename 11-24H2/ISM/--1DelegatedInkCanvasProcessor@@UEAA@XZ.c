/*
 * XREFs of ??1DelegatedInkCanvasProcessor@@UEAA@XZ @ 0x18019E9CC
 * Callers:
 *     ??_EDelegatedInkCanvasProcessor@@UEAAPEAXI@Z @ 0x18019EBA0 (--_EDelegatedInkCanvasProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@XZ @ 0x18019E6D8 (--1-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircularQueueProducer@@.c)
 */

void __fastcall DelegatedInkCanvasProcessor::~DelegatedInkCanvasProcessor(void **this)
{
  std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>(this + 4);
  *((_DWORD *)this + 3) = -1073741823;
}
