/*
 * XREFs of ??1CCompSwapChain@@MEAA@XZ @ 0x1802D083C
 * Callers:
 *     ??_ECCompSwapChain@@MEAAPEAXI@Z @ 0x1802D0910 (--_ECCompSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800FFFEC (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompSwapChain::~CCompSwapChain(CCompSwapChain *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CCompSwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 1) = &CCompSwapChain::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 6) = &CCompSwapChain::`vftable';
  *(_BYTE *)(*((_QWORD *)this + 7) + 1500LL) = 1;
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 37);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 28);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 12);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>((CD3DDevice **)this + 7);
  CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>(this);
}
