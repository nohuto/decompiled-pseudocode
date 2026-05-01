/*
 * XREFs of ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x1804B6C28
 * Callers:
 *     ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804B5780 (-ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1804B6AC4 (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(
        struct IUnknown **this,
        int (__fastcall ***a2)(struct IObservableItem *, GUID *, __int64 *))
{
  char v4; // si
  int (__fastcall *v5)(struct IObservableItem *, GUID *, __int64 *); // rbx
  struct IApplicationView *v6; // rdx
  ApplicationViewHelpers *v7; // rbx
  int (__fastcall *v8)(ApplicationViewHelpers *, struct IUnknown **); // rdi
  struct IUnknown *v9; // rcx
  const WCHAR *v10; // rbx
  LPCWSTR *v11; // rax
  HWND v12; // rax
  HWND v13; // rax
  HWND WindowForView; // rbx
  struct IUnknown *v16; // [rsp+78h] [rbp+48h] BYREF
  ApplicationViewHelpers *v17; // [rsp+80h] [rbp+50h] BYREF
  __int64 v18; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v18 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  if ( v5((struct IObservableItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v18) >= 0 )
  {
    (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v18 + 24LL))(v18, &v17);
    v4 = 1;
    if ( this[25] )
    {
      v16 = 0LL;
      v7 = v17;
      v8 = *(int (__fastcall **)(ApplicationViewHelpers *, struct IUnknown **))(*(_QWORD *)v17 + 80LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      if ( v8(v7, &v16) >= 0 )
        v4 = SHIsSameObject(v16, this[25]);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      if ( !v4 )
        goto LABEL_22;
    }
    v9 = this[26];
    if ( v9 )
    {
      LODWORD(v16) = 0;
      if ( ((int (__fastcall *)(struct IUnknown *, ApplicationViewHelpers *, struct IUnknown **))v9->lpVtbl[1].QueryInterface)(
             v9,
             v17,
             &v16) < 0
        || !(_DWORD)v16 )
      {
        goto LABEL_18;
      }
      v4 = 1;
    }
    v10 = (const WCHAR *)this[31];
    if ( v10 )
    {
      if ( *v10 )
      {
        v11 = (LPCWSTR *)((__int64 (__fastcall *)(int (__fastcall ***)(struct IObservableItem *, GUID *, __int64 *)))(*a2)[3])(a2);
        v4 = FindStringOrdinal(0x400000u, *v11, -1, v10, -1, 1) >= 0;
      }
      if ( !v4 )
        goto LABEL_22;
    }
    if ( !*((_BYTE *)this + 280)
      || (v12 = (HWND)ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v17,
                        v6),
          !GetPropW(v12, (LPCWSTR)0xA920)) )
    {
      if ( !*((_BYTE *)this + 282)
        || (v13 = (HWND)ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v17,
                          v6),
            !GetPropW(v13, (LPCWSTR)0xA921)) )
      {
        if ( *((_BYTE *)this + 281) )
        {
          WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v17,
                                  v6);
          if ( !GetPropW(WindowForView, (LPCWSTR)0xA920) )
            v4 = GetPropW(WindowForView, (LPCWSTR)0xA921) != 0LL ? v4 : 0;
        }
        goto LABEL_22;
      }
    }
LABEL_18:
    v4 = 0;
LABEL_22:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  return v4;
}
