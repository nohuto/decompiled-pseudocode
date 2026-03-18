/*
 * XREFs of ??_EFxUsbInterface@@MEAAPEAXI@Z @ 0x14009F580
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x14007F5F0 (--1FxUsbInterface@@MEAA@XZ.c)
 */

FxUsbInterface *__fastcall FxUsbInterface::`vector deleting destructor'(FxUsbInterface *this, char a2)
{
  FxUsbInterface::~FxUsbInterface(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
