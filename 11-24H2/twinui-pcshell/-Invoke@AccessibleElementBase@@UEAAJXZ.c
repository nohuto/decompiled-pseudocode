/*
 * XREFs of ?Invoke@AccessibleElementBase@@UEAAJXZ @ 0x1804D3310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800D1014 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x1804CE900 (-SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D3BC0 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::Invoke(AccessibleElementBase *this)
{
  AccessibleElementBase *v1; // rbx
  int Element; // ebx
  ElementHelpers *v3; // rbx
  struct IMultitaskingViewElement *v4; // rdx
  char *v5; // rax
  ElementHelpers *v7; // [rsp+30h] [rbp+10h] BYREF
  ElementHelpers *v8; // [rsp+38h] [rbp+18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF

  v7 = 0LL;
  v1 = (AccessibleElementBase *)((char *)this - 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  Element = AccessibleElementBase::_GetElement(v1, &v7);
  if ( Element >= 0 )
  {
    v3 = v7;
    v8 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    while ( v3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(ElementHelpers *, _QWORD))(*(_QWORD *)v3 + 160LL))(v3, 0LL) )
      {
        ElementHelpers::SetFocusToElement(v3, v4);
        break;
      }
      v5 = (char *)(*(__int64 (__fastcall **)(ElementHelpers *, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, &v9);
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v8, v5);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
      v3 = v8;
    }
    (*(void (__fastcall **)(ElementHelpers *))(*(_QWORD *)v7 + 312LL))(v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    Element = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return (unsigned int)Element;
}
