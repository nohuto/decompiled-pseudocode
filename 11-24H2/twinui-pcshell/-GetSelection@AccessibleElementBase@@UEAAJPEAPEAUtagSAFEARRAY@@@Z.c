/*
 * XREFs of ?GetSelection@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804D30D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D3BC0 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibleElementBase::GetSelection(AccessibleElementBase *this, struct tagSAFEARRAY **a2)
{
  AccessibleElementBase *v3; // rbx
  int Element; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, GUID *, void **); // rdi
  HRESULT v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r9
  SAFEARRAY *v10; // rax
  SAFEARRAY *Vector; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  LONG rgIndices; // [rsp+50h] [rbp+28h] BYREF
  __int64 v15; // [rsp+58h] [rbp+30h] BYREF
  void *pv; // [rsp+60h] [rbp+38h] BYREF
  struct IMultitaskingViewElement *v17; // [rsp+68h] [rbp+40h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  Element = AccessibleElementBase::_GetElement(v3, &v17);
  if ( Element < 0 )
    goto LABEL_18;
  (*(void (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)v17 + 336LL))(v17, &v15);
  if ( !v15
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 152LL))(v15)
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 168LL))(v15) )
  {
    Vector = SafeArrayCreateVector(0xDu, 0, 0);
    *a2 = Vector;
    if ( !Vector )
    {
      Element = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x170,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  pv = 0LL;
  v5 = v15;
  v6 = *(__int64 (__fastcall **)(__int64, GUID *, void **))(*(_QWORD *)v15 + 376LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pv);
  v7 = v6(v5, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pv);
  Element = v7;
  if ( v7 >= 0 )
  {
    v10 = SafeArrayCreateVector(0xDu, 0, 1u);
    *a2 = v10;
    if ( !v10 )
    {
      Element = -2147024882;
      v9 = 2147942414LL;
      v8 = 376LL;
      goto LABEL_8;
    }
    rgIndices = 0;
    v7 = SafeArrayPutElement(v10, &rgIndices, pv);
    Element = v7;
    if ( v7 < 0 )
    {
      v8 = 379LL;
      goto LABEL_7;
    }
    pv = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pv);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    return 0LL;
  }
  v8 = 373LL;
LABEL_7:
  v9 = (unsigned int)v7;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
    (const char *)v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pv);
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  return (unsigned int)Element;
}
