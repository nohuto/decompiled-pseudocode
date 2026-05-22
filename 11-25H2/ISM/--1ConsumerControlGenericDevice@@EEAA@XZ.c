/*
 * XREFs of ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x1800E69BC
 * Callers:
 *     ??_GConsumerControlGenericDevice@@EEAAPEAXI@Z @ 0x1800E6A10 (--_GConsumerControlGenericDevice@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 */

void __fastcall ConsumerControlGenericDevice::~ConsumerControlGenericDevice(HSTRING *this)
{
  InputContext *v2; // rcx

  *this = (HSTRING)&ConsumerControlGenericDevice::`vftable';
  WindowsDeleteString(this[3]);
  this[3] = 0LL;
  v2 = (InputContext *)this[2];
  if ( v2 )
  {
    this[2] = 0LL;
    InputContext::Release(v2);
  }
  *this = (HSTRING)&RefCountedObject::`vftable';
}
