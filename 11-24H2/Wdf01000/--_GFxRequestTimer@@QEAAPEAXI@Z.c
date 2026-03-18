/*
 * XREFs of ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1400216BC
 * Callers:
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x140011D40 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x14001CF04 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1400232B8 (--1MxTimer@@QEAA@XZ.c)
 */

FxRequestTimer *__fastcall FxRequestTimer::`scalar deleting destructor'(FxRequestTimer *this)
{
  MxTimer::~MxTimer(&this->Timer);
  FxStump::operator delete(this);
  return this;
}
