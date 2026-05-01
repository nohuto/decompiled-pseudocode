/*
 * XREFs of ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1800910D8
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180090E44 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18002A498 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180091900 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_RemoveApplication(CApplicationManager *this, IUnknown *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  void *v5; // rcx
  void *ppv; // [rsp+60h] [rbp+20h] BYREF
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 v8; // [rsp+70h] [rbp+30h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))QueryInterface)(
    a2,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    &v7);
  CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>((__int64)this, &v7, 0LL, &v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  CActivationBasedAppAndGlomCollection::RemoveApplication((CApplicationManager *)((char *)this + 624), v8);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  if ( IUnknown_GetSite(a2, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv) >= 0 )
    (*(void (__fastcall **)(void *, IUnknown *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL))(
      ppv,
      a2,
      0LL,
      0LL,
      6,
      0LL);
  v5 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
