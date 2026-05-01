/*
 * XREFs of ??$FindEx@VCompareToItemData@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareToItemData@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804C7500
 * Callers:
 *     ?GetSwitchItemElementIndex@CSwitchItemGrid@@UEAAJPEAUISwitchItem@@PEA_K@Z @ 0x1804C82B0 (-GetSwitchItemElementIndex@CSwitchItemGrid@@UEAAJPEAUISwitchItem@@PEA_K@Z.c)
 *     ?ItemRemoved@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804C8520 (-ItemRemoved@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z.c)
 *     ?NavigateToItem@CSwitchItemGrid@@UEAAJPEAUIUnknown@@@Z @ 0x1804C8C40 (-NavigateToItem@CSwitchItemGrid@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIMultitaskingViewGridElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C7380 (--$As@UIMultitaskingViewGridElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<CompareToItemData>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 i; // rbx
  __int64 (__fastcall ****v8)(_QWORD, GUID *, __int64 *); // rcx
  BOOL v9; // edi
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  *a4 = 0LL;
  for ( i = 0LL; i < a1[1]; ++i )
  {
    v8 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*a1 + 8 * i);
    v11 = 0LL;
    v9 = (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewGridElement>(v8, &v11) < 0
      || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, *a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    if ( !v9 )
    {
      *a4 = i;
      return 0LL;
    }
  }
  return 2147647531LL;
}
