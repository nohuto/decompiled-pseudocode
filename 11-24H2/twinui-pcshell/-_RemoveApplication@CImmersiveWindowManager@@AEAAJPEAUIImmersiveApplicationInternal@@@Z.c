/*
 * XREFs of ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802188C0
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180092CB0 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x180029FC4 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::_RemoveApplication(CImmersiveWindowManager *this, IUnknown *a2)
{
  char *v4; // rdi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v6; // r8
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v4 = (char *)this + 208;
  v8 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))QueryInterface)(
    a2,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    &v8);
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
    (__int64)v4,
    &v8,
    v6,
    &v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  if ( !v9 )
    *((_BYTE *)this + 248) = 0;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  IUnknown_SetSite(a2, 0LL);
  return 0LL;
}
