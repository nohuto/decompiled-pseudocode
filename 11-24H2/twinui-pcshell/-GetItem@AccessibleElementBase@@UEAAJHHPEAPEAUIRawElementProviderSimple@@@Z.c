/*
 * XREFs of ?GetItem@AccessibleElementBase@@UEAAJHHPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804D2A20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804D3B8C (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::GetItem(
        AccessibleElementBase *this,
        int a2,
        int a3,
        struct IRawElementProviderSimple **a4)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  AccessibleElementBase *v7; // rbx
  int Element; // ebx
  void *v9; // rbx
  __int64 (__fastcall *v10)(void *, __int64, __int64, __int64 *); // rdi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  void *v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a2;
  *a4 = 0LL;
  v15 = 0LL;
  v7 = (AccessibleElementBase *)((char *)this - 72);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  Element = AccessibleElementBase::_GetElement(v7, &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2, &v15);
  if ( Element >= 0 )
  {
    v14 = 0LL;
    v9 = v15;
    v10 = *(__int64 (__fastcall **)(void *, __int64, __int64, __int64 *))(*(_QWORD *)v15 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    Element = v10(v9, v6, v5, &v14);
    if ( Element >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IRawElementProviderSimple **))(*(_QWORD *)v14 + 376LL))(
              v14,
              &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
              a4);
      Element = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25E,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  return (unsigned int)Element;
}
