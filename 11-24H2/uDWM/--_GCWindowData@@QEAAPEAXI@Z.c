/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001BFBC
 * Callers:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x18000445C (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18007793C (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001BFE4 (--1CWindowData@@QEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CWindowData *__fastcall CWindowData::`scalar deleting destructor'(CWindowData *this)
{
  CWindowData::~CWindowData(this);
  DefaultHeap::Free(this);
  return this;
}
