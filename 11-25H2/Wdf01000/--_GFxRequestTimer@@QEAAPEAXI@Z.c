/*
 * XREFs of ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x140008F8C
 * Callers:
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x14002C884 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x140037A20 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x14000AB88 (--1MxTimer@@QEAA@XZ.c)
 */

FxRequestTimer *__fastcall FxRequestTimer::`scalar deleting destructor'(FxRequestTimer *this)
{
  MxTimer::~MxTimer(&this->Timer);
  FxStump::operator delete(this);
  return this;
}
