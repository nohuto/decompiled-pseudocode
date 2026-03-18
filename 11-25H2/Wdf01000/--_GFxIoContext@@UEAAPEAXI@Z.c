/*
 * XREFs of ??_GFxIoContext@@UEAAPEAXI@Z @ 0x140008A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1400343DC (--1FxIoContext@@UEAA@XZ.c)
 */

FxIoContext *__fastcall FxIoContext::`scalar deleting destructor'(FxIoContext *this, char a2)
{
  FxIoContext::~FxIoContext(this);
  if ( (a2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
