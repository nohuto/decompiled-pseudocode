/*
 * XREFs of ??_GFxUsbPipe@@MEAAPEAXI@Z @ 0x14003E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x14003EBEC (--1FxUsbPipe@@MEAA@XZ.c)
 */

FxUsbPipe *__fastcall FxUsbPipe::`scalar deleting destructor'(FxUsbPipe *this, char a2)
{
  FxUsbPipe::~FxUsbPipe(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
