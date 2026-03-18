/*
 * XREFs of ??_EFxUsbPipeTransferContext@@UEAAPEAXI@Z @ 0x140020AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x14001F5F8 (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 */

FxUsbPipeTransferContext *__fastcall FxUsbPipeTransferContext::`vector deleting destructor'(
        FxUsbPipeTransferContext *this,
        char a2)
{
  FxUsbPipeTransferContext::~FxUsbPipeTransferContext(this);
  if ( (a2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
