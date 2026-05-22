/*
 * XREFs of ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x1800811CC
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800810C0 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800528D0 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x1800703AC (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180093428 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009AC50 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 */

LampArrayRawInputProvider *__fastcall LampArrayRawInputProvider::LampArrayRawInputProvider(
        LampArrayRawInputProvider *this)
{
  size_t size_of; // rax
  _QWORD *v3; // rax
  HANDLE EventW; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &LampArrayRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &LampArrayRawInputProvider::`vftable'{for `IRawInputSessionNotify'};
  *((_QWORD *)this + 2) = &LampArrayRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &LampArrayRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_BYTE *)this + 184) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 29) = (char *)this + 224;
  *((_QWORD *)this + 28) = (char *)this + 224;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 33) = (char *)this + 256;
  *((_QWORD *)this + 32) = (char *)this + 256;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  QpcTimeConverter::QpcTimeConverter((LampArrayRawInputProvider *)((char *)this + 304));
  *((_BYTE *)this + 320) = 0;
  *((_QWORD *)this + 41) = -1LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  size_of = std::_Get_size_of_n<72>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 46) = v3;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
    (char *)this + 328,
    &EventW);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&EventW);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
    (char *)this + 336,
    &EventW);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&EventW);
  return this;
}
