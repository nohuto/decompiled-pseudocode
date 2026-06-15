/*
 * XREFs of ??1CConnectionInstance@@QEAA@XZ @ 0x14000ECC4
 * Callers:
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14000EC98 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConnectionInstance::~CConnectionInstance(CConnectionInstance *this)
{
  if ( *((_QWORD *)this + 1) && *(_DWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6));
    *((_QWORD *)this + 1) = 0LL;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((char *)this + 56);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 7);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 6);
}
