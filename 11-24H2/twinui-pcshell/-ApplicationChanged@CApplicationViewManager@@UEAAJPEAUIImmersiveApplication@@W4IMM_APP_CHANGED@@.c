/*
 * XREFs of ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180141020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180141150 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::ApplicationChanged(__int64 a1, struct IImmersiveApplication *a2, int a3)
{
  CApplicationViewManager *v5; // rbx
  int ViewForApplication; // ebx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  struct IApplicationView *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  struct IApplicationView *v13; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]

  if ( a3 != 8 )
    return 0LL;
  v13 = 0LL;
  v5 = (CApplicationViewManager *)(a1 - 40);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  ViewForApplication = CApplicationViewManager::GetViewForApplication(v5, a2, &v13);
  if ( ViewForApplication >= 0 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v7 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v13)(
           v13,
           &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0,
           &v12);
    ViewForApplication = v7;
    if ( v7 >= 0 )
    {
      LOBYTE(v8) = 1;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 40LL))(v12, v8);
      ViewForApplication = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31E,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v9);
      v10 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return (unsigned int)ViewForApplication;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31D,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  return (unsigned int)ViewForApplication;
}
