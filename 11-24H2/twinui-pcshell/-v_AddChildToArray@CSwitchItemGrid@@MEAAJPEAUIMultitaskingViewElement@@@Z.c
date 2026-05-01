/*
 * XREFs of ?v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804C9BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@VElementCompare@ElementHelpers@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_K@Z @ 0x1804C3340 (--$_InsertAt@$$QEAV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPt.c)
 *     ??$BinarySearchEx@VCompareGridElements@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareGridElements@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K@Z @ 0x1804C7420 (--$BinarySearchEx@VCompareGridElements@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElemen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemGrid::v_AddChildToArray(CSwitchItemGrid *this, struct IMultitaskingViewElement *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  struct IMultitaskingViewElement *v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)((char *)this + 16);
  v5 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
  v6 = 0LL;
  CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::BinarySearchEx<CompareGridElements>(
    v2,
    v3,
    (__int64)&v5,
    &v6);
  LODWORD(v2) = CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>,ElementHelpers::ElementCompare,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>>::_InsertAt<Microsoft::WRL::ComPtr<IMultitaskingViewElement> &&>(
                  v2,
                  &v5,
                  v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
  return (unsigned int)v2;
}
