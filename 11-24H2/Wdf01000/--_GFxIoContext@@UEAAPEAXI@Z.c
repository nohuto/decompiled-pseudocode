/*
 * XREFs of ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1400211C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxIoContext@@UEAA@XZ @ 0x14000EBB8 (--1FxIoContext@@UEAA@XZ.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 */

FxIoContext *__fastcall FxIoContext::`scalar deleting destructor'(FxIoContext *this, char a2)
{
  FxIoContext::~FxIoContext(this);
  if ( (a2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
