/*
 * XREFs of ??1DWMFocusedInputTarget@@MEAA@XZ @ 0x180074358
 * Callers:
 *     ??_GDWMFocusedInputTarget@@MEAAPEAXI@Z @ 0x180074308 (--_GDWMFocusedInputTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMFocusedInputTarget::~DWMFocusedInputTarget(DWMFocusedInputTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 3) = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 4) = &DWMFocusedInputTarget::`vftable'{for `IInputSiteTarget'};
  *((_QWORD *)this + 5) = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  *((_QWORD *)this + 5) = &RefCountedObject::`vftable';
}
