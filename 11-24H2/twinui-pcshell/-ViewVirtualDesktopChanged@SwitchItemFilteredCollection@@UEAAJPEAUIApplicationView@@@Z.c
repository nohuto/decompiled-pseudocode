/*
 * XREFs of ?ViewVirtualDesktopChanged@SwitchItemFilteredCollection@@UEAAJPEAUIApplicationView@@@Z @ 0x1804B6760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1804B6AC4 (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SwitchItemFilteredCollection::ViewVirtualDesktopChanged(
        SwitchItemFilteredCollection *this,
        struct IUnknown *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int i; // esi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IObservableItem **)); // rbx
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, struct IObservableItem **); // rdi
  int v13; // eax
  __int64 v14; // rdx
  struct IUnknown *v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IObservableItem **); // [rsp+80h] [rbp+40h] BYREF
  struct IObservableItem *v19; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), &v17);
  v5 = v4;
  if ( v4 >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= v17 )
        return 0LL;
      v18 = 0LL;
      v8 = *((_QWORD *)this + 3);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IObservableItem **)))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      v10 = v9(v8, i, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v18);
      v5 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF3,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_17;
      }
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IObservableItem **), struct IUnknown **))(*v18)[3])(
        v18,
        v15);
      if ( SHIsSameObject(a2, v15[0]) )
        break;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    }
    v19 = 0LL;
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
    v12 = **v18;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    v13 = v12(v11, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, &v19);
    v5 = v13;
    if ( v13 >= 0 )
    {
      v13 = SwitchItemFilteredCollection::_ApplyFilterToItem(
              (SwitchItemFilteredCollection *)((char *)this - 160),
              v19,
              *((_DWORD *)this + 29) > 0);
      v5 = v13;
      if ( v13 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
        return 0LL;
      }
      v14 = 249LL;
    }
    else
    {
      v14 = 248LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v15);
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v4);
  }
  return v5;
}
