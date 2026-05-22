/*
 * XREFs of ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x1800E7E2C
 * Callers:
 *     ??_GConsumerControlGenericDevice@@EEAAPEAXI@Z @ 0x1800E7E80 (--_GConsumerControlGenericDevice@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
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
