/*
 * XREFs of ??1MPCTarget@@UEAA@XZ @ 0x1800FDFD4
 * Callers:
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x1800FD738 (--1MPCFocusTarget@@UEAA@XZ.c)
 *     ??_EMPCTarget@@UEAAPEAXI@Z @ 0x1800FE050 (--_EMPCTarget@@UEAAPEAXI@Z.c)
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$0 @ 0x1801CF2DE (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$0.c)
 * Callees:
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180026AAC (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006934C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x1800FE590 (-RemoveFromRouter@MPCTarget@@MEAAXXZ.c)
 *     ?StopWindowWatcher@MPCTarget@@AEAAXXZ @ 0x1800FE5C0 (-StopWindowWatcher@MPCTarget@@AEAAXXZ.c)
 */

void __fastcall MPCTarget::~MPCTarget(MPCTarget *this)
{
  *(_QWORD *)this = &MPCTarget::`vftable'{for `IMPCTarget'};
  *((_QWORD *)this + 1) = &MPCTarget::`vftable'{for `RefCountedObject'};
  MPCTarget::RemoveFromRouter(this);
  MPCTarget::StopWindowWatcher(this);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((MPCTarget *)((char *)this + 64));
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
