/*
 * XREFs of ??1PnpDevice@@UEAA@XZ @ 0x18006D010
 * Callers:
 *     ??_GPnpDevice@@UEAAPEAXI@Z @ 0x18006CFC0 (--_GPnpDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800726C8 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800E316C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 *     ?UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ @ 0x1800E4790 (-UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PnpDevice::~PnpDevice(HSTRING *this)
{
  InputContext *v2; // rcx

  *this = (HSTRING)&PnpDevice::`vftable';
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
    PnpDevice::UnregisterDeviceHandleNotifications((PnpDevice *)this);
  PnpDevice::CloseInterface((PnpDevice *)this);
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
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
