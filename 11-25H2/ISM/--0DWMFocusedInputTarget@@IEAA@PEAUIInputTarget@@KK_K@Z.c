/*
 * XREFs of ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z @ 0x180022604
 * Callers:
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x180022784 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 * Callees:
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x180014640 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022740 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
DWMFocusedInputTarget *__fastcall DWMFocusedInputTarget::DWMFocusedInputTarget(
        DWMFocusedInputTarget *this,
        struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 *v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  *((_QWORD *)this + 5) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 12) = 1;
  *(_QWORD *)this = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 3) = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 4) = &DWMFocusedInputTarget::`vftable'{for `IInputSiteTarget'};
  *((_QWORD *)this + 5) = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
  v9 = (__int64 *)((char *)this + 56);
  *v9 = (__int64)a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v9);
  *((_DWORD *)this + 16) = a3;
  *((_DWORD *)this + 17) = a4;
  *((_QWORD *)this + 9) = a5;
  *((_QWORD *)this + 10) = 0LL;
  v10 = 0LL;
  a5 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct IInputTarget *, GUID *, unsigned __int64 *))a2)(
      a2,
      &GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea,
      &a5);
    v10 = a5;
  }
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v14);
    Microsoft::WRL::ComPtr<InputSite>::operator=((char *)this + 80, v11);
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v10 = a5;
  }
  if ( v10 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( !*((_QWORD *)this + 10) )
    DWMFocusedInputTarget::PopulateInputSiteFromViewId(this);
  return this;
}
