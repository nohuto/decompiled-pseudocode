/*
 * XREFs of ??1ButtonRecognizer@@MEAA@XZ @ 0x18019E500
 * Callers:
 *     ??_GButtonRecognizer@@MEAAPEAXI@Z @ 0x18019E6C0 (--_GButtonRecognizer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000B6AC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18019E4A0 (--1-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ButtonRecognizer::~ButtonRecognizer(ButtonRecognizer *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  unsigned __int64 v4; // r8

  *(_QWORD *)this = &ButtonRecognizer::`vftable';
  *((_DWORD *)this + 6) = 0;
  v2 = (__int64 *)((char *)this + 152);
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 21,
    0LL,
    v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 88);
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 48);
  std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>((char **)this + 4);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
