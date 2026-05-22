/*
 * XREFs of ??1DWMCursor@@MEAA@XZ @ 0x180093350
 * Callers:
 *     ??_EDWMCursor@@MEAAPEAXI@Z @ 0x18007FB94 (--_EDWMCursor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18000CF00 (-InternalRelease@-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180093428 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x180093454 (--1CommandRegistrationToken@TestCommandHost@@QEAA@XZ.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801C7FB4 (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMCursor::~DWMCursor(DWMCursor *this)
{
  std::_Mutex_base *v2; // rbx
  __int64 v3; // rcx

  *(_QWORD *)this = &DWMCursor::`vftable'{for `ICursor3D'};
  *((_QWORD *)this + 1) = &DWMCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 2) = &DWMCursor::`vftable'{for `RefCountedObject'};
  v2 = (std::_Mutex_base *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 128LL))(*((_QWORD *)this + 4));
  std::_Mutex_base::lock(v2);
  if ( *((_BYTE *)this + 49) )
    DWMCursorBroker::UnregisterCursor(*((DWMCursorBroker **)this + 4), this);
  _Mtx_unlock(v2);
  Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease((Microsoft::Bamo::BaseBamoConnection **)this + 20);
  TestCommandHost::CommandRegistrationToken::~CommandRegistrationToken((DWMCursor *)((char *)this + 128));
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 9);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 64);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
