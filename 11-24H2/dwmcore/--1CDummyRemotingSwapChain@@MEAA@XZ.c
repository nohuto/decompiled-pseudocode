/*
 * XREFs of ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x1802C66F8
 * Callers:
 *     ??_GCDummyRemotingSwapChain@@MEAAPEAXI@Z @ 0x1802C67B0 (--_GCDummyRemotingSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C7BD0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDummyRemotingSwapChain::~CDummyRemotingSwapChain(CDummyRemotingSwapChain *this)
{
  HMODULE v2; // rcx

  *(_QWORD *)this = &CDummyRemotingSwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 1) = &CDummyRemotingSwapChain::`vftable'{for `IPixelFormat'};
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 9);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
  v2 = (HMODULE)*((_QWORD *)this + 8);
  if ( v2 )
    FreeLibrary(v2);
  `vector destructor iterator'(
    (char *)this + 104,
    96LL,
    2LL,
    (void (__fastcall *)(char *))CDummyRemotingSwapChain::CPresentStats::~CPresentStats);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>((CD3DDevice **)this + 6);
  CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>(this);
}
