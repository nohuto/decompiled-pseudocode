/*
 * XREFs of ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800E582C
 * Callers:
 *     ??_EConsumerControlNexusDevice@@EEAAPEAXI@Z @ 0x1800E59D0 (--_EConsumerControlNexusDevice@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800726C8 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800E5808 (--1-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-HidD_FreePrepars.c)
 *     ?Clear@?$NtList@UInputBufferListEntry@ConsumerControlNexusDevice@@@@QEAAXXZ @ 0x1800E5A20 (-Clear@-$NtList@UInputBufferListEntry@ConsumerControlNexusDevice@@@@QEAAXXZ.c)
 *     ?NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800E6114 (-NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ConsumerControlNexusDevice::~ConsumerControlNexusDevice(ConsumerControlNexusDevice *this)
{
  InputContext *v2; // rcx

  *(_QWORD *)this = &ConsumerControlNexusDevice::`vftable';
  if ( *((_BYTE *)this + 136) )
    ConsumerControlNexusDevice::NotifyDeviceRemoval(this);
  PnpDevice::CloseInterface(*((PnpDevice **)this + 2));
  while ( *((_DWORD *)this + 22) )
    SleepEx(0x64u, 1);
  NtList<ConsumerControlNexusDevice::InputBufferListEntry>::Clear((char *)this + 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
  NtList<ConsumerControlNexusDevice::InputBufferListEntry>::Clear((char *)this + 72);
  NtList<ConsumerControlNexusDevice::InputBufferListEntry>::Clear((char *)this + 48);
  wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>((struct _HIDP_PREPARSED_DATA **)this + 4);
  WindowsDeleteString(*((HSTRING *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  v2 = (InputContext *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    InputContext::Release(v2);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
