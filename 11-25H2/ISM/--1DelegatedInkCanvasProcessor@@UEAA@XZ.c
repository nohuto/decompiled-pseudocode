/*
 * XREFs of ??1DelegatedInkCanvasProcessor@@UEAA@XZ @ 0x180197208
 * Callers:
 *     ??_EDelegatedInkCanvasProcessor@@UEAAPEAXI@Z @ 0x1801973D0 (--_EDelegatedInkCanvasProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@XZ @ 0x180196F08 (--1-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircularQueueProducer@@.c)
 */

void __fastcall DelegatedInkCanvasProcessor::~DelegatedInkCanvasProcessor(void **this)
{
  std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>(this + 4);
  *((_DWORD *)this + 3) = -1073741823;
}
