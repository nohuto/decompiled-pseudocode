/*
 * XREFs of ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800EDC6C
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800ED848 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CLoginTransition@@QEAA@XZ @ 0x1800C8078 (--1CLoginTransition@@QEAA@XZ.c)
 */

CLoginTransition *__fastcall CLoginTransition::`scalar deleting destructor'(CLoginTransition *this)
{
  CLoginTransition::~CLoginTransition(this);
  DefaultHeap::Free(this);
  return this;
}
