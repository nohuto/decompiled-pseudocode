/*
 * XREFs of ?_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z @ 0x1804D3E08
 * Callers:
 *     ?ScrollIntoView@AccessibleElementBase@@UEAAJXZ @ 0x1804D37F0 (-ScrollIntoView@AccessibleElementBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800D1014 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C73D0 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D3BC0 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::_GetParentScrollViewer(
        AccessibleElementBase *this,
        struct IScrollViewer **a2)
{
  int Element; // ebx
  char *v5; // rax
  struct IScrollViewer *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IMultitaskingViewElement *v9; // [rsp+48h] [rbp+28h] BYREF
  struct IScrollViewer *v10; // [rsp+50h] [rbp+30h] BYREF
  __int64 v11; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  Element = AccessibleElementBase::_GetElement(this, &v9);
  if ( Element >= 0 )
  {
    v10 = 0LL;
    while ( v9
         && (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(
                   (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v9,
                   (__int64 *)&v10) < 0 )
    {
      v5 = (char *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)v9 + 24LL))(
                     v9,
                     &v11);
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v9, v5);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    }
    v6 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      *a2 = v6;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
      Element = 0;
    }
    else
    {
      Element = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2DE,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)0x80070490LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  return (unsigned int)Element;
}
