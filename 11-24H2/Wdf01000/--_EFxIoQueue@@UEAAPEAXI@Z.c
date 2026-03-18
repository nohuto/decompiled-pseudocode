/*
 * XREFs of ??_EFxIoQueue@@UEAAPEAXI@Z @ 0x1400402C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1400402F8 (--1FxIoQueue@@UEAA@XZ.c)
 */

FxIoQueue *__fastcall FxIoQueue::`vector deleting destructor'(FxIoQueue *this, char a2)
{
  FxIoQueue::~FxIoQueue(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
