/*
 * XREFs of ??0CEndpointStore@@QEAA@XZ @ 0x18007A540
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore@@AEAPEBG@Z @ 0x1800A57DC (--$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore.c)
 * Callees:
 *     ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180021710 (--0-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18007A618 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

CEndpointStore *__fastcall CEndpointStore::CEndpointStore(CEndpointStore *this)
{
  CEndpointStore *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>();
  *(_QWORD *)this = &CEndpointStore::`vftable';
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 5) = 7LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 8) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 48), 0, 0);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 112), 0, 0);
  *((_QWORD *)this + 19) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 4, 0, 0);
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>((_QWORD *)this + 25);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 208), 0, 0);
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>((_QWORD *)this + 31);
  result = this;
  *((_DWORD *)this + 65) = 0;
  return result;
}
