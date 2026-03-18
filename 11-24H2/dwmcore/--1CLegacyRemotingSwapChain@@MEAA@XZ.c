/*
 * XREFs of ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1802CBA78
 * Callers:
 *     ??_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z @ 0x1802CBB80 (--_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRemotingSwapChain::~CLegacyRemotingSwapChain(CLegacyRemotingSwapChain *this)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  void *v4; // rdi
  HANDLE CurrentProcess; // rax
  HMODULE v6; // rcx

  *(_QWORD *)this = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResource'};
  v2 = (_QWORD *)((char *)this + 48);
  *((_QWORD *)this + 1) = &CLegacyRemotingSwapChain::`vftable'{for `IPixelFormat'};
  v3 = *((_QWORD *)this + 8);
  *v2 = &CLegacyRemotingSwapChain::`vftable';
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  v4 = (void *)*((_QWORD *)this + 24);
  if ( v4 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v4);
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 11);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
  v6 = (HMODULE)*((_QWORD *)this + 10);
  if ( v6 )
    FreeLibrary(v6);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 23);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 14);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 12);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>((CD3DDevice **)this + 7);
  CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>(this);
}
