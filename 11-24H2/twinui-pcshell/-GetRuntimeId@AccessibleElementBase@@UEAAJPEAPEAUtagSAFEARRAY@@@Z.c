/*
 * XREFs of ?GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804D3010
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D3BC0 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_GetRuntimeIdArray@AccessibleElementBase@@IEAAJ_KPEAPEAUtagSAFEARRAY@@@Z @ 0x1804D3EE8 (-_GetRuntimeIdArray@AccessibleElementBase@@IEAAJ_KPEAPEAUtagSAFEARRAY@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::GetRuntimeId(AccessibleElementBase *this, struct tagSAFEARRAY **a2)
{
  AccessibleElementBase *v3; // rsi
  __int64 v4; // rbx
  AccessibleElementBase *v5; // rcx
  int RuntimeIdArray; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMultitaskingViewElement *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  LODWORD(v4) = AccessibleElementBase::_GetElement(v3, &v9);
  if ( (int)v4 >= 0 )
  {
    v4 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)v9 + 24LL))(
                      v9,
                      &v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    if ( v4 )
    {
      RuntimeIdArray = AccessibleElementBase::_GetRuntimeIdArray(v5, (unsigned __int64)v3, a2);
      LODWORD(v4) = RuntimeIdArray;
      if ( RuntimeIdArray < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF6,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)RuntimeIdArray);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v4;
}
